#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_MoveReason_TypeDefinitionIndex = 69889;

enum class MonoUITableScrollV2_MoveReason : ::System::Int32
{
	Move = 1,
	MouseScroll = 9,
	Drag = 7,
	UnKnow = 0,
	ScrollGroup = 6,
	SelectAlign = 2,
	Rolling = 4,
	GridAlign = 3,
	DampingRecover = 5,
	ScrollBar = 8,
};
