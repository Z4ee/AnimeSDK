#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopType_TypeDefinitionIndex = 9971;

	enum class EHollowShopType : ::System::Int16
	{
		Curse = 3,
		Item = 1,
		HollowItem = 4,
		All = 0,
		EnumCount = 7,
		Card = 2,
		Gachashop = 6,
		Discount = 5,
	};
}
