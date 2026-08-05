#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DCC2200)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0x1DCC2B80)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DCC2B10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1DCC27F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCC32D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x1DCC3020)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DCC2D50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODERESULT_OFFSET UNITYSDK_OFFSET(0x1DCC2EC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONQRCODELOGIN_OFFSET UNITYSDK_OFFSET(0x1DCC2BC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1DCC2390)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x1DCC3290)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x1DCC2C00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1DCC3210)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERPRIVACY_OFFSET UNITYSDK_OFFSET(0x1DCC3250)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_SHOW_OFFSET UNITYSDK_OFFSET(0x1DCC2400)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC2300)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1DCC3530)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKPhoneLogin_TypeDefinitionIndex = 37789;

	class HoYoSDKPhoneLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKPhoneLogin_TypeDefinitionIndex)->GetStaticField(0x29EB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_SHOW_OFFSET))(this);
		}

		::System::Void OnCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void OnAccountLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONACCOUNTLOGIN_OFFSET))(this);
		}

		::System::Void OnQRCodeLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONQRCODELOGIN_OFFSET))(this);
		}

		::System::Void OnToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void OnGetVerifyCodeCallback(::System::String* verifyCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODECALLBACK_OFFSET))(this, verifyCode);
		}

		::System::Void OnGetVerifyCodeResult(::System::String* retcode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODERESULT_OFFSET))(this, retcode);
		}

		::System::Void OnEnterGame(::System::String* phoneNumber, ::System::String* verifyCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONENTERGAME_OFFSET))(this, phoneNumber, verifyCode);
		}

		::System::Void OnUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnUserPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERPRIVACY_OFFSET))(this);
		}

		::System::Void OnTapTapLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTAPTAPLOGIN_OFFSET))(this);
		}

		::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
		}

		::System::Void _Show_b__4_0(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN__SHOW_B__4_0_OFFSET))(this, value);
		}
	};
}
