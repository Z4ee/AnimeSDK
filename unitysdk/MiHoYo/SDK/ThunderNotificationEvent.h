#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThunderNotificationEvent_TypeDefinitionIndex = 44557;

	enum class ThunderNotificationEvent : ::System::Int32
	{
		AllProgress = 0,
		StateChange = 1,
		DownloadOver = 2,
	};
}
