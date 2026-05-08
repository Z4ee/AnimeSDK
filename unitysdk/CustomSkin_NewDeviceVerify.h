#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_22;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x139E2A50)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x139E2AD0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKPROBLEM_OFFSET UNITYSDK_OFFSET(0x139E2820)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKVERIFY_OFFSET UNITYSDK_OFFSET(0x139E28A0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x139E1710)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCLICKGETCAPTCHA_OFFSET UNITYSDK_OFFSET(0x139E2B50)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x139E18D0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x139E2EE0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET UNITYSDK_OFFSET(0x139E2BF0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x139E1920)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETCAPTCHAINPUT_OFFSET UNITYSDK_OFFSET(0x139E2580)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x139E23C0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETPROBLEMBUTTON_OFFSET UNITYSDK_OFFSET(0x139E22B0)
#define CUSTOMSKIN_NEWDEVICEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x139E1840)
#define CUSTOMSKIN_NEWDEVICEVERIFY__ONREQUESTCAPTCHACALLBACK_B__14_0_OFFSET UNITYSDK_OFFSET(0x139E3070)

inline static constexpr unsigned int CustomSkin_NewDeviceVerify_TypeDefinitionIndex = 58553;

class CustomSkin_NewDeviceVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_NewDeviceVerify** StaticGet__instance()
	{
		return (::CustomSkin_NewDeviceVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_NewDeviceVerify_TypeDefinitionIndex)->GetStaticField(0x306D0);
	}
	::Class_2_79F6D62CE30E3F8E_22* _view; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_NewDeviceVerify* Instance()
	{
		return ((::CustomSkin_NewDeviceVerify*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONSHOW_OFFSET))(this);
	}

	::System::Void ClickProblem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKPROBLEM_OFFSET))(this);
	}

	::System::Void ClickVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKVERIFY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetCaptchaInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_SETCAPTCHAINPUT_OFFSET))(this);
	}

	::System::Void SetProblemButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_SETPROBLEMBUTTON_OFFSET))(this);
	}

	::System::Void OnClickGetCaptcha()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONCLICKGETCAPTCHA_OFFSET))(this);
	}

	::System::Void OnRequestCaptchaCallback(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET))(this, strResult);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _OnRequestCaptchaCallback_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_NEWDEVICEVERIFY__ONREQUESTCAPTCHACALLBACK_B__14_0_OFFSET))(this);
	}
};
