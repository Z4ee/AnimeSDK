#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersStatType_TypeDefinitionIndex = 35575;

	enum class TeamTowersStatType : ::System::Int32
	{
		None = 0,
		PlaceBrickSumCnt = 1,
		CurPlaceBrickSeriousSuccessCnt = 2,
		MaxPlaceBrickSeriousSuccessCnt = 3,
		MaxHeight = 4,
		CastSkillCnt = 5,
		DamageValue = 6,
		DamagePercent = 7,
		SavePlayerCnt = 8,
		DeadCnt = 9,
		BrickDeadCnt = 10,
		ReviveCnt = 11,
		ReachHeightLineCnt = 12,
		CastSkillCntBySkillID = 13,
		ReviveSpeedUpCnt = 14,
		PlayerHpDownCnt = 15,
	};
}
