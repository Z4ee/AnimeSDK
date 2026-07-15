#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateLevelParamType_TypeDefinitionIndex = 10190;

	enum class FateLevelParamType : ::System::Int32
	{
		Undefine = 0,
		StageID = 1,
		PhaseID = 2,
		CasterTransferMainTraitID1 = 3,
		CasterTransferMainTraitID2 = 4,
		CasterTransferMainTraitID3 = 5,
		LevelAddCoin = 6,
		AliveMasterCount = 7,
		BattleMasterMaxHP = 8,
		BattleMasterCurHP = 9,
		TotalRoundCount = 10,
		LevelPlayerLoseHP = 11,
		HertaAffixLastEffectRound = 12,
		SurviveLethalDamageUseCount = 13,
		JingliuCostHP = 14,
		TopazWinTimes = 15,
	};
}
