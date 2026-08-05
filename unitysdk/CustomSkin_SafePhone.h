#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_SAFEPHONE_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x17ECB9B0)
#define CUSTOMSKIN_SAFEPHONE_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x17ECB930)
#define CUSTOMSKIN_SAFEPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17ECBF00)
#define CUSTOMSKIN_SAFEPHONE_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x17ECBFE0)
#define CUSTOMSKIN_SAFEPHONE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17ECA3E0)
#define CUSTOMSKIN_SAFEPHONE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x17ECA5A0)
#define CUSTOMSKIN_SAFEPHONE_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x17ECC260)
#define CUSTOMSKIN_SAFEPHONE_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x17ECBA30)
#define CUSTOMSKIN_SAFEPHONE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17ECA7A0)
#define CUSTOMSKIN_SAFEPHONE_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x17ECBA90)
#define CUSTOMSKIN_SAFEPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17ECBF90)
#define CUSTOMSKIN_SAFEPHONE_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x17ECB010)
#define CUSTOMSKIN_SAFEPHONE_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x17ECB6B0)
#define CUSTOMSKIN_SAFEPHONE_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x17ECB310)
#define CUSTOMSKIN_SAFEPHONE_SETVERIFY_OFFSET UNITYSDK_OFFSET(0x17ECB560)
#define CUSTOMSKIN_SAFEPHONE_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x17ECAF20)
#define CUSTOMSKIN_SAFEPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17ECBCC0)
#define CUSTOMSKIN_SAFEPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x17ECB790)
#define CUSTOMSKIN_SAFEPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECA510)
#define CUSTOMSKIN_SAFEPHONE__REQUESTVERIFYMESSAGE_B__17_0_OFFSET UNITYSDK_OFFSET(0x17ECC3F0)

inline static constexpr unsigned int CustomSkin_SafePhone_TypeDefinitionIndex = 77501;

class CustomSkin_SafePhone : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_SafePhone** StaticGet__instance()
	{
		return (::CustomSkin_SafePhone**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_SafePhone_TypeDefinitionIndex)->GetStaticField(0x387D0);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x20
	::Class_2_79F6D62CE30E3F8E_16* _loginView; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_SafePhone* Instance()
	{
		return ((::CustomSkin_SafePhone*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_ONSHOW_OFFSET))(this);
	}

	::System::Void SetNotice()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_SETNOTICE_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_SETZONETIP_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void SetAccountInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_SETACCOUNTINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPWDValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_ONPWDVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetVerify()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_SETVERIFY_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_ENTERGAME_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__17_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_SAFEPHONE__REQUESTVERIFYMESSAGE_B__17_0_OFFSET))(this, strResult);
	}
};
