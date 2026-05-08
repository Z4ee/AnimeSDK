#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeatherType_TypeDefinitionIndex = 59772;

	enum class WeatherType : ::System::Int32
	{
		SunShine = 0,
		Cloudy = 2,
		None = -1,
		ThickCloudy = 6,
		ThickFog = 5,
		Thunder = 4,
		Fog = 1,
		Rain = 3,
	};
}
