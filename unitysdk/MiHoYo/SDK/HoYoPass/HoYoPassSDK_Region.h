#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_Region_TypeDefinitionIndex = 8245;

	enum class HoYoPassSDK_Region : ::System::Int32
	{
		Default = 0,
		SG = 1,
		US = 2,
		EU = 3,
	};
}
