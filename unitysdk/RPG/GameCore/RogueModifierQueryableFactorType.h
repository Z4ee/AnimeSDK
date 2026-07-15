#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierQueryableFactorType_TypeDefinitionIndex = 17230;

	enum class RogueModifierQueryableFactorType : ::System::Int32
	{
		None = 0,
		EnhanceBuffCost = 1,
		ReRollBuffCost = 2,
		ReviveAvatarCost = 3,
		BattleGainCoin = 4,
		AnyGainCoin = 5,
		PropDestructResult = 6,
		ShopPrice = 7,
		FreeBuffRollCount = 8,
		AdventureRoomTime = 9,
		BuffTypeCount = 10,
		TournRoomProbability = 11,
		WorkbenchReforgeBuffCost = 12,
		WorkbenchReforgeFormulaCost = 13,
		TournRoomMarkProbability = 14,
		WorkbenchReforgeMagicUnitCost = 15,
		MagicRogueRoomMarkProbability = 16,
		MagicRogueRoomProbability = 17,
		WorkbenchComposeMagicUnitCost = 18,
		WorkbenchMagicScepterShopCost = 19,
		WorkbenchMagicUnitShopCost = 20,
		GambleCost = 21,
		TournRoomVariantProbability = 22,
		ShopRefreshPrice = 23,
		ShopBattleRewardCount = 24,
		StyleExpGain = 25,
		StyleLevelUpRequiredExp = 26,
		HexEquipmentCount = 27,
	};
}
