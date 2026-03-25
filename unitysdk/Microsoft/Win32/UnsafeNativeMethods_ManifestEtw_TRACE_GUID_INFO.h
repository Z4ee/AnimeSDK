#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_TRACE_GUID_INFO_TypeDefinitionIndex = 98;

	struct alignas(4) UnsafeNativeMethods_ManifestEtw_TRACE_GUID_INFO
	{
		::System::Int32 InstanceCount; // 0x10
		::System::Int32 Reserved; // 0x14
	};
}
