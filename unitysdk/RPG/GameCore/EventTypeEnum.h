#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventTypeEnum_TypeDefinitionIndex = 12125;

	enum class EventTypeEnum : ::System::Int32
	{
		Unknown = 0,
		Main = 1,
		Shop = 2,
		Daily = 3,
		MainShop = 4,
	};
}
