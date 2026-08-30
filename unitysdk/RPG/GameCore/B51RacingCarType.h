#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingCarType_TypeDefinitionIndex = 10929;

	enum class B51RacingCarType : ::System::Int32
	{
		None = 0,
		Player = 1,
		Enemy = 2,
	};
}
