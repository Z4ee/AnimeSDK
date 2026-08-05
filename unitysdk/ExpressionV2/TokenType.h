#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 80799;

	enum class TokenType : ::System::Int32
	{
		String = 1,
		Operator = 4,
		Comma = 7,
		RightParen = 6,
		Number = 0,
		Function = 3,
		LeftParen = 5,
		Variable = 2,
	};
}
