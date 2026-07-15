#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager_ConnectState_TypeDefinitionIndex = 66259;

	enum class NetworkManager_ConnectState : ::System::Int32
	{
		None = 0,
		Connected = 1,
		Disconnected = 2,
		Reconnecting = 3,
	};
}
