#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSourceSubType_TypeDefinitionIndex = 11712;

	enum class PlanetFesSourceSubType : ::System::Int32
	{
		None = 0,
		LandWorkAvatarChange = 1,
		LandProfitPerSecondChange = 2,
		AvatarLevelUp = 3,
		LandCollectIncome = 4,
		LandBuyIn = 5,
		CardActivate = 6,
		AvatarStarUp = 7,
		AvatarPieceTransfer = 8,
		FesLevelUp = 9,
		Gameplay = 10,
		Achievement = 12,
		Task = 13,
		GachaAvatar = 14,
		GachaCard = 15,
		UnlockFinish = 16,
		SkillLevelUp = 17,
		BusinessDayUnlock = 18,
		BusinessDayEnter = 19,
		BusinessDayFinish = 20,
		BusinessDayStat = 21,
		BusinessDayPamCaogo = 22,
		BusinessDayAvatarVisit = 23,
		BusinessDayLandGame = 24,
		RegionProgress = 25,
		BusinessDayGameRaise = 26,
		BusinessDayGameGacha = 27,
		BusinessDayGameBingo = 28,
		ItemAutoUse = 29,
		ItemClientUse = 30,
		CardPieceApply = 31,
		CardPieceOffer = 32,
		CardPieceSyncSns = 33,
		CardPieceTakeOffer = 34,
		BusinessDayBonusInteract = 35,
		BusinessDayLittleBonusInteract = 36,
		BusinessDayMiddleBonusInteract = 37,
		BusinessDayLargeBonusInteract = 38,
	};
}
