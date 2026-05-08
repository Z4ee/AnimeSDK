#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_ExpandState_TypeDefinitionIndex = 51171;

enum class MonoUIExpandAndShrinkCell_ExpandState : ::System::Int32
{
	ExpandStart = 1,
	ShrinkStart = 3,
	None = 0,
	Shrink = 4,
	Expand = 2,
};
