#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C6A2560)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1C6A2840)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1C6A2690)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x1C6A27D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A2610)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonToast_TypeDefinitionIndex = 47209;

	class HoYoSDKCommonToast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonToast_TypeDefinitionIndex)->GetStaticField(0x5AA70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonToast*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONTOAST_SHOW_OFFSET))(this);
		}
	};
}
