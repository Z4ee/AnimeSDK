#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseMethod_TypeDefinitionIndex = 13352;

	enum class ItemUseMethod : ::System::Int32
	{
		Unknown = 0,
		FixedRewardGift = 101,
		RandomRewardGift = 102,
		PlayerSelectedReward = 103,
		PlayerSelectedRewardPack = 104,
		TeamFoodBenefit = 201,
		TeamSpecificFoodBenefit = 202,
		ExternalSystemFoodBenefit = 203,
		FindChest = 204,
		PlayerSelectedDropGift = 301,
		TreasureMap = 401,
		Recipe = 501,
		PerformanceProp = 601,
		MonthlyCard = 701,
		BPUnlock68 = 702,
		BPUnlock128 = 703,
		BPUpgradeFrom68To128 = 704,
		AutoConversionItem = 801,
		TravelBrochureUse = 901,
		TravelBrochurePasterUse = 902,
		PetSummonRecall = 1001,
		ClientGoto = 1101,
		FightFestMemorialPaper = 2501,
		Anniv3rdLiveItem = 4201,
	};
}
