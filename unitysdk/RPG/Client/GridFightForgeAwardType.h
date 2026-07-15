#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeAwardType_TypeDefinitionIndex = 62062;

	enum class GridFightForgeAwardType : ::System::Int32
	{
		None = 0,
		Equip = 1,
		Role = 2,
		Coin = 3,
	};
}
