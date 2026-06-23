#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_AutoSpaceAllocateType_TypeDefinitionIndex = 69962;

enum class MonoUITableScrollV2_AutoSpaceAllocateType : ::System::Int32
{
	KeepOriginPadding = 2,
	CenterWithViewRectAdjust = 4,
	CenterOnlyKeepOriginSpace = 5,
	KeepOriginSpace = 1,
	Center = 3,
	SpaceAndPadding = 0,
};
