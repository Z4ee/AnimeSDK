#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_AuthTicketLoginType_TypeDefinitionIndex = 20394;

	enum class HoYoPassSDK_AuthTicketLoginType : ::System::Int32
	{
		Unknown = 0,
		LoginByHoYoPlay = 1,
		AutoLoginAfterRegister = 2,
	};
}
