#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTitleParamType_TypeDefinitionIndex = 10618;

	enum class CakeRaceTitleParamType : ::System::Int32
	{
		None = 0,
		FightEndRankCnt = 1,
		HeldDownCnt = 2,
		AllBetCnt = 3,
		ChampionAheadMaxGrid = 4,
		OvertakeOtherCatCnt = 5,
		ReviveCnt = 6,
		BattleItemAffectCnt = 7,
		JumpCnt = 8,
		CertainBetChampionCnt = 9,
		CertainRankCnt = 10,
		PickupFoodCnt = 11,
	};
}
