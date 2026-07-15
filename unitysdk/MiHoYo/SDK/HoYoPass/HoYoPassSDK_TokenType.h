#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_TokenType_TypeDefinitionIndex = 8237;

	enum class HoYoPassSDK_TokenType : ::System::Int32
	{
		Unknown = 0,
		SToken = 1,
		LToken = 2,
		CookieToken = 4,
		GameToken = 8,
	};
}
