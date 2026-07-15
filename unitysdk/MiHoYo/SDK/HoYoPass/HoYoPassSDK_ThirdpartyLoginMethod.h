#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_ThirdpartyLoginMethod_TypeDefinitionIndex = 8236;

	enum class HoYoPassSDK_ThirdpartyLoginMethod : ::System::Int32
	{
		Unknown = 0,
		Apple = 1,
		Facebook = 2,
		Google = 3,
		Twitter = 4,
		Steam = 5,
		NonExclusiveSteam = 6,
	};
}
