#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIBridgeMessage_TypeDefinitionIndex = 45019;

	class MiHoYoSDKUIBridgeMessage : public ::System::Object
	{
	public:
		// static const ::System::String* PLUGIN_UI_GAME_OBJECT; // 0x0
		// static const ::System::String* SHOW_UI; // 0x0
		// static const ::System::String* CLOSE_UI; // 0x0
		// static const ::System::String* UPDATE_UI; // 0x0
		// static const ::System::String* RECEIVE_NOTIFY_MESSAGE; // 0x0
	};
}
