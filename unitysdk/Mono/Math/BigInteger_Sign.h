#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_Sign_TypeDefinitionIndex = 2308;

	enum class BigInteger_Sign : ::System::Int32
	{
		Negative = -1,
		Zero = 0,
		Positive = 1,
	};
}
