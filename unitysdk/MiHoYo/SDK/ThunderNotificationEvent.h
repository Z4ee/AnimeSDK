#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThunderNotificationEvent_TypeDefinitionIndex = 43695;

	enum class ThunderNotificationEvent : ::System::Int32
	{
		AllProgress = 0,
		StateChange = 1,
		DownloadOver = 2,
	};
}
