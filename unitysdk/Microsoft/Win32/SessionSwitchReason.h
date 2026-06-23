#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionSwitchReason_TypeDefinitionIndex = 4302;

	enum class SessionSwitchReason : ::System::Int32
	{
		ConsoleConnect = 1,
		ConsoleDisconnect = 2,
		RemoteConnect = 3,
		RemoteDisconnect = 4,
		SessionLock = 7,
		SessionLogoff = 6,
		SessionLogon = 5,
		SessionRemoteControl = 9,
		SessionUnlock = 8,
	};
}
