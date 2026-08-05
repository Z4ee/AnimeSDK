#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DFFC8B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1E0030E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1E002FB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME_SHOW_OFFSET UNITYSDK_OFFSET(0x1E003020)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E002F20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E0031B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALNAME__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1E003460)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKRealName_TypeDefinitionIndex = 37802;

	class HoYoSDKRealName : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealName** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKRealName**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKRealName_TypeDefinitionIndex)->GetStaticField(0x2A040);
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
