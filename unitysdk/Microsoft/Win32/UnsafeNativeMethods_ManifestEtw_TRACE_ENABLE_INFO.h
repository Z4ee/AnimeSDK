#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO_TypeDefinitionIndex = 100;

	struct alignas(8) UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO
	{
		::System::Int32 IsEnabled; // 0x10
		::System::Byte Level; // 0x14
		::System::Byte Reserved1; // 0x15
		::System::UInt16 LoggerId; // 0x16
		::System::Int32 EnableProperty; // 0x18
		::System::Int32 Reserved2; // 0x1C
		::System::Int64 MatchAnyKeyword; // 0x20
		::System::Int64 MatchAllKeyword; // 0x28
	};
}
