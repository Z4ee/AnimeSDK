#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1E43B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xA1E46D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONOPERATION_OFFSET UNITYSDK_OFFSET(0xA1E47B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA1E44E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0xA1E45A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E4460)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonConfirm_TypeDefinitionIndex = 44103;

	class HoYoSDKCommonConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonConfirm_TypeDefinitionIndex)->GetStaticField(0x11AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonConfirm*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONCONFIRM_ONOPERATION_OFFSET))(this, a1);
		}
	};
}
