#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int Match3BattleState_TypeDefinitionIndex = 38871;

	enum class Match3BattleState : ::System::Int32
	{
		Preparing = 0,
		BattleShow = 1,
		Finish = 2,
	};
}
