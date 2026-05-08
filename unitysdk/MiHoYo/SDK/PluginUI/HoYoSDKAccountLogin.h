#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19438B10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x19439D40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19439720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1943A470)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x1943A180)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONFORGETPWD_OFFSET UNITYSDK_OFFSET(0x1943A430)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x19439F00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONQRCODELOGIN_OFFSET UNITYSDK_OFFSET(0x1943A100)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x1943A3F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSAVERECORDTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x19439DB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19438CA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x1943A140)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x19439FB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1943A370)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERPRIVACY_OFFSET UNITYSDK_OFFSET(0x1943A3B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_SHOW_OFFSET UNITYSDK_OFFSET(0x19438D10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19438C10)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin_TypeDefinitionIndex = 35507;

	class HoYoSDKAccountLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin_TypeDefinitionIndex)->GetStaticField(0x268B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_SHOW_OFFSET))(this);
		}

		::System::Void OnCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void OnSaveRecordToggleClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSAVERECORDTOGGLECLICKED_OFFSET))(this, value);
		}

		::System::Void OnPhoneLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONPHONELOGIN_OFFSET))(this);
		}

		::System::Void OnToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void OnQRCodeLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONQRCODELOGIN_OFFSET))(this);
		}

		::System::Void OnTapTapLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTAPTAPLOGIN_OFFSET))(this);
		}

		::System::Void OnEnterGame(::System::String* account, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONENTERGAME_OFFSET))(this, account, password);
		}

		::System::Void OnUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnUserPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERPRIVACY_OFFSET))(this);
		}

		::System::Void OnRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONREGISTER_OFFSET))(this);
		}

		::System::Void OnForgetPwd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONFORGETPWD_OFFSET))(this);
		}

		::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
		}
	};
}
