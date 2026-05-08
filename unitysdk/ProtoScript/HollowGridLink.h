#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowGridLink_TypeDefinitionIndex = 20349;

	enum class HollowGridLink : ::System::Int32
	{
		HOLLOW_GRID_LINK_NONE = 0,
		UP = 1,
		LEFT = 8,
		HOLLOW_GRID_LINK_ALL = 15,
		RIGHT = 4,
		DOWN = 2,
	};
}
