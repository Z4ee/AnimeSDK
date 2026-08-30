#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingStatType_TypeDefinitionIndex = 10932;

	enum class B51RacingStatType : ::System::Int32
	{
		None = 0,
		Speed = 1,
		Acceleration = 2,
		Aggressiveness = 3,
		Drift = 4,
		Charge = 5,
	};
}
