#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_AutoSpaceAllocateType_TypeDefinitionIndex = 54099;

enum class MonoUITableScrollV2_AutoSpaceAllocateType : ::System::Int32
{
	KeepOriginPadding = 2,
	Center = 3,
	CenterWithViewRectAdjust = 4,
	SpaceAndPadding = 0,
	CenterOnlyKeepOriginSpace = 5,
	KeepOriginSpace = 1,
};
