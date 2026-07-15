#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueShopType_TypeDefinitionIndex = 10269;

	enum class RogueShopType : ::System::Int32
	{
		BuffShop = 0,
		MiracleShop = 1,
		FormulaShop = 4,
	};
}
