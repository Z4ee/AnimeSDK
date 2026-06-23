#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_ErrorCode_TypeDefinitionIndex = 36933;

	enum class HoYoChannelSDK_ErrorCode : ::System::Int32
	{
		SUCCESS = 0,
		GENERIC_ERROR = -1,
		CANCELLED = -6,
		SHUTDOWN_REQUIRED = -1001,
		NO_CLIENT = -1002,
		VERSION_MISMATCH = -1003,
		UPDATE_REQUIRED = -1004,
		USER_NOT_SIGNED_IN = -2001,
		USER_ACTION_REQUIRED = -2002,
	};
}
