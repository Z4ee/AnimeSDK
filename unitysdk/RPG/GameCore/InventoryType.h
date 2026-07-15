#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryType_TypeDefinitionIndex = 13357;

	enum class InventoryType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Rogue = 2,
	};
}
