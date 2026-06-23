#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C559F00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1C55A1B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1C55A090)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x1C55A150)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55A000)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonLoadingToast_TypeDefinitionIndex = 37116;

	class HoYoSDKCommonLoadingToast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoadingToast** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoadingToast**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonLoadingToast_TypeDefinitionIndex)->GetStaticField(0x28250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoadingToast* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoadingToast*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_SHOW_OFFSET))(this);
		}
	};
}
