#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_ReportLevel_TypeDefinitionIndex = 8244;

	enum class HoYoPassSDK_ReportLevel : ::System::Int32
	{
		trace = 0,
		debug = 1,
		info = 2,
		warning = 3,
		error = 4,
	};
}
