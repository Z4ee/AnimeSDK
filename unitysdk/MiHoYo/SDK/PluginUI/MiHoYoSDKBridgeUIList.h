#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKBridgeUIElement.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKBridgeUIListItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKBRIDGEUILIST__CTOR_OFFSET UNITYSDK_OFFSET(0x856EC00)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKBridgeUIList_TypeDefinitionIndex = 37465;

	class MiHoYoSDKBridgeUIList : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIElement
	{
	public:
		::System::Int32 items_action_index; // 0x38
		::System::Int32 items_delete_action_index; // 0x3C
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PluginUI::MiHoYoSDKBridgeUIListItem*>* items; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKBRIDGEUILIST__CTOR_OFFSET))(this);
		}
	};
}
