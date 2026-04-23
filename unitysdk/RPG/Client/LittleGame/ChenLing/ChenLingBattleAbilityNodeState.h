#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingBattleAbilityNodeState_TypeDefinitionIndex = 71362;

	enum class ChenLingBattleAbilityNodeState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Finished = 2,
		InValid = 3,
	};
}
