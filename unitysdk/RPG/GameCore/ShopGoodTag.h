#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodTag_TypeDefinitionIndex = 14823;

	enum class ShopGoodTag : ::System::Int32
	{
		None = 0,
		Discount = 1,
		Medal = 2,
	};
}
