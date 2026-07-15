#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools
{
	inline static constexpr unsigned int Device_ProcessMemoryCounters_TypeDefinitionIndex = 45141;

	struct alignas(8) Device_ProcessMemoryCounters
	{
		::System::Int32 cb; // 0x10
		::System::Int32 PageFaultCount; // 0x14
		::System::UInt64 PeakWorkingSetSize; // 0x18
		::System::UInt64 WorkingSetSize; // 0x20
		::System::UInt64 QuotaPeakPagedPoolUsage; // 0x28
		::System::UInt64 QuotaPagedPoolUsage; // 0x30
		::System::UInt64 QuotaPeakNonPagedPoolUsage; // 0x38
		::System::UInt64 QuotaNonPagedPoolUsage; // 0x40
		::System::UInt64 PagefileUsage; // 0x48
		::System::UInt64 PeakPagefileUsage; // 0x50
	};
}
