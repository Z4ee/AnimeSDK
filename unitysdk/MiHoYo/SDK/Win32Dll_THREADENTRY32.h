#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Win32Dll_THREADENTRY32_TypeDefinitionIndex = 7897;

	struct alignas(4) Win32Dll_THREADENTRY32
	{
		::System::UInt32 dwSize; // 0x10
		::System::UInt32 cntUsage; // 0x14
		::System::UInt32 th32ThreadID; // 0x18
		::System::UInt32 th32OwnerProcessID; // 0x1C
		::System::UInt32 tpBasePri; // 0x20
		::System::UInt32 tpDeltaPri; // 0x24
		::System::UInt32 dwFlags; // 0x28
	};
}
