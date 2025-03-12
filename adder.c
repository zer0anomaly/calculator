#include <stdio.h>

int first_number, second_number;
char operator;

int main()
{
	printf("Type the first number:\n");
	scanf("%d", &first_number);
	printf("Type the second number:\n");
	scanf("%d", &second_number);
	printf("Choose opertaion to perform: + ...");
	scanf(" %c", &operator);
	if (operator == '+'){
		int result = first_number + second_number;
		printf("%d\n", result);
	}

}

