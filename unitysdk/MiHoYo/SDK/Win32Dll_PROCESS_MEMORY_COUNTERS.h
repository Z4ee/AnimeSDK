#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Win32Dll_PROCESS_MEMORY_COUNTERS_TypeDefinitionIndex = 7898;

	struct alignas(8) Win32Dll_PROCESS_MEMORY_COUNTERS
	{
		::System::UInt32 cb; // 0x10
		::System::UInt32 PageFaultCount; // 0x14
		::System::IntPtr PeakWorkingSetSize; // 0x18
		::System::IntPtr WorkingSetSize; // 0x20
		::System::IntPtr QuotaPeakPagedPoolUsage; // 0x28
		::System::IntPtr QuotaPagedPoolUsage; // 0x30
		::System::IntPtr QuotaPeakNonPagedPoolUsage; // 0x38
		::System::IntPtr QuotaNonPagedPoolUsage; // 0x40
		::System::IntPtr PagefileUsage; // 0x48
		::System::IntPtr PeakPagefileUsage; // 0x50
	};
}
