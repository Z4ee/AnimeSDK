#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeVisible_TypeDefinitionIndex = 24182;

	enum class NodeVisible : ::System::Int32
	{
		TEMPORARY_VISIBLE_AT_AROUND = 4,
		VISIBLE_AT_GRID_AROUND = 2,
		VISIBLE_BY_TRIGGER_EVENT = 3,
		NODE_VISIBLE_ALL = 0,
		VISIBLE = 1,
		BLOCKED = 5,
	};
}
