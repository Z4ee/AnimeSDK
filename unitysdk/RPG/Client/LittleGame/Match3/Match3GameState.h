#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int Match3GameState_TypeDefinitionIndex = 40461;

	enum class Match3GameState : ::System::Int32
	{
		Input = 0,
		TurnStart = 1,
		TurnEndShow = 2,
		BattleShow = 3,
		Finish = 4,
		PvpGameInit = 5,
		PvpTurnFinish = 6,
		PvpWaitTurnEnd = 7,
		PvpError = 8,
		RoleChange = 9,
		Pvp1v1GameStart = 10,
		PvpRoyaleTurnFinish = 11,
	};
}
