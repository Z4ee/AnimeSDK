#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionSyncData_Status_TypeDefinitionIndex = 38435;

	enum class HEU_SessionSyncData_Status : ::System::Int32
	{
		Stopped = 0,
		Started = 1,
		Connecting = 2,
		Initializing = 3,
		Connected = 4,
	};
}
