#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIBridgeNotifyMessageId_TypeDefinitionIndex = 8833;

	enum class PluginUIBridgeNotifyMessageId : ::System::Int32
	{
		ON_SHOW_ELEMENT = 1,
		ON_HIDE_ELEMENT = 2,
		ON_ELEMENT_STATUS_CHANGED = 3,
	};
}
