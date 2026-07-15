#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIBridgeMethod_TypeDefinitionIndex = 45017;

	class MiHoYoSDKUIBridgeMethod : public ::System::Object
	{
	public:
		// static const ::System::String* DO_ACTION_FUNC; // 0x0
		// static const ::System::String* REGISTER_PLUGIN_UI_FUNC; // 0x0
		// static const ::System::String* MANUALLY_SHOW_PLUGIN_UI_FUNC; // 0x0
	};
}
