#pragma once
#include "unitysdk/unitysdk.h"

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int Sign_TypeDefinitionIndex = 7038;

	enum class Sign : ::System::Int32
	{
		Positive = 0,
		Negative = 1,
	};
}
