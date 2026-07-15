#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameFlowType_TypeDefinitionIndex = 10196;

	enum class GameFlowType : ::System::Int32
	{
		None = 0,
		ParkourBall = 1,
		ChallengePeak = 2,
		CakeRace = 3,
		DiceCombat = 401,
		ChenLingBattle = 411,
		IdleLive = 421,
		DiceCombatV2 = 422,
		ChenLingFes = 431,
	};
}
