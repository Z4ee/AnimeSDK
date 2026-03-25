#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x855FBE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x855FE90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x855FD10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x855FE30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONLOADINGTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x855FC90)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonLoadingToast_TypeDefinitionIndex = 37425;

	class HoYoSDKCommonLoadingToast : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoadingToast** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonLoadingToast**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonLoadingToast_TypeDefinitionIndex)->GetStaticField(0x14390);
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
