#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SlotDisplayType_TypeDefinitionIndex = 13961;

	enum class SlotDisplayType : ::System::Int32
	{
		Invalid = 0,
		Desk = 1,
		Shelf = 2,
	};
}
