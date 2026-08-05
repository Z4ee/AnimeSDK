#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int Operator_TypeDefinitionIndex = 7624;

	enum class Operator : ::System::Int32
	{
		Equality = 0,
		Inequality = 1,
		Addition = 2,
		Subtraction = 3,
		Multiply = 4,
		Division = 5,
		LessThan = 6,
		GreaterThan = 7,
		LessThanOrEqual = 8,
		GreaterThanOrEqual = 9,
		Modulus = 10,
		RightShift = 11,
		LeftShift = 12,
		BitwiseAnd = 13,
		BitwiseOr = 14,
		ExclusiveOr = 15,
		BitwiseComplement = 16,
		LogicalAnd = 17,
		LogicalOr = 18,
		LogicalNot = 19,
	};
}
