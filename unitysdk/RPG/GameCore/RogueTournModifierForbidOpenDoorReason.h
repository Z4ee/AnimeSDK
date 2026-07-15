#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModifierForbidOpenDoorReason_TypeDefinitionIndex = 23737;

	enum class RogueTournModifierForbidOpenDoorReason : ::System::Int32
	{
		None = 0,
		ShopGoods = 1,
		Chest = 2,
	};
}
