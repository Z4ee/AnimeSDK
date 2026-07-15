#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_POINT_TypeDefinitionIndex = 44838;

	struct alignas(4) BrowserWin32Helper_POINT
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
	};
}
