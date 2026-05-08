#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeVisible_TypeDefinitionIndex = 23117;

	enum class NodeVisible : ::System::Int32
	{
		VISIBLE_BY_TRIGGER_EVENT = 3,
		VISIBLE = 1,
		TEMPORARY_VISIBLE_AT_AROUND = 4,
		BLOCKED = 5,
		VISIBLE_AT_GRID_AROUND = 2,
		NODE_VISIBLE_ALL = 0,
	};
}
