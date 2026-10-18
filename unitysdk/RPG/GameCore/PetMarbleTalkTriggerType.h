#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetMarbleTalkTriggerType_TypeDefinitionIndex = 14442;

	enum class PetMarbleTalkTriggerType : ::System::Int32
	{
		OnGameStart = 0,
		OnRoundStart = 1,
		OnAimAction = 2,
		OnShootAction = 3,
		OnKillAction = 4,
		OnSkillAction = 5,
		OnEnemyKilledAction = 6,
		OnPlayerTurnStart = 7,
		OnAimTooLong = 8,
	};
}
