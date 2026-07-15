#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AuthProcess_TypeDefinitionIndex = 8935;

	enum class AuthProcess : ::System::Int32
	{
		Waiting = 0,
		Timeout = 1,
		Failed = 2,
	};
}
