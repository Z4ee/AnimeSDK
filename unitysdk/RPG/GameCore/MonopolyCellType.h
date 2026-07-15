#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCellType_TypeDefinitionIndex = 11561;

	enum class MonopolyCellType : ::System::Int32
	{
		Unknown = 0,
		Event = 1,
		Asset = 2,
		Shop = 3,
		Game = 4,
		Click = 5,
	};
}
