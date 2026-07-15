#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/Native/OS/Win32__SID_AND_ATTRIBUTES.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32_TOKEN_USER_TypeDefinitionIndex = 8414;

	struct alignas(8) Win32_TOKEN_USER
	{
		::MiHoYo::SDK::PC::Native::OS::Win32__SID_AND_ATTRIBUTES User; // 0x10
	};
}
