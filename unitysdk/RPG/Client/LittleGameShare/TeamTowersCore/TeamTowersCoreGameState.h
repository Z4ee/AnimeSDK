#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersCoreGameState_TypeDefinitionIndex = 35534;

	enum class TeamTowersCoreGameState : ::System::Byte
	{
		None = 0x0,
		WaitingStart = 0x1,
		Prepare = 0x2,
		Gaming = 0x3,
		Finished = 0x4,
		WaitingClean = 0x5,
		Destroyed = 0x6,
	};
}
