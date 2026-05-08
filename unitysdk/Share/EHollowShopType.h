#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopType_TypeDefinitionIndex = 15592;

	enum class EHollowShopType : ::System::Int16
	{
		Gachashop = 6,
		Card = 2,
		HollowItem = 4,
		All = 0,
		EnumCount = 7,
		Curse = 3,
		Item = 1,
		Discount = 5,
	};
}
