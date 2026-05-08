#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_AgeGateTicketType_TypeDefinitionIndex = 19151;

	enum class HoYoPassSDK_AgeGateTicketType : ::System::Int32
	{
		Register = 1,
		Login = 2,
	};
}
