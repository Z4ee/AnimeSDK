#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ServerEvent_TypeDefinitionIndex = 44663;

	enum class SecurityTunnel_ServerEvent : ::System::Int32
	{
		Login = 57345,
		Logout = 57346,
		SecureMessage = 57347,
		SecureInitMessage = 57348,
		Ping = 57349,
	};
}
