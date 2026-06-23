#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager_LogLevel_TypeDefinitionIndex = 20110;

	enum class ReportManager_LogLevel : ::System::Int32
	{
		Default = 0,
		USMinor = 1,
	};
}
