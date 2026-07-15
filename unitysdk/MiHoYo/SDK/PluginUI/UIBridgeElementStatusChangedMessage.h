#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_UIBRIDGEELEMENTSTATUSCHANGEDMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABA1C00)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int UIBridgeElementStatusChangedMessage_TypeDefinitionIndex = 45012;

	class UIBridgeElementStatusChangedMessage : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::String* status_name; // 0x18
		::System::String* status_value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_UIBRIDGEELEMENTSTATUSCHANGEDMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
