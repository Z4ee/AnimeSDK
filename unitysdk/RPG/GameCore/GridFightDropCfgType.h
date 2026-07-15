#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDropCfgType_TypeDefinitionIndex = 23764;

	enum class GridFightDropCfgType : ::System::Int32
	{
		Coin = 1,
		Exp = 2,
		Role = 4,
		Item = 5,
		Orb = 6,
		Orb2 = 7,
		Orb3 = 8,
		Orb4 = 9,
		Orb5 = 10,
		Orb6 = 11,
	};
}
