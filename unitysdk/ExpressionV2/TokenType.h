#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 79837;

	enum class TokenType : ::System::Int32
	{
		RightParen = 6,
		Comma = 7,
		Variable = 2,
		Operator = 4,
		LeftParen = 5,
		String = 1,
		Number = 0,
		Function = 3,
	};
}
