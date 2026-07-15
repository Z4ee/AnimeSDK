#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_WINDOWPOS_TypeDefinitionIndex = 44837;

	struct alignas(8) BrowserWin32Helper_WINDOWPOS
	{
		::System::IntPtr hwnd; // 0x10
		::System::IntPtr hwndInsertAfter; // 0x18
		::System::Int32 x; // 0x20
		::System::Int32 y; // 0x24
		::System::Int32 cx; // 0x28
		::System::Int32 cy; // 0x2C
		::System::UInt32 flags; // 0x30
	};
}
