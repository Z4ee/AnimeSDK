#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowGridLink_TypeDefinitionIndex = 22894;

	enum class HollowGridLink : ::System::Int32
	{
		HOLLOW_GRID_LINK_NONE = 0,
		UP = 1,
		RIGHT = 4,
		HOLLOW_GRID_LINK_ALL = 15,
		DOWN = 2,
		LEFT = 8,
	};
}
