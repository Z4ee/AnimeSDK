#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_MoveReason_TypeDefinitionIndex = 54036;

enum class MonoUITableScrollV2_MoveReason : ::System::Int32
{
	ScrollGroup = 6,
	Drag = 7,
	UnKnow = 0,
	SelectAlign = 2,
	ScrollBar = 8,
	MouseScroll = 9,
	DampingRecover = 5,
	GridAlign = 3,
	Rolling = 4,
	Move = 1,
};
