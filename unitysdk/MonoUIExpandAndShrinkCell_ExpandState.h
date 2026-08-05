#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_ExpandState_TypeDefinitionIndex = 51338;

enum class MonoUIExpandAndShrinkCell_ExpandState : ::System::Int32
{
	None = 0,
	ShrinkStart = 3,
	Expand = 2,
	ExpandStart = 1,
	Shrink = 4,
};
