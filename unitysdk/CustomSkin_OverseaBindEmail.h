#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_22;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEABINDEMAIL_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x13A66040)
#define CUSTOMSKIN_OVERSEABINDEMAIL_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x13A65FC0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x13A66750)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x13A667E0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13A64BA0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x13A64D60)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x13A66A60)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x13A660C0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13A64EB0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x13A662E0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x13A64E40)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETEMAILINPUT_OFFSET UNITYSDK_OFFSET(0x13A65700)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x13A65CA0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x13A65EB0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x13A658F0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x13A65D60)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x13A656A0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x13A66510)
#define CUSTOMSKIN_OVERSEABINDEMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x13A66110)
#define CUSTOMSKIN_OVERSEABINDEMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x13A64CD0)
#define CUSTOMSKIN_OVERSEABINDEMAIL__REQUESTVERIFYMESSAGE_B__18_0_OFFSET UNITYSDK_OFFSET(0x13A66BF0)

inline static constexpr unsigned int CustomSkin_OverseaBindEmail_TypeDefinitionIndex = 48599;

class CustomSkin_OverseaBindEmail : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaBindEmail** StaticGet__instance()
	{
		return (::CustomSkin_OverseaBindEmail**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaBindEmail_TypeDefinitionIndex)->GetStaticField(0x2A850);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x18
	::UnityEngine::Coroutine* coroutine; // 0x20
	::Class_2_79F6D62CE30E3F8E_22* _loginView; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_OverseaBindEmail* Instance()
	{
		return ((::CustomSkin_OverseaBindEmail*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETZONETIP_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void SetEmailInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETEMAILINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPWDValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONPWDVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_SETREGISTER_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ENTERGAME_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__18_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEABINDEMAIL__REQUESTVERIFYMESSAGE_B__18_0_OFFSET))(this, strResult);
	}
};
