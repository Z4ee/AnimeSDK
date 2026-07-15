#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemSellType_TypeDefinitionIndex = 13358;

	enum class ItemSellType : ::System::Int32
	{
		UnSellable = 0,
		Sell = 1,
		Destroy = 2,
	};
}
