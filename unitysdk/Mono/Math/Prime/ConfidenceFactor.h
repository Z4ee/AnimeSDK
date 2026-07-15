#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int ConfidenceFactor_TypeDefinitionIndex = 2311;

	enum class ConfidenceFactor : ::System::Int32
	{
		ExtraLow = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		ExtraHigh = 4,
		Provable = 5,
	};
}
