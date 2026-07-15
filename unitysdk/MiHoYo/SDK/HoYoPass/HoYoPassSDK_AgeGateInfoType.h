#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_AgeGateInfoType_TypeDefinitionIndex = 8240;

	enum class HoYoPassSDK_AgeGateInfoType : ::System::Int32
	{
		Unknown = 0,
		Birthday = 1,
		ParentEmail = 2,
	};
}
