#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeState_TypeDefinitionIndex = 26023;

	enum class NodeState : ::System::Int32
	{
		GUIDE = 7,
		SHOW_EVENT = 4,
		BRIGHTEN_ONLY_VISIBLE = 9,
		LOCKED = 1,
		EMPTY = 11,
		DOOR = 5,
		UN_EMPTY = 15,
		BRIGHTEN = 6,
		FINISHED = 3,
		UNLOCKED = 2,
		UNSTABLE = 10,
		NODE_STATE_ALL = 0,
		TARGET = 8,
		LOCKED_WITH_STAMINA = 14,
	};
}
