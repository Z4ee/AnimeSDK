#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int ThirdpartyOAuthState_TypeDefinitionIndex = 8402;

	enum class ThirdpartyOAuthState : ::System::Int32
	{
		Unknown = 0,
		Waiting = 1,
		Timeout = 2,
		Failed = 3,
	};
}
