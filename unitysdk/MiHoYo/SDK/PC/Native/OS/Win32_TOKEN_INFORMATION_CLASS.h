#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32_TOKEN_INFORMATION_CLASS_TypeDefinitionIndex = 8412;

	enum class Win32_TOKEN_INFORMATION_CLASS : ::System::Int32
	{
		TokenUser = 1,
	};
}
