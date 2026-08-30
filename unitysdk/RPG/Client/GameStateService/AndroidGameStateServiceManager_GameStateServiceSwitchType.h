#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::GameStateService
{
	inline static constexpr unsigned int AndroidGameStateServiceManager_GameStateServiceSwitchType_TypeDefinitionIndex = 75327;

	enum class AndroidGameStateServiceManager_GameStateServiceSwitchType : ::System::Int32
	{
		DispatchReceived = 0,
		DispatchAllowed = 1,
		DeviceAllowed = 2,
		ServiceActivated = 3,
		ClientRegistered = 4,
		ConsoleVarAllowed = 5,
		Count = 6,
	};
}
