#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceLoadingDisplayState_TypeDefinitionIndex = 71012;

	enum class CakeRaceLoadingDisplayState : ::System::Int32
	{
		Normal = 1,
		WaitOtherPlayers = 2,
		WaitReturn = 3,
		Quit = 4,
	};
}
