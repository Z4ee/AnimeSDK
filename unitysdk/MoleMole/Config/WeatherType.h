#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeatherType_TypeDefinitionIndex = 51339;

	enum class WeatherType : ::System::Int32
	{
		Rain = 3,
		Thunder = 4,
		ThickCloudy = 6,
		None = -1,
		ThickFog = 5,
		Fog = 1,
		Cloudy = 2,
		SunShine = 0,
	};
}
