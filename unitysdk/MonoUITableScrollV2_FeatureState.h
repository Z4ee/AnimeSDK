#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_FeatureState_TypeDefinitionIndex = 54058;

enum class MonoUITableScrollV2_FeatureState : ::System::Int32
{
	MouseScroll = 5,
	Rolling = 7,
	End = 11,
	None = 0,
	GridAlign = 8,
	MouseScrollEnd = 6,
	DragEnd = 2,
	DragScrollBarEnd = 4,
	Drag = 1,
	DragScrollBar = 3,
	Damp = 9,
	SelectAlign = 10,
};
