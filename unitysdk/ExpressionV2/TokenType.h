#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 59938;

	enum class TokenType : ::System::Int32
	{
		Variable = 2,
		Function = 3,
		LeftParen = 5,
		Comma = 7,
		Number = 0,
		String = 1,
		Operator = 4,
		RightParen = 6,
	};
}
