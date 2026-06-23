#pragma once
#include "unitysdk/unitysdk.h"

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeBinaryOperatorType_TypeDefinitionIndex = 4244;

	enum class CodeBinaryOperatorType : ::System::Int32
	{
		Add = 0,
		Assign = 5,
		BitwiseAnd = 10,
		BitwiseOr = 9,
		BooleanAnd = 12,
		BooleanOr = 11,
		Divide = 3,
		GreaterThan = 15,
		GreaterThanOrEqual = 16,
		IdentityEquality = 7,
		IdentityInequality = 6,
		LessThan = 13,
		LessThanOrEqual = 14,
		Modulus = 4,
		Multiply = 2,
		Subtract = 1,
		ValueEquality = 8,
	};
}
