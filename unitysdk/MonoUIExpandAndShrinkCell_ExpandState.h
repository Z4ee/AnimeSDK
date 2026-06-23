#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_ExpandState_TypeDefinitionIndex = 67011;

enum class MonoUIExpandAndShrinkCell_ExpandState : ::System::Int32
{
	Shrink = 4,
	None = 0,
	Expand = 2,
	ExpandStart = 1,
	ShrinkStart = 3,
};
