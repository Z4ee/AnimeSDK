#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_TunnelState_TypeDefinitionIndex = 44665;

	enum class SecurityTunnel_TunnelState : ::System::Int32
	{
		Disconnected = 0,
		Connecting = 1,
		ExchangingSecret = 2,
		Connected = 3,
	};
}
