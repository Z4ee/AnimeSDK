#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8561CF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x85621C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x8562000)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONLOGOUTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x8562290)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8561E20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x8561EE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x8561DA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKLogoutConfirm_TypeDefinitionIndex = 37433;

	class HoYoSDKLogoutConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKLogoutConfirm** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKLogoutConfirm**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKLogoutConfirm_TypeDefinitionIndex)->GetStaticField(0x14440);
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

		::System::Void OnLogoutButtonClicked(::System::Boolean isSaved)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKLOGOUTCONFIRM_ONLOGOUTBUTTONCLICKED_OFFSET))(this, isSaved);
		}
	};
}
