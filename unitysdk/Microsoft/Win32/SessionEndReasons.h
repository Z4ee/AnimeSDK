#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionEndReasons_TypeDefinitionIndex = 4297;

	enum class SessionEndReasons : ::System::Int32
	{
		Logoff = 1,
		SystemShutdown = 2,
	};
}
