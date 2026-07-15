#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirLockActionName_TypeDefinitionIndex = 11703;

	enum class PixAirLockActionName : ::System::Int32
	{
		SelectContent = 0,
		BuyEquip = 1,
		SellEquip = 2,
	};
}
