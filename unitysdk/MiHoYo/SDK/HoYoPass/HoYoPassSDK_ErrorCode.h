#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_ErrorCode_TypeDefinitionIndex = 8232;

	enum class HoYoPassSDK_ErrorCode : ::System::Int32
	{
		NetworkError = -1,
		OK = 0,
		Fail = 1,
		InvalidArgument = 2,
		NotInitialize = 3,
		InitedAlready = 4,
		InsufficientBuffer = 5,
		ThirdpartyAuthTimeout = 6,
		ThirdpartyAuthFailed = 7,
		NoAccountForAutoLogin = 8,
		InvalidToken = 9,
		NeedLoginAfterReactivate = 10,
		AgeGateAccountBanned = 11,
		ConfigurationInvalid = 12,
		StorageInitFailed = 13,
	};
}
