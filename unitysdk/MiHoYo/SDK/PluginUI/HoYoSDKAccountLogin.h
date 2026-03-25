#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x855D410)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x855E4F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x855E020)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x855EAE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x855E8B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONFORGETPWD_OFFSET UNITYSDK_OFFSET(0x855EAA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x855E6A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONQRCODELOGIN_OFFSET UNITYSDK_OFFSET(0x855E830)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x855EA60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSAVERECORDTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x855E5C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x855D540)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x855E870)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x855E750)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x855E9E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_ONUSERPRIVACY_OFFSET UNITYSDK_OFFSET(0x855EA20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN_SHOW_OFFSET UNITYSDK_OFFSET(0x855D600)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x855D4C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin_TypeDefinitionIndex = 37420;

	class HoYoSDKAccountLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin_TypeDefinitionIndex)->GetStaticField(0x14200);
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
