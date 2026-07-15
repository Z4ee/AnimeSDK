#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomLightQualityFilterV2_TypeDefinitionIndex = 36161;

	enum class CustomLightQualityFilterV2 : ::System::Int32
	{
		Low = 1,
		High = 4,
		ExtremeHigh = 8,
		All = 13,
	};
}
