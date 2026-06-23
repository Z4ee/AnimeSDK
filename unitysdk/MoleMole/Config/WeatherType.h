#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeatherType_TypeDefinitionIndex = 59687;

	enum class WeatherType : ::System::Int32
	{
		Cloudy = 2,
		None = -1,
		Rain = 3,
		Fog = 1,
		ThickFog = 5,
		SunShine = 0,
		ThickCloudy = 6,
		Thunder = 4,
	};
}
