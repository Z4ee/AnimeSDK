#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AE3D340)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1AE3D750)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AE3D680)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x1AE3D710)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1AE3D4D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_SHOW_OFFSET UNITYSDK_OFFSET(0x1AE3D540)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3D440)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKConfirmWithTitle_TypeDefinitionIndex = 35522;

	class HoYoSDKConfirmWithTitle : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithTitle** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithTitle**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKConfirmWithTitle_TypeDefinitionIndex)->GetStaticField(0x26B60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithTitle* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithTitle*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_SHOW_OFFSET))(this);
		}

		::System::Void OnConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONCONFIRM_OFFSET))(this);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHTITLE_ONCANCEL_OFFSET))(this);
		}
	};
}
