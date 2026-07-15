#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliAntiAddicationCode_TypeDefinitionIndex = 8991;

	enum class BiliBiliAntiAddicationCode : ::System::Int32
	{
		TimeTips = 0,
		ConfigFail = -1,
		HearBeatFail = -2,
		Anti = 1,
	};
}
