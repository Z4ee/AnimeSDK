#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelServerEffectType_TypeDefinitionIndex = 10732;

	enum class ChimeraDuelServerEffectType : ::System::Int32
	{
		None = 0,
		ShopEnableRefreshChimera = 1,
		ShopRefreshFixedGoods = 2,
		ShopRefreshChimeraWithEquip = 3,
		ShopFixedBonus = 4,
		ShopEnableRefreshChimeraGroup = 5,
		ShopEnableRefreshItemGroup = 6,
		ShopRefreshFixedItemByEnemy = 7,
		ShopChimeraWeightMultiply = 8,
		FoodAddStats = 101,
		FoodAddStatsDepends = 102,
		FoodTransferChimera = 103,
		CoreFlameAddStatus = 104,
		EquipOwnerAddRemovableStats = 201,
		AddStatsOnBuyChimeraWithEquip = 202,
		AddStatsOnBuyChimeraWithRarity = 203,
		AddStatsOnGetFood = 204,
		AddGoldOnEnterShop = 205,
		AddStatsOnOthersGetFood = 206,
		RetainGoldAcrossRound = 207,
		AddStatsOnEnterShop = 208,
		AutoBuyStatsOnLeaveShop = 209,
		PreChimeraAddStatsOnLeaveShop = 210,
		AddStatsOnBuyItem = 211,
		AllAddStatsOnEnterShop = 212,
		ApplyEffectForBestChimera = 301,
	};
}
