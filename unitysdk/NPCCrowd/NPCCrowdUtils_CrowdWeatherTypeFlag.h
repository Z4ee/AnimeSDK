#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdUtils_CrowdWeatherTypeFlag_TypeDefinitionIndex = 70990;

	enum class NPCCrowdUtils_CrowdWeatherTypeFlag : ::System::Int32
	{
		Fog = 4,
		ThickCloudy = 128,
		Any = 0,
		ThickFog = 64,
		SunShine = 2,
		Rain = 16,
		None = 1,
		Thunder = 32,
		Cloudy = 8,
	};
}
