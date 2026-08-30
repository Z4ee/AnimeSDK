#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDetailDisplayMode_TypeDefinitionIndex = 80683;

	enum class B51RacingCarDetailDisplayMode : ::System::Int32
	{
		Normal = 0,
		DevelopTarget = 1,
		DriverBonus = 2,
	};
}
