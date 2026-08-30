#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_UIBRIDGECUSTOMNOTIFYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B6580)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int UIBridgeCustomNotifyMessage_TypeDefinitionIndex = 47249;

	class UIBridgeCustomNotifyMessage : public ::System::Object
	{
	public:
		::System::Int32 custom_notify_message_id; // 0x10
		::System::String* custom_notify_message_param; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_UIBRIDGECUSTOMNOTIFYMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
