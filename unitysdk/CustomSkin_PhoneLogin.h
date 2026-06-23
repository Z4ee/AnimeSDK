#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_79F6D62CE30E3F8E_17;
namespace MoleMole { class UIGeneralSDKLoginDialogPopWindowController; }
namespace MoleMole { class UITextLink; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Events { class UnityAction; }

#define CUSTOMSKIN_PHONELOGIN_ACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0x16C73710)
#define CUSTOMSKIN_PHONELOGIN_CLICKAPPLELOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x16C73510)
#define CUSTOMSKIN_PHONELOGIN_CLICKFLASHLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x16C73490)
#define CUSTOMSKIN_PHONELOGIN_CLICKMYSLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x16C73610)
#define CUSTOMSKIN_PHONELOGIN_CLICKTAPTAPLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x16C73590)
#define CUSTOMSKIN_PHONELOGIN_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x16C73FA0)
#define CUSTOMSKIN_PHONELOGIN_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x16C73F20)
#define CUSTOMSKIN_PHONELOGIN_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16C74790)
#define CUSTOMSKIN_PHONELOGIN_ENTERGAME_OFFSET UNITYSDK_OFFSET(0x16C73C10)
#define CUSTOMSKIN_PHONELOGIN_ENTERQRCODE_OFFSET UNITYSDK_OFFSET(0x16C74A10)
#define CUSTOMSKIN_PHONELOGIN_EXITQRCODE_OFFSET UNITYSDK_OFFSET(0x16C74B20)
#define CUSTOMSKIN_PHONELOGIN_GETTHIRDBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x16C73190)
#define CUSTOMSKIN_PHONELOGIN_GUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x16C73690)
#define CUSTOMSKIN_PHONELOGIN_INITPERSISTENCHECK_OFFSET UNITYSDK_OFFSET(0x16C72F40)
#define CUSTOMSKIN_PHONELOGIN_INIT_OFFSET UNITYSDK_OFFSET(0x16C709C0)
#define CUSTOMSKIN_PHONELOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16C6FBB0)
#define CUSTOMSKIN_PHONELOGIN_ONBACK_OFFSET UNITYSDK_OFFSET(0x16C73A70)
#define CUSTOMSKIN_PHONELOGIN_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x16C73830)
#define CUSTOMSKIN_PHONELOGIN_ONCLICKPERSISTENCHECK_OFFSET UNITYSDK_OFFSET(0x16C732B0)
#define CUSTOMSKIN_PHONELOGIN_ONCLICKQRCODELOGIN_OFFSET UNITYSDK_OFFSET(0x16C73B90)
#define CUSTOMSKIN_PHONELOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x16C6FD70)
#define CUSTOMSKIN_PHONELOGIN_ONCONSOLECANCEL_OFFSET UNITYSDK_OFFSET(0x16C74DF0)
#define CUSTOMSKIN_PHONELOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x16C6FFE0)
#define CUSTOMSKIN_PHONELOGIN_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x16C74870)
#define CUSTOMSKIN_PHONELOGIN_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET UNITYSDK_OFFSET(0x16C74B80)
#define CUSTOMSKIN_PHONELOGIN_ONOPENLOGIN_OFFSET UNITYSDK_OFFSET(0x16C70380)
#define CUSTOMSKIN_PHONELOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16C6FEB0)
#define CUSTOMSKIN_PHONELOGIN_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16C74EE0)
#define CUSTOMSKIN_PHONELOGIN_REFRESHCLOSEBACKUI_OFFSET UNITYSDK_OFFSET(0x16C71520)
#define CUSTOMSKIN_PHONELOGIN_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x16C74310)
#define CUSTOMSKIN_PHONELOGIN_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16C74820)
#define CUSTOMSKIN_PHONELOGIN_SETCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x16C712A0)
#define CUSTOMSKIN_PHONELOGIN_SETFLASHLOGINBTN_OFFSET UNITYSDK_OFFSET(0x16C71700)
#define CUSTOMSKIN_PHONELOGIN_SETTHIRDENTRY_OFFSET UNITYSDK_OFFSET(0x16C71910)
#define CUSTOMSKIN_PHONELOGIN_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16C74530)
#define CUSTOMSKIN_PHONELOGIN_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x16C74080)
#define CUSTOMSKIN_PHONELOGIN_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x16C72640)
#define CUSTOMSKIN_PHONELOGIN_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x16C74020)
#define CUSTOMSKIN_PHONELOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6FCE0)
#define CUSTOMSKIN_PHONELOGIN__INIT_B__17_0_OFFSET UNITYSDK_OFFSET(0x16C74F30)
#define CUSTOMSKIN_PHONELOGIN__INIT_B__17_1_OFFSET UNITYSDK_OFFSET(0x16C750F0)
#define CUSTOMSKIN_PHONELOGIN__INIT_B__17_2_OFFSET UNITYSDK_OFFSET(0x16C75160)
#define CUSTOMSKIN_PHONELOGIN__INIT_B__17_3_OFFSET UNITYSDK_OFFSET(0x122190E0)
#define CUSTOMSKIN_PHONELOGIN__REQUESTVERIFYMESSAGE_B__39_0_OFFSET UNITYSDK_OFFSET(0x12219150)
#define CUSTOMSKIN_PHONELOGIN___BASE_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x122193D0)

inline static constexpr unsigned int CustomSkin_PhoneLogin_TypeDefinitionIndex = 41942;

class CustomSkin_PhoneLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_PhoneLogin** StaticGet__instance()
	{
		return (::CustomSkin_PhoneLogin**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_PhoneLogin_TypeDefinitionIndex)->GetStaticField(0x4A860);
	}
	// static const ::System::String* LINK_ID_USERAGREEMENT; // 0x0
	// static const ::System::String* LINK_ID_PRIVACY; // 0x0
	::Il2CppArray<::System::String*>* thirdEntryNameList; // 0x18
	::MoleMole::UIGeneralSDKLoginDialogPopWindowController* _phonePage; // 0x20
	::Class_2_79F6D62CE30E3F8E_17* _loginView; // 0x28
	::Il2CppArray<::Foundation::AssetPath>* thirdEntryIconList; // 0x30
	::UnityEngine::Coroutine* coroutine; // 0x38
	::Il2CppArray<::UnityEngine::Events::UnityAction*>* thirdEntryCallback; // 0x40
	::MoleMole::UITextLink* textLink; // 0x48
	::System::Boolean isRequestVerifyCode; // 0x50
	::System::Single countDownTime; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_PhoneLogin* Instance()
	{
		return ((::CustomSkin_PhoneLogin*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_INSTANCE_OFFSET))();
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONSHOW_OFFSET))(this);
	}

	::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
	}

	::System::Void OnOpenLogin(::MoleMole::UIGeneralSDKLoginDialogPopWindowController* widget)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSDKLoginDialogPopWindowController*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONOPENLOGIN_OFFSET))(this, widget);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_INIT_OFFSET))(this);
	}

	::System::Void InitPersistenCheck()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_INITPERSISTENCHECK_OFFSET))(this);
	}

	::System::Void RefreshCloseBackUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_REFRESHCLOSEBACKUI_OFFSET))(this);
	}

	::System::Void SetFlashLoginBtn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_SETFLASHLOGINBTN_OFFSET))(this);
	}

	::System::Void SetThirdEntry()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_SETTHIRDENTRY_OFFSET))(this);
	}

	::System::String* GetThirdButtonName(::System::String* thirdName)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_GETTHIRDBUTTONNAME_OFFSET))(this, thirdName);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_UPDATETEXT_OFFSET))(this);
	}

	::System::Void OnClickPersistenCheck()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONCLICKPERSISTENCHECK_OFFSET))(this);
	}

	::System::Void ClickFlashLoginButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_CLICKFLASHLOGINBUTTON_OFFSET))(this);
	}

	::System::Void ClickAppleLoginButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_CLICKAPPLELOGINBUTTON_OFFSET))(this);
	}

	::System::Void ClickTapTapLoginButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_CLICKTAPTAPLOGINBUTTON_OFFSET))(this);
	}

	::System::Void ClickMYSLoginButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_CLICKMYSLOGINBUTTON_OFFSET))(this);
	}

	::System::Void GuestLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_GUESTLOGIN_OFFSET))(this);
	}

	::System::Void AccountLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ACCOUNTLOGIN_OFFSET))(this);
	}

	::System::Void OnBtnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void OnBack()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONBACK_OFFSET))(this);
	}

	::System::Void OnClickQRCodeLogin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONCLICKQRCODELOGIN_OFFSET))(this);
	}

	::System::Void EnterGame()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ENTERGAME_OFFSET))(this);
	}

	::System::Void ClickUserPrivacyButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
	}

	::System::Void ClickUserAgreementButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
	}

	::System::Void ValueChangePhoneInput(::System::String* input)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_VALUECHANGEPHONEINPUT_OFFSET))(this, input);
	}

	::System::Void UpdateRequestCodeButtonStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
	}

	::System::Void RequestVerifyMessage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_REQUESTVERIFYMESSAGE_OFFSET))(this);
	}

	::System::Void StartCountDown(::System::Single nCountdown)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_STARTCOUNTDOWN_OFFSET))(this, nCountdown);
	}

	::System::Void ResetCountDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_RESETCOUNTDOWN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* CountDown(::System::Single time)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_COUNTDOWN_OFFSET))(this, time);
	}

	::System::Void OnHrefClick(::System::String* hrefName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONHREFCLICK_OFFSET))(this, hrefName);
	}

	::System::Void EnterQRCode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ENTERQRCODE_OFFSET))(this);
	}

	::System::Void ExitQRCode()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_EXITQRCODE_OFFSET))(this);
	}

	::System::Void OnOpenConsoleProtocolWindow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONOPENCONSOLEPROTOCOLWINDOW_OFFSET))(this);
	}

	::System::Void OnConsoleCancel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONCONSOLECANCEL_OFFSET))(this);
	}

	::System::Void OnUILayoutPlatformChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this);
	}

	::System::Void SetConsolePlatform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN_SETCONSOLEPLATFORM_OFFSET))(this);
	}

	::System::Void _Init_b__17_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__INIT_B__17_0_OFFSET))(this);
	}

	::System::Void _Init_b__17_1(::System::String* acctount)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__INIT_B__17_1_OFFSET))(this, acctount);
	}

	::System::Void _Init_b__17_2(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__INIT_B__17_2_OFFSET))(this, strNewText);
	}

	::System::Void _Init_b__17_3(::System::String* strNewText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__INIT_B__17_3_OFFSET))(this, strNewText);
	}

	::System::Void _RequestVerifyMessage_b__39_0(::System::String* strResult)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN__REQUESTVERIFYMESSAGE_B__39_0_OFFSET))(this, strResult);
	}

	::System::Void __base_OnElementStatusChanged(::System::String* P0, ::System::String* P1, ::System::String* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_PHONELOGIN___BASE_ONELEMENTSTATUSCHANGED_OFFSET))(this, P0, P1, P2);
	}
};
