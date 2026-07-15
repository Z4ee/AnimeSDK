#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager_WebPageType_TypeDefinitionIndex = 8288;

	enum class WebPageManager_WebPageType : ::System::Int32
	{
		Unknown = 0,
		RegisterAccount = 1,
		ForgotPassword = 2,
		Verification = 3,
		EmailBinding = 4,
		UserCenter = 5,
		AgeGate = 6,
		ThirdpartyAccountBinding = 7,
		AgeAppeal = 8,
	};
}
