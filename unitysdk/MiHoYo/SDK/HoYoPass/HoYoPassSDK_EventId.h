#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_EventId_TypeDefinitionIndex = 7270;

	enum class HoYoPassSDK_EventId : ::System::Int32
	{
		Unknown = 0,
		InitResult = 16,
		RiskChallenge = 256,
		ReactivateAccount = 512,
		ProtectiveBan = 768,
		NewDeviceVerification = 1024,
		AgeGate = 1280,
		ThirdpartyAccountBinding = 1536,
		LoginResult = 65536,
		DataReport = 131072,
		LogStrategyUpdate = 196608,
		CurrentRegionUpdate = 262144,
	};
}
