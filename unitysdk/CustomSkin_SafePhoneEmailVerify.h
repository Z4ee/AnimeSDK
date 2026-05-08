#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_22;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x139E5E80)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x139E5F00)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKVERIFY_OFFSET UNITYSDK_OFFSET(0x139E5CD0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x139E4EE0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLICKGETCAPTCHA_OFFSET UNITYSDK_OFFSET(0x139E5F80)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x139E50A0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x139E6220)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET UNITYSDK_OFFSET(0x139E6020)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x139E50F0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETMAILINPUT_OFFSET UNITYSDK_OFFSET(0x139E5990)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x139E57B0)
#define CUSTOMSKIN_SAFEPHONEEMAILVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x139E5010)

inline static constexpr unsigned int CustomSkin_SafePhoneEmailVerify_TypeDefinitionIndex = 44512;

class CustomSkin_SafePhoneEmailVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_SafePhoneEmailVerify** StaticGet__instance()
	{
		return (::CustomSkin_SafePhoneEmailVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_SafePhoneEmailVerify_TypeDefinitionIndex)->GetStaticField(0x306F0);
	}
	::Class_2_79F6D62CE30E3F8E_22* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_SafePhoneEmailVerify* Instance()
	{
		return ((::CustomSkin_SafePhoneEmailVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKVERIFY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetMailInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_SETMAILINPUT_OFFSET))(this);
	}

	::System::Void OnClickGetCaptcha()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCLICKGETCAPTCHA_OFFSET))(this);
	}

	::System::Void OnRequestCaptchaCallback(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET))(this, strResult);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONEEMAILVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}
};
