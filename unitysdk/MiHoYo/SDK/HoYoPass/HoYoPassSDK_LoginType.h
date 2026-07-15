#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_LoginType_TypeDefinitionIndex = 8234;

	enum class HoYoPassSDK_LoginType : ::System::Int32
	{
		Unknown = 0,
		Email = 1,
		Username = 2,
		Apple = 3,
		Facebook = 4,
		Google = 5,
		Twitter = 6,
		Steam = 7,
		NonExclusiveSteam = 8,
	};
}
