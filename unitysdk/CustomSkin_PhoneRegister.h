#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_29;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CUSTOMSKIN_PHONEREGISTER_CLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x194964E0)
#define CUSTOMSKIN_PHONEREGISTER_CLICKCLOSEBTN_OFFSET UNITYSDK_OFFSET(0x19496560)
#define CUSTOMSKIN_PHONEREGISTER_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x19496BD0)
#define CUSTOMSKIN_PHONEREGISTER_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x19496C50)
#define CUSTOMSKIN_PHONEREGISTER_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19496AF0)
#define CUSTOMSKIN_PHONEREGISTER_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x19496EC0)
#define CUSTOMSKIN_PHONEREGISTER_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19494650)
#define CUSTOMSKIN_PHONEREGISTER_ONCLICKAGREMENTALLCHECKBOX_OFFSET UNITYSDK_OFFSET(0x19496CD0)
#define CUSTOMSKIN_PHONEREGISTER_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19494810)
#define CUSTOMSKIN_PHONEREGISTER_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x19497440)
#define CUSTOMSKIN_PHONEREGISTER_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x19495410)
#define CUSTOMSKIN_PHONEREGISTER_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x194971D0)
#define CUSTOMSKIN_PHONEREGISTER_ONOPENLOGINREGISTER_OFFSET UNITYSDK_OFFSET(0x19494CA0)
#define CUSTOMSKIN_PHONEREGISTER_ONPHONEINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x194965E0)
#define CUSTOMSKIN_PHONEREGISTER_ONPWDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x19496640)
#define CUSTOMSKIN_PHONEREGISTER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19494B50)
#define CUSTOMSKIN_PHONEREGISTER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x19496690)
#define CUSTOMSKIN_PHONEREGISTER_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19496B80)
#define CUSTOMSKIN_PHONEREGISTER_SETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x19495690)
#define CUSTOMSKIN_PHONEREGISTER_SETCHECKBOX_OFFSET UNITYSDK_OFFSET(0x19495E10)
#define CUSTOMSKIN_PHONEREGISTER_SETGETCODEBTN_OFFSET UNITYSDK_OFFSET(0x19495D60)
#define CUSTOMSKIN_PHONEREGISTER_SETPRIVACY_OFFSET UNITYSDK_OFFSET(0x194960D0)
#define CUSTOMSKIN_PHONEREGISTER_SETPWDINPUT_OFFSET UNITYSDK_OFFSET(0x19495A50)
#define CUSTOMSKIN_PHONEREGISTER_SETREGISTER_OFFSET UNITYSDK_OFFSET(0x19495F80)
#define CUSTOMSKIN_PHONEREGISTER_SETZONETIP_OFFSET UNITYSDK_OFFSET(0x194955B0)
#define CUSTOMSKIN_PHONEREGISTER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x194968B0)
#define CUSTOMSKIN_PHONEREGISTER_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x19496250)
#define CUSTOMSKIN_PHONEREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19494780)
#define CUSTOMSKIN_PHONEREGISTER__REQUESTVERIFYMESSAGE_B__21_0_OFFSET UNITYSDK_OFFSET(0x194975D0)
#define CUSTOMSKIN_PHONEREGISTER___BASE_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x194977A0)

inline static constexpr unsigned int CustomSkin_PhoneRegister_TypeDefinitionIndex = 69145;

class CustomSkin_PhoneRegister : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_PhoneRegister** StaticGet__instance()
	{
		return (::CustomSkin_PhoneRegister**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneRegister_TypeDefinitionIndex)->GetStaticField(0x4F190);
	}
	::UnityEngine::Coroutine* coroutine; // 0x18
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _phonePage; // 0x20
	::Class_2_79F6D62CE30E3F8E_29* _loginView; // 0x28
	::System::Boolean isRequestVerifyCode; // 0x30
	::System::Single countDownTime; // 0x34

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
