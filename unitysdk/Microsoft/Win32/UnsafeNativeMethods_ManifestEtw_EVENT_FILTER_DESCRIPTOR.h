#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR_TypeDefinitionIndex = 94;

	struct alignas(8) UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR
	{
		::System::Int64 Ptr; // 0x10
		::System::Int32 Size; // 0x18
		::System::Int32 Type; // 0x1C
	};
}
