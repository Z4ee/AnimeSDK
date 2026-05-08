#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int DirectType_TypeDefinitionIndex = 21259;

	enum class DirectType : ::System::Int32
	{
		REPAIR_EXIT = 13,
		TIME_REWIND_EXIT = 11,
		TIME_SEGMENT_ENTER = 12,
		CHANGE_GRID = 3,
		RESET_GRID = 8,
		DIRECT_TYPE_NONE = 0,
		BIG_TV_ENTER = 6,
		TIME_REWIND_ENTER = 10,
		DIRECT_DOWN = 2,
		SWITCH_CHESS_DOWN = 5,
		BIG_TV_EXIT = 7,
		SWITCH_CHESS_UP = 4,
		DIRECT_UP = 1,
		REPAIR = 9,
	};
}
