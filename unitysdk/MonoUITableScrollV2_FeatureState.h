#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_FeatureState_TypeDefinitionIndex = 75003;

enum class MonoUITableScrollV2_FeatureState : ::System::Int32
{
	End = 11,
	DragScrollBar = 3,
	Drag = 1,
	DragEnd = 2,
	MouseScrollEnd = 6,
	DragScrollBarEnd = 4,
	MouseScroll = 5,
	None = 0,
	Damp = 9,
	SelectAlign = 10,
	Rolling = 7,
	GridAlign = 8,
};
