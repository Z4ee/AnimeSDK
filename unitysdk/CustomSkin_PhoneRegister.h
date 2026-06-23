#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_17;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_PHONEREGISTER_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x15FFF010)
#define CUSTOMSKIN_PHONEREGISTER_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x15FFF090)
#define CUSTOMSKIN_PHONEREGISTER_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x15FFF710)
#define CUSTOMSKIN_PHONEREGISTER_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x15FFF790)
#define CUSTOMSKIN_PHONEREGISTER_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15FFF630)
#define CUSTOMSKIN_PHONEREGISTER_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x15FFFA00)
#define CUSTOMSKIN_PHONEREGISTER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15FFD1B0)
#define CUSTOMSKIN_PHONEREGISTER_ONCLICKAGREMENTALLCHECKBOX_OFFSET UNITYSDK_OFFSET(0x15FFF810)
#define CUSTOMSKIN_PHONEREGISTER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15FFD370)
#define CUSTOMSKIN_PHONEREGISTER_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x15FFFF80)
#define CUSTOMSKIN_PHONEREGISTER_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x15FFDF60)
#define CUSTOMSKIN_PHONEREGISTER_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x15FFFD10)
#define CUSTOMSKIN_PHONEREGISTER_ONOPENLOGINREGISTER_OFFSET UNITYSDK_OFFSET(0x15FFD800)
#define CUSTOMSKIN_PHONEREGISTER_ONPHONEINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x15FFF110)
#define CUSTOMSKIN_PHONEREGISTER_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x15FFF170)
#define CUSTOMSKIN_PHONEREGISTER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15FFD6B0)
#define CUSTOMSKIN_PHONEREGISTER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x15FFF1C0)
#define CUSTOMSKIN_PHONEREGISTER_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15FFF6C0)
#define CUSTOMSKIN_PHONEREGISTER_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x15FFE1E0)
#define CUSTOMSKIN_PHONEREGISTER_SETCHECKBOX_OFFSET UNITYSDK_OFFSET(0x15FFE950)
#define CUSTOMSKIN_PHONEREGISTER_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x15FFE8A0)
#define CUSTOMSKIN_PHONEREGISTER_SETPRIVACY_OFFSET UNITYSDK_OFFSET(0x15FFEC10)
#define CUSTOMSKIN_PHONEREGISTER_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x15FFE590)
#define CUSTOMSKIN_PHONEREGISTER_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x15FFEAC0)
#define CUSTOMSKIN_PHONEREGISTER_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x15FFE100)
#define CUSTOMSKIN_PHONEREGISTER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15FFF3E0)
#define CUSTOMSKIN_PHONEREGISTER_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x15FFED90)
#define CUSTOMSKIN_PHONEREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFD2E0)
#define CUSTOMSKIN_PHONEREGISTER__REQUESTVERIFYMESSAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x16000110)
#define CUSTOMSKIN_PHONEREGISTER___BASE_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x160002E0)

inline static constexpr unsigned int CustomSkin_PhoneRegister_TypeDefinitionIndex = 54118;

class CustomSkin_PhoneRegister : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_PhoneRegister** StaticGet__instance()
	{
		return (::CustomSkin_PhoneRegister**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneRegister_TypeDefinitionIndex)->GetStaticField(0x45A50);
	}
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _phonePage; // 0x18
	::Class_2_79F6D62CE30E3F8E_17* _loginView; // 0x20
	::UnityEngine::Coroutine* coroutine; // 0x28
	::System::Single countDownTime; // 0x30
	::System::Boolean isRequestVerifyCode; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_PhoneRegister* Instance()
	{
		return ((::CustomSkin_PhoneRegister*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONSHOW_OFFSET))(this);
	}

	::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
	}

	::System::Void OnOpenLoginRegister(::MoleMole::UIGeneralSDKLoginDialogPopWindowController* widget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSDKLoginDialogPopWindowController*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONOPENLOGINREGISTER_OFFSET))(this, widget);
	}

	::System::Void SetPrivacy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETPRIVACY_OFFSET))(this);
	}

	::System::Void ClickBackBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKBACKBTN_OFFSET))(this);
	}

	::System::Void ClickCloseBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKCLOSEBTN_OFFSET))(this);
	}

	::System::Void SetZoneTip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETZONETIP_OFFSET))(this);
	}

	::System::Void SetAccountInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETACCOUNTINPUT_OFFSET))(this);
	}

	::System::Void SetPWDInput()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETPWDINPUT_OFFSET))(this);
	}

	::System::Void OnPhoneInputValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONPHONEINPUTVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void OnPWDValueChange(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONPWDVALUECHANGE_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void SetGetCodeBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETGETCODEBTN_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_STARTCOUNTDOWN_OFFSET))(this);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void SetCheckBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETCHECKBOX_OFFSET))(this);
	}

	::System::Void ClickUserAgreementButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
	}

	::System::Void ClickUserPrivacyButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
	}

	::System::Void OnClickAgrementAllCheckBox()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONCLICKAGREMENTALLCHECKBOX_OFFSET))(this);
	}

	::System::Void SetRegister()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_SETREGISTER_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ENTERGAME_OFFSET))(this);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void _RequestVerifyMessage_b__21_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER__REQUESTVERIFYMESSAGE_B__21_0_OFFSET))(this, strResult);
	}

	::System::Void __base_OnElementStatusChanged(::System::String* P0, ::System::String* P1, ::System::String* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONEREGISTER___BASE_ONELEMENTSTATUSCHANGED_OFFSET))(this, P0, P1, P2);
	}
};
