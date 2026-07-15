#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeState_TypeDefinitionIndex = 15806;

	enum class GameModeState : ::System::Int32
	{
		PreBattle = 0,
		Battle = 1,
		BattleFinish = 2,
		Finish = 3,
	};
}
