#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/TargetPositionCache_CacheCurve_Item.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_CacheEntry_RecordingItem_TypeDefinitionIndex = 37695;

	struct alignas(4) TargetPositionCache_CacheEntry_RecordingItem
	{
		::System::Single Time; // 0x10
		::System::Boolean IsCut; // 0x14
		::Cinemachine::TargetPositionCache_CacheCurve_Item Item; // 0x18
	};
}
