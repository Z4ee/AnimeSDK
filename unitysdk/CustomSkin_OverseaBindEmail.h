#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class UIGeneralLoginCheckDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_OVERSEABINDEMAIL_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x1821FBD0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x1821FB50)
#define CUSTOMSKIN_OVERSEABINDEMAIL_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x182202F0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x18220380)
#define CUSTOMSKIN_OVERSEABINDEMAIL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1821E730)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1821E8F0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x18220600)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1821FC50)
#define CUSTOMSKIN_OVERSEABINDEMAIL_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1821EA40)
#define CUSTOMSKIN_OVERSEABINDEMAIL_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1821FE70)
#define CUSTOMSKIN_OVERSEABINDEMAIL_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1821E9D0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETEMAILINPUT_OFFSET UNITYSDK_OFFSET(0x1821F290)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x1821F830)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETNOTICE_OFFSET UNITYSDK_OFFSET(0x1821FA40)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x1821F480)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x1821F8F0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x1821F230)
#define CUSTOMSKIN_OVERSEABINDEMAIL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x182200A0)
#define CUSTOMSKIN_OVERSEABINDEMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1821FCA0)
#define CUSTOMSKIN_OVERSEABINDEMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1821E860)
#define CUSTOMSKIN_OVERSEABINDEMAIL__REQUESTVERIFYMESSAGE_B__18_0_OFFSET UNITYSDK_OFFSET(0x18220790)

inline static constexpr unsigned int CustomSkin_OverseaBindEmail_TypeDefinitionIndex = 64113;

class CustomSkin_OverseaBindEmail : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_OverseaBindEmail** StaticGet__instance()
	{
		return (::CustomSkin_OverseaBindEmail**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_OverseaBindEmail_TypeDefinitionIndex)->GetStaticField(0x2E830);
	}
	::MoleMole::UIGeneralLoginCheckDialogPopWindowController* _phonePage; // 0x18
	::UnityEngine::Coroutine* coroutine; // 0x20
	::Class_2_79F6D62CE30E3F8E_16* _loginView; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

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
