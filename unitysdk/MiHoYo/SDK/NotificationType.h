#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NotificationType_TypeDefinitionIndex = 20228;

	enum class NotificationType : ::System::Int32
	{
		NOTIFICATION_TYPE_UNKNOWN = 0,
		NOTIFICATION_TYPE_STORE_ACCOUNT_INFO = 1,
	};
}
