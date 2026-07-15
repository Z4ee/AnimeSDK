#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopMainType_TypeDefinitionIndex = 14820;

	enum class ShopMainType : ::System::Int32
	{
		None = 0,
		Main = 1,
		Npc = 2,
		Rogue = 3,
	};
}
