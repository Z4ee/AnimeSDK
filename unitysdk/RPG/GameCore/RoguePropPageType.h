#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePropPageType_TypeDefinitionIndex = 23750;

	enum class RoguePropPageType : ::System::Int32
	{
		None = 0,
		BuffShop = 1,
		MiracleShop = 2,
		FormulaShop = 3,
	};
}
