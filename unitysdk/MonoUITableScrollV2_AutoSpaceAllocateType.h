#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_AutoSpaceAllocateType_TypeDefinitionIndex = 75007;

enum class MonoUITableScrollV2_AutoSpaceAllocateType : ::System::Int32
{
	Center = 3,
	CenterWithViewRectAdjust = 4,
	KeepOriginSpace = 1,
	CenterOnlyKeepOriginSpace = 5,
	KeepOriginPadding = 2,
	SpaceAndPadding = 0,
};
