#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_FeatureState_TypeDefinitionIndex = 69913;

enum class MonoUITableScrollV2_FeatureState : ::System::Int32
{
	None = 0,
	DragEnd = 2,
	Rolling = 7,
	SelectAlign = 10,
	End = 11,
	Drag = 1,
	MouseScroll = 5,
	DragScrollBarEnd = 4,
	MouseScrollEnd = 6,
	GridAlign = 8,
	Damp = 9,
	DragScrollBar = 3,
};
