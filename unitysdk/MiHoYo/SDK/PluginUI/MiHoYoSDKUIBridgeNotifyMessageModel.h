#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIBRIDGENOTIFYMESSAGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9D990)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIBridgeNotifyMessageModel_TypeDefinitionIndex = 45010;

	class MiHoYoSDKUIBridgeNotifyMessageModel : public ::System::Object
	{
	public:
		::System::String* event_name; // 0x10
		::System::Int32 msg_id; // 0x18
		::System::String* msg_params; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIBRIDGENOTIFYMESSAGEMODEL__CTOR_OFFSET))(this);
		}
	};
}
