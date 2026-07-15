#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_AgeGateStage_TypeDefinitionIndex = 8238;

	enum class HoYoPassSDK_AgeGateStage : ::System::Int32
	{
		Unknown = 0,
		ShowConfirmDialog = 1,
		ShowBirthdayInput = 2,
		ShowAgeGateWebview = 3,
		VerificationPassed = 4,
		ShowAgeAppealConfirmDialog = 5,
	};
}
