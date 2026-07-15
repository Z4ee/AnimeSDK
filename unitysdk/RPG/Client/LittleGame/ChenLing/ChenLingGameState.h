#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingGameState_TypeDefinitionIndex = 41144;

	enum class ChenLingGameState : ::System::Int32
	{
		Invalid = 0,
		AdvanceInFormation = 1,
		InBattle = 3,
		HighLight = 6,
		GameFinish = 4,
		Settle = 5,
	};
}
