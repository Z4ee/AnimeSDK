#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x160B8300)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB710)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKFORGETPASSWORDBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB770)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKGUESTBUTTON_OFFSET UNITYSDK_OFFSET(0x160BBB50)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB870)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKPASSWORDCLEARBTN_OFFSET UNITYSDK_OFFSET(0x160BBE50)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKPASSWORDSHOWBTN_OFFSET UNITYSDK_OFFSET(0x160BBDA0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKPHONELOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x160BBC40)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKQRCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB730)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKREGISTERBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB750)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKSAVERECORDTOGGLE_OFFSET UNITYSDK_OFFSET(0x160BBD50)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKTAPTAPBUTTON_OFFSET UNITYSDK_OFFSET(0x160BBC60)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKTOGGLE_OFFSET UNITYSDK_OFFSET(0x160BB850)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB790)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x160BB7F0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_DISABLEREGISTER_OFFSET UNITYSDK_OFFSET(0x160BB470)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_HIDE_OFFSET UNITYSDK_OFFSET(0x160BB6A0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160BBF60)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x160BB450)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_ONPASSWORDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x160BBE80)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_SHOW_OFFSET UNITYSDK_OFFSET(0x160BB5B0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_START_OFFSET UNITYSDK_OFFSET(0x160BB420)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATEBOTTOMCONTENT_OFFSET UNITYSDK_OFFSET(0x160BA220)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATESAVERECORDTIPS_OFFSET UNITYSDK_OFFSET(0x160BAF40)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x160BA610)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATETOGGLESTATUS_OFFSET UNITYSDK_OFFSET(0x160BBD70)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x160BBFE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountSpecial_TypeDefinitionIndex = 8144;

	class LoginByAccountSpecial : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByAccountSpecial** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginByAccountSpecial**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountSpecial_TypeDefinitionIndex)->GetStaticField(0x14210);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* QRCodeButtonPath; // 0x0
		// static const ::System::String* QRBubblePath; // 0x0
		// static const ::System::String* TestEnvTextPath; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* AccountInputPath; // 0x0
		// static const ::System::String* PasswordInputPath; // 0x0
		// static const ::System::String* AccountTextPath; // 0x0
		// static const ::System::String* PasswordTextPath; // 0x0
		// static const ::System::String* AccountPlaceholderPath; // 0x0
		// static const ::System::String* PasswordPlaceholderPath; // 0x0
		// static const ::System::String* PwdInputShowBthPath; // 0x0
		// static const ::System::String* PwdInputHideBthPath; // 0x0
		// static const ::System::String* PwdInputClearBthPath; // 0x0
		// static const ::System::String* LoginButtonPath; // 0x0
		// static const ::System::String* RegisterButtonPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonPath; // 0x0
		// static const ::System::String* GuestButtonPath; // 0x0
		// static const ::System::String* PhoneLoginButtonPath; // 0x0
		// static const ::System::String* LoginButtonTextPath; // 0x0
		// static const ::System::String* RegisterTextPath; // 0x0
		// static const ::System::String* ForgetPasswordTextPath; // 0x0
		// static const ::System::String* GuestButtonTextPath; // 0x0
		// static const ::System::String* PhoneLoginButtonTextPath; // 0x0
		// static const ::System::String* BottomContentPath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* ThirdPartyPath; // 0x0
		// static const ::System::String* TapTapButtonPath; // 0x0
		// static const ::System::String* AgreeAllTogglePath; // 0x0
		// static const ::System::String* UserAgreementPath; // 0x0
		// static const ::System::String* UserAgreementBtnTextPath; // 0x0
		// static const ::System::String* PrivacyPath; // 0x0
		// static const ::System::String* PrivacyBtnTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::GameObject* testFlagObject; // 0x60
		::UnityEngine::GameObject* qrCodeObject; // 0x68
		::UnityEngine::UI::Button* qrCodeButton; // 0x70
		::UnityEngine::GameObject* bubbleObject; // 0x78
		::UnityEngine::UI::InputField* accountInput; // 0x80
		::UnityEngine::UI::InputField* passwordInput; // 0x88
		::UnityEngine::UI::Button* pwdInputShowBtn; // 0x90
		::UnityEngine::GameObject* pwdInputShowBtnObject; // 0x98
		::UnityEngine::UI::Button* pwdInputHideBtn; // 0xA0
		::UnityEngine::GameObject* pwdInputHideBtnObject; // 0xA8
		::UnityEngine::GameObject* pwdInputClearBtnObject; // 0xB0
		::UnityEngine::UI::Button* pwdInputClearBtn; // 0xB8
		::UnityEngine::UI::Button* forgetPasswordButton; // 0xC0
		::UnityEngine::UI::Button* loginButton; // 0xC8
		::UnityEngine::UI::Button* guestButton; // 0xD0
		::UnityEngine::UI::Button* phoneLoginButton; // 0xD8
		::UnityEngine::UI::Button* taptapButton; // 0xE0
		::UnityEngine::GameObject* guestButtonObject; // 0xE8
		::UnityEngine::GameObject* phoneLoginButtonObject; // 0xF0
		::UnityEngine::GameObject* taptapButtonObject; // 0xF8
		::UnityEngine::UI::Toggle* agreeAllToggle; // 0x100
		::UnityEngine::UI::Button* userAgreementButton; // 0x108
		::UnityEngine::UI::Button* privacyButton; // 0x110
		::UnityEngine::UI::Toggle* saveRecordToggle; // 0x118
		::UnityEngine::UI::Text* saveRecordText; // 0x120
		::System::Action* OnClose; // 0x128
		::System::Action* OnQRCodeLogin; // 0x130
		::System::Action* OnRegister; // 0x138
		::System::Action* OnForgetPwd; // 0x140
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0x148
		::System::Action* OnGuest; // 0x150
		::System::Action* OnPhoneLogin; // 0x158
		::System::Action* OnTapTapLogin; // 0x160
		::System::Action* OnUserAgreement; // 0x168
		::System::Action* OnUserPrivacy; // 0x170
		::System::Action_1<::System::Boolean>* OnToggleClicked; // 0x178
		::System::Action_1<::System::Boolean>* OnSaveRecordToggleClicked; // 0x180
		::System::Action* OnNotifyClose; // 0x188
		::MiHoYo::SDK::AccountModel* account; // 0x190
		::System::Boolean isPasswordShow; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void UpdateBottomContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATEBOTTOMCONTENT_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_SHOW_OFFSET))(model);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_HIDE_OFFSET))();
		}

		::System::Void ClickCloseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickQRCodeButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKQRCODEBUTTON_OFFSET))(this);
		}

		::System::Void ClickRegisterButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKREGISTERBUTTON_OFFSET))(this);
		}

		::System::Void ClickForgetPasswordButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKFORGETPASSWORDBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserAgreementButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserPrivacyButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
		}

		::System::Void ClickToggle(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKTOGGLE_OFFSET))(this, isOn);
		}

		::System::Void ClickLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKLOGINBUTTON_OFFSET))(this);
		}

		::System::Void ClickGuestButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKGUESTBUTTON_OFFSET))(this);
		}

		::System::Void ClickPhoneLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKPHONELOGINBUTTON_OFFSET))(this);
		}

		::System::Void ClickTapTapButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKTAPTAPBUTTON_OFFSET))(this);
		}

		::System::Void ClickSaveRecordToggle(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKSAVERECORDTOGGLE_OFFSET))(this, isOn);
		}

		::System::Void UpdateToggleStatus(::System::Boolean isChecked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATETOGGLESTATUS_OFFSET))(this, isChecked);
		}

		::System::Void DisableRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_DISABLEREGISTER_OFFSET))(this);
		}

		::System::Void UpdateSaveRecordTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_UPDATESAVERECORDTIPS_OFFSET))(this);
		}

		::System::Void ClickPasswordShowBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKPASSWORDSHOWBTN_OFFSET))(this);
		}

		::System::Void ClickPasswordClearBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_CLICKPASSWORDCLEARBTN_OFFSET))(this);
		}

		::System::Void OnPasswordValueChange(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_ONPASSWORDVALUECHANGE_OFFSET))(this, text);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTSPECIAL_ONDESTROY_OFFSET))(this);
		}
	};
}
