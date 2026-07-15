#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIBridgeNotifyMessageId_TypeDefinitionIndex = 45011;

	enum class MiHoYoSDKUIBridgeNotifyMessageId : ::System::Int32
	{
		ON_SHOW_ELEMENT = 1,
		ON_HIDE_ELEMENT = 2,
		ON_ELEMENT_STATUS_CHANGED = 3,
		ON_RECEIVED_CUSTOM_MESSAGE = 999,
	};
}
