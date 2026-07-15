#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionBarUpdateTiming_TypeDefinitionIndex = 68086;

	enum class ActionBarUpdateTiming : ::System::Int32
	{
		OnInit = 0,
		OnAddEntity = 1,
		OnRemoveEntity = 2,
		OnTurnStateActionPhaseEnd = 3,
		OnTurnStateAfterWaitOrder = 4,
		OnTurnStateDuringTurn = 5,
		OnTurnStateTurnBegin = 6,
		OnTurnStateActionPhaseBegin = 7,
		OnTurnStateInsertAbilityPhase = 8,
		OnInsertUltraSkill = 9,
		OnUltraSkillExecuting = 10,
		OnUltraSkillEnd = 11,
		OnClearUltraSkillQueue = 12,
		OnCancelUltraSkill = 13,
		OnResetAll = 14,
		OnReset = 15,
		OnInsertAbilitySort = 16,
		OnUltraSkillWaitOrder = 17,
		OnSkillPreview = 18,
		OnCancelSkillPreview = 19,
		OnInsertAbilityAdd = 20,
		OnInsertAbilityEnd = 21,
		OnActionBarItemSizeChanged = 22,
	};
}
