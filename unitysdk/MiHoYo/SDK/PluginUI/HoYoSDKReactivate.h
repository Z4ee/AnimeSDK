#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B63EB00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1B63EF10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1B63EDC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B63EC90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1B63EED0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_SHOW_OFFSET UNITYSDK_OFFSET(0x1B63ED00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B63EC00)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKReactivate_TypeDefinitionIndex = 37140;

	class HoYoSDKReactivate : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKReactivate** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKReactivate**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKReactivate_TypeDefinitionIndex)->GetStaticField(0x28960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKReactivate* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKReactivate*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_SHOW_OFFSET))(this);
		}

		::System::Void OnSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONSUBMIT_OFFSET))(this);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREACTIVATE_ONCLOSEDIALOG_OFFSET))(this);
		}
	};
}
