#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopType_TypeDefinitionIndex = 12747;

	enum class EHollowShopType : ::System::Int16
	{
		EnumCount = 7,
		Discount = 5,
		All = 0,
		Gachashop = 6,
		Card = 2,
		HollowItem = 4,
		Item = 1,
		Curse = 3,
	};
}
