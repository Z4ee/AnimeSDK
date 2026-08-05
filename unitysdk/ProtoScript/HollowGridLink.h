#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowGridLink_TypeDefinitionIndex = 26259;

	enum class HollowGridLink : ::System::Int32
	{
		DOWN = 2,
		HOLLOW_GRID_LINK_NONE = 0,
		HOLLOW_GRID_LINK_ALL = 15,
		RIGHT = 4,
		LEFT = 8,
		UP = 1,
	};
}
