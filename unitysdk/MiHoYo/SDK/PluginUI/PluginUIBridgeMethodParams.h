#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIBridgeMethodParams_TypeDefinitionIndex = 8839;

	class PluginUIBridgeMethodParams : public ::System::Object
	{
	public:
		// static const ::System::String* DO_ACTION_EVENT_NAME; // 0x0
		// static const ::System::String* DO_ACTION_INDEX; // 0x0
		// static const ::System::String* DO_ACTION_PARAMS; // 0x0
		// static const ::System::String* REGISTER_PLUGIN_UI_NAME; // 0x0
	};
}
