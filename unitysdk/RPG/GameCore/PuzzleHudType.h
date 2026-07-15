#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleHudType_TypeDefinitionIndex = 13520;

	enum class PuzzleHudType : ::System::Int32
	{
		None = 0,
		Drone = 1,
		WolfBro = 2,
		IsometricView = 3,
		SwitchHand = 4,
		PlayerRide = 5,
		SwitchMascot = 6,
	};
}
