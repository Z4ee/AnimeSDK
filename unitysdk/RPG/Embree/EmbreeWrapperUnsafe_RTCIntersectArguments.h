#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapperUnsafe_RTCIntersectArguments_TypeDefinitionIndex = 45254;

	struct alignas(8) EmbreeWrapperUnsafe_RTCIntersectArguments
	{
		::System::UInt32 flags; // 0x10
		::System::UInt32 feature_mask; // 0x14
		::System::IntPtr context; // 0x18
		::System::IntPtr filter; // 0x20
		::System::IntPtr intersect; // 0x28
	};
}
