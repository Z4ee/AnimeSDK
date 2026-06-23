#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int DirectType_TypeDefinitionIndex = 22962;

	enum class DirectType : ::System::Int32
	{
		RESET_GRID = 8,
		REPAIR = 9,
		BIG_TV_EXIT = 7,
		REPAIR_EXIT = 13,
		DIRECT_UP = 1,
		TIME_REWIND_EXIT = 11,
		SWITCH_CHESS_DOWN = 5,
		TIME_SEGMENT_ENTER = 12,
		SWITCH_CHESS_UP = 4,
		TIME_REWIND_ENTER = 10,
		DIRECT_DOWN = 2,
		BIG_TV_ENTER = 6,
		DIRECT_TYPE_NONE = 0,
		CHANGE_GRID = 3,
	};
}
