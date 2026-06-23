#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdUtils_CrowdWeatherTypeFlag_TypeDefinitionIndex = 41976;

	enum class NPCCrowdUtils_CrowdWeatherTypeFlag : ::System::Int32
	{
		None = 1,
		ThickCloudy = 128,
		SunShine = 2,
		Cloudy = 8,
		Thunder = 32,
		Any = 0,
		ThickFog = 64,
		Fog = 4,
		Rain = 16,
	};
}
