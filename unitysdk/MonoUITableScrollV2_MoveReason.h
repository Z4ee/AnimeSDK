#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_MoveReason_TypeDefinitionIndex = 75006;

enum class MonoUITableScrollV2_MoveReason : ::System::Int32
{
	Move = 1,
	GridAlign = 3,
	DampingRecover = 5,
	Drag = 7,
	SelectAlign = 2,
	Rolling = 4,
	ScrollBar = 8,
	UnKnow = 0,
	ScrollGroup = 6,
	MouseScroll = 9,
};
