#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirGameState_TypeDefinitionIndex = 41079;

	enum class PixAirGameState : ::System::Int32
	{
		Invalid = 0,
		InBattle = 1,
		BattleEnding = 2,
		Settle = 3,
	};
}
