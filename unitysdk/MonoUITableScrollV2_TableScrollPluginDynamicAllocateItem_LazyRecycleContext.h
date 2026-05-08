#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RectTransform; }

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext_TypeDefinitionIndex = 54106;

struct alignas(8) MonoUITableScrollV2_TableScrollPluginDynamicAllocateItem_LazyRecycleContext
{
	::System::Boolean recycleDummyFromStart; // 0x10
	::System::Boolean recycleDummyFromEnd; // 0x11
	::System::Single totalRecycleSizeFromStart; // 0x14
	::System::Boolean replaceDummyToRealFromStart; // 0x18
	::System::Boolean replaceDummyToRealFromEnd; // 0x19
	::UnityEngine::RectTransform* startItemBeforeReplace; // 0x20
	::NAPScrollView::DataStruct::ScrollFloat boundsStart_startItemBeforeReplace; // 0x28
};
