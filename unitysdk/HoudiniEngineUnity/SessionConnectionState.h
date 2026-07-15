#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int SessionConnectionState_TypeDefinitionIndex = 38427;

	enum class SessionConnectionState : ::System::Int32
	{
		NOT_CONNECTED = 0,
		CONNECTED = 1,
		FAILED_TO_CONNECT = 2,
	};
}
