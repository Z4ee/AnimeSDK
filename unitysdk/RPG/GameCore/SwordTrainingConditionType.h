#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingConditionType_TypeDefinitionIndex = 11943;

	enum class SwordTrainingConditionType : ::System::Int32
	{
		None = 0,
		StatusGreaterOrEqual = 1,
		CurrentGameEventTriggerred = 2,
		SelectEnding = 3,
		PartnerAssistCount = 4,
		AnyStatusGreaterOrEqual = 5,
		ConditionOr = 6,
		CurActionPhaseAt = 7,
		CurActionLevelLessOrEqual = 8,
		CurActionType = 9,
		CurActionID = 10,
		PlanActionCntGreaterOrEqual = 11,
		TodayActionCntLessOrEqual = 12,
		ActionCntGreaterOrEqual = 13,
		ConditionAnd = 14,
		ActionCntLess = 15,
		PlanActionTypeLessOrEqual = 16,
		SpecificActionLastTimes = 18,
		CurTurn = 19,
		CurStoryLine = 20,
		CurTurnGreaterOrEqual = 21,
		CurRankGreaterOrEqual = 22,
		PlanActionTypeGreaterOrEqual = 23,
	};
}
