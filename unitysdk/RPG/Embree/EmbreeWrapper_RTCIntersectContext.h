#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_RTCIntersectContext_TypeDefinitionIndex = 45247;

	struct alignas(8) EmbreeWrapper_RTCIntersectContext
	{
		::System::UInt32 flags; // 0x10
		::System::IntPtr filter; // 0x18
		::System::IntPtr userRayExt; // 0x20
	};
}
