#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }

#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x1652EA20)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x1652EAA0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKPROBLEM_OFFSET UNITYSDK_OFFSET(0x1652E7F0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_CLICKVERIFY_OFFSET UNITYSDK_OFFSET(0x1652E870)
#define CUSTOMSKIN_NEWDEVICEVERIFY_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1652D6D0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCLICKGETCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1652EB20)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1652D890)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x1652EEB0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONREQUESTCAPTCHACALLBACK_OFFSET UNITYSDK_OFFSET(0x1652EBC0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1652D8E0)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETCAPTCHAINPUT_OFFSET UNITYSDK_OFFSET(0x1652E550)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x1652E390)
#define CUSTOMSKIN_NEWDEVICEVERIFY_SETPROBLEMBUTTON_OFFSET UNITYSDK_OFFSET(0x1652E280)
#define CUSTOMSKIN_NEWDEVICEVERIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1652D800)
#define CUSTOMSKIN_NEWDEVICEVERIFY__ONREQUESTCAPTCHACALLBACK_B__14_0_OFFSET UNITYSDK_OFFSET(0x1652F040)

inline static constexpr unsigned int CustomSkin_NewDeviceVerify_TypeDefinitionIndex = 75467;

class CustomSkin_NewDeviceVerify : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_NewDeviceVerify** StaticGet__instance()
	{
		return (::CustomSkin_NewDeviceVerify**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_NewDeviceVerify_TypeDefinitionIndex)->GetStaticField(0x34D40);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* popWidget; // 0x18
	::Class_2_79F6D62CE30E3F8E_16* _view; // 0x20

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
