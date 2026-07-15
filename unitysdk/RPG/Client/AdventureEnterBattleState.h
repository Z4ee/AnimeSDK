#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureEnterBattleState_TypeDefinitionIndex = 57455;

	enum class AdventureEnterBattleState : ::System::Int32
	{
		Empty = 0,
		Waiting = 1,
		LoadingBattleScene = 2,
		OnLeaveAdventurePhase = 3,
		InBattle = 4,
	};
}
