#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB282810)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB282B00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB282940)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_SHOW_OFFSET UNITYSDK_OFFSET(0xB282A00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0xB2828C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0xB282C40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0xB282E10)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKRealName_TypeDefinitionIndex = 47233;

	class HoYoSDKRealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealName** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKRealName**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKRealName_TypeDefinitionIndex)->GetStaticField(0x57CA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealName* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKRealName*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_SHOW_OFFSET))(this);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__SHOW_B__4_0_OFFSET))(this);
		}

		::System::Void _Show_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__SHOW_B__4_1_OFFSET))(this);
		}
	};
}
