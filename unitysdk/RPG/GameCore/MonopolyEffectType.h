#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEffectType_TypeDefinitionIndex = 11559;

	enum class MonopolyEffectType : ::System::Int32
	{
		None = 0,
		AddCoin = 1,
		SubCoin = 2,
		UpgradeAsset = 3,
		GainAssetTax = 4,
		DailySttRecord = 5,
		MBTIRecord = 6,
		AddMBTIValueX = 7,
		SubMBTIValueX = 8,
		AddMBTIValueY = 9,
		SubMBTIValueY = 10,
		FinishQuiz = 11,
		FriendRankingRecord = 12,
		ItemAddExtraRatio = 13,
		GameGuessStatus = 14,
		ExtraMoveAction = 15,
		GameGuessDraw = 16,
		RandomOptionExtraRollResult = 17,
		GetBuff = 18,
		GetItem = 19,
		RemoveAllBuff = 20,
		TriggerTeleport = 21,
		AddFriendCoin = 22,
		SubFriendCoin = 23,
		GameExtraRatioCap = 25,
		StartConfigNewGame = 27,
		StartCellNewGame = 28,
		EnterGroundLayer = 29,
		AddCoinPercent = 30,
		StartShop = 31,
		GuideRule = 32,
		SetRemainStep = 33,
		GameQuizStatus = 34,
		EnterDream = 35,
		LeaveDreamOnDreamDiceUseUp = 36,
	};
}
