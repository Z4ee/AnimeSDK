#pragma once
#include "unitysdk/unitysdk.h"

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int Sign_TypeDefinitionIndex = 8671;

	enum class Sign : ::System::Int32
	{
		Positive = 0,
		Negative = 1,
	};
}
