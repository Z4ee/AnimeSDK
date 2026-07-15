#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LoginPattern_TypeDefinitionIndex = 8046;

	enum class LoginPattern : ::System::Int32
	{
		TOKEN = 0,
		PASSWORD = 1,
		CAPTCHA = 2,
		QRCODE = 3,
		THIRDPATY = 4,
		AUTHTICKET = 5,
	};
}
