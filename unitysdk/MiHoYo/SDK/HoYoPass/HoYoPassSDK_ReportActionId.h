#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_ReportActionId_TypeDefinitionIndex = 8241;

	enum class HoYoPassSDK_ReportActionId : ::System::Int32
	{
		unknownId = 0,
		login = 1002,
		verify = 1004,
		appLogoff = 1102,
		otherLogin = 1107,
		comboLogin = 102,
		comboAgeGate = 1017,
	};
}
