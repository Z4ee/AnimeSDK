#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnState_TypeDefinitionIndex = 17492;

	enum class TurnState : ::System::Int32
	{
		Unknow = 0,
		BattleEnter = 1,
		TurnPrepareStart = 2,
		TurnBegin = 3,
		ModifierPhase1Begin = 4,
		ModifierPhase1End = 5,
		InsertAbilityPhase1Begin = 6,
		InsertAbilityPhase1End = 7,
		ActionPhaseBegin = 8,
		SelfActionBegin = 9,
		SelfActionPrepare = 10,
		SelfWaitActionOrder1 = 11,
		SelfActionExecuting1 = 12,
		InsertAbilityActionPhase = 13,
		SelfActionEnd = 14,
		ActionPhaseEnd = 15,
		InsertUltraSkill = 16,
		ModifierPhase2Begin = 17,
		ModifierPhase2End = 18,
		InsertAbilityPhase2 = 19,
		TurnEnd = 20,
		InsertUltraSkillPrepare = 21,
		InsertUltraSkillWaitOrder = 22,
		InsertUltraSkillExecuting = 23,
		InsertAbilityAfterUltraSkillBegin = 24,
		InsertAbilityAfterUltraSkillEnd = 25,
		BattlePerformExecuting = 26,
		BattleAvatarChange = 27,
	};
}
