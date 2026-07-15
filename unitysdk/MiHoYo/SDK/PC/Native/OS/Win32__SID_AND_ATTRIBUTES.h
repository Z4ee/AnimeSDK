#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32__SID_AND_ATTRIBUTES_TypeDefinitionIndex = 8413;

	struct alignas(8) Win32__SID_AND_ATTRIBUTES
	{
		::System::IntPtr Sid; // 0x10
		::System::Int32 Attributes; // 0x18
	};
}
