#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ServerDispatchReturnCode_TypeDefinitionIndex = 66292;

	enum class ServerDispatchReturnCode : ::System::Int32
	{
		Success = 0,
		Failure = 1,
		ServerStop = 2,
		VersionError = 3,
		RET_FORCE_UPDATE = 4,
		RET_LANGUAGE_ERROR = 5,
		RET_PLATFORM_ERROR = 6,
		RET_CDN_ERROR = 7,
		RET_CHANNEL_ERROR = 8,
		RET_SUB_CHANNEL_ERROR = 9,
		RET_NO_VALID_GATE = 10,
	};
}
