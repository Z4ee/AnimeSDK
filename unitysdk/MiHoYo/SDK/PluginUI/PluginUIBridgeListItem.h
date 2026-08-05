#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGELISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B5DA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIBridgeListItem_TypeDefinitionIndex = 21257;

	class PluginUIBridgeListItem : public ::System::Object
	{
	public:
		::System::Int32 action_index; // 0x10
		::System::Int32 delete_action_index; // 0x14
		::System::Boolean is_selected; // 0x18
		::System::String* item_data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUIBRIDGELISTITEM__CTOR_OFFSET))(this);
		}
	};
}
