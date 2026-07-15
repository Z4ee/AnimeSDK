#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableYFollowMode_TypeDefinitionIndex = 17889;

	enum class DisableYFollowMode : ::System::Int32
	{
		None = 0,
		GroundJumpHeight = 1,
		DoubleJumpHeight = 2,
		TakeOffHeight = 3,
		WaterLevelHeight = 4,
	};
}
