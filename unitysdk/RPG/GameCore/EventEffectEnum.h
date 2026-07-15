#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventEffectEnum_TypeDefinitionIndex = 12132;

	enum class EventEffectEnum : ::System::Int32
	{
		Unknown = 0,
		IncreaseOrderProfit = 4,
		IncreaseGoodsProfit = 6,
		UnlockShip = 8,
		SetLogisticsMap = 10,
		UnlockLogisticsSlash = 11,
		UpgradeShop = 12,
		UnlockLayerReward = 14,
	};
}
