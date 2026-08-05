#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopCurrency_TypeDefinitionIndex = 16378;

	enum class EHollowShopCurrency : ::System::Int16
	{
		Random = 3,
		Coin = 1,
		Curse = 2,
	};
}
