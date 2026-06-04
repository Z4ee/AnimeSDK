#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1E6840)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA1E6CA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xA1E6B10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONLOGOUTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA1E6D70)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA1E68F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0xA1E69B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E6F00)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKLogoutConfirm_TypeDefinitionIndex = 44113;

	class HoYoSDKLogoutConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKLogoutConfirm** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKLogoutConfirm**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKLogoutConfirm_TypeDefinitionIndex)->GetStaticField(0x11BE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKLogoutConfirm* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKLogoutConfirm*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_SHOW_OFFSET))(this);
		}

		::System::Void OnCancelButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONCANCELBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void OnLogoutButtonClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONLOGOUTBUTTONCLICKED_OFFSET))(this, a1);
		}
	};
}
