#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeState_TypeDefinitionIndex = 24107;

	enum class NodeState : ::System::Int32
	{
		UNLOCKED = 2,
		SHOW_EVENT = 4,
		FINISHED = 3,
		BRIGHTEN_ONLY_VISIBLE = 9,
		TARGET = 8,
		LOCKED_WITH_STAMINA = 14,
		UNSTABLE = 10,
		EMPTY = 11,
		UN_EMPTY = 15,
		GUIDE = 7,
		NODE_STATE_ALL = 0,
		BRIGHTEN = 6,
		DOOR = 5,
		LOCKED = 1,
	};
}
