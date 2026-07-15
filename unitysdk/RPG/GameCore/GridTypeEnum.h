#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridTypeEnum_TypeDefinitionIndex = 12114;

	enum class GridTypeEnum : ::System::Int32
	{
		Unknown = 0,
		Shop = 1,
		Dock = 2,
		Empty = 3,
		Buff = 4,
		Tutorial = 5,
	};
}
