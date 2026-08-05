#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowShopType_TypeDefinitionIndex = 24999;

	enum class HollowShopType : ::System::Int32
	{
		HOLLOW_SHOP_TYPE_NONE = 0,
		HOLLOW_SHOP_TYPE_CURSE = 3,
		HOLLOW_SHOP_TYPE_UPGRADE_CARD = 7,
		HOLLOW_SHOP_TYPE_HOLLOW_ITEM = 4,
		HOLLOW_SHOP_TYPE_ITEM = 1,
		HOLLOW_SHOP_TYPE_CARD = 2,
		HOLLOW_SHOP_TYPE_GACHA_SHOP = 6,
		HOLLOW_SHOP_TYPE_DISCOUNT = 5,
	};
}
