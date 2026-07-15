#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerSetDynamicValueType_TypeDefinitionIndex = 23719;

	enum class ServerSetDynamicValueType : ::System::Int32
	{
		Unknow = 0,
		SetDynamicValueByItemNum = 1,
		SetDynamicValueByRogueActionPoint = 2,
		SetDynamicValueByRogueBattleWinTime = 3,
		SetDynamicValueByRogueBrokenMiracleNum = 4,
		SetDynamicValueByRogueBuffNum = 5,
		SetDynamicValueByRogueBuffNumWithType = 6,
		SetDynamicValueByRogueBuffTypeNum = 7,
		SetDynamicValueByRogueDiceAccumulate = 8,
		SetDynamicValueByRogueJoyValue = 9,
		SetDynamicValueByRogueKillPassiveMonster = 10,
		SetDynamicValueByRogueLayer = 11,
		SetDynamicValueByRogueMiracleNum = 12,
		SetDynamicValueByRogueMiracleRecord = 13,
		SetDynamicValueByRogueModifierCount = 14,
		SetDynamicValueByRoguePassCell = 15,
		SetDynamicValueByRoguePassEmptyCell = 16,
		SetDynamicValueByRoguePassReplicateCell = 17,
		SetDynamicValueByRoguePassSwarmCell = 18,
		SetDynamicValueByRogueProtectedCell = 19,
		SetDynamicValueByRogueSelectAeon = 20,
		SetDynamicValueByRogueSpecialCellNum = 21,
		SetDynamicValueByRogueSpecificCategoryMiracleNum = 22,
		SetDynamicValueByRogueInactiveFormulaNum = 23,
		SetDynamicValueByRogueActiveFormulaNum = 24,
		SetDynamicValueByRogueRoomType = 25,
		SetDynamicValueByRogueDifficultyCompLevel = 26,
		SetDynamicValueByRogueMiracleUseCount = 27,
		SetDynamicValueByRogueDifficultyCompMapping = 28,
		SetDynamicValueByRogueMiracleRemainCount = 29,
		SetDynamicValueByRogueMiracleTotalCount = 30,
		SetDynamicValueByRogueMagicUnitNum = 31,
		SetDynamicValueByRogueMagicScepterNum = 32,
		SetDynamicValueByRogueReachRoomNum = 33,
		SetDynamicValueByRogueFinishRoomNum = 34,
		SetDynamicValueByRogueAreaDifficulty = 35,
		SetDynamicValueByRogueTournAreaDivisionLevel = 36,
		SetDynamicValueByRogueBuffNumOfMinNumBuffType = 37,
		SetDynamicValueByRogueBuffNumWithCategory = 38,
		SetDynamicValueByRogueFormulaNum = 39,
	};
}
