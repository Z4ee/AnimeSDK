#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitTimeSlowIntensity_TypeDefinitionIndex = 17486;

	enum class HitTimeSlowIntensity : ::System::Int32
	{
		Light = 0,
		Middle = 1,
		Heavy = 2,
	};
}
