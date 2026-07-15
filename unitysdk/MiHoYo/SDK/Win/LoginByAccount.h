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

#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1569CC70)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1569FF80)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1569FFA0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKFORGETPASSWORDBUTTON_OFFSET UNITYSDK_OFFSET(0x1569FFE0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x156A00E0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKPASSWORDCLEARBTN_OFFSET UNITYSDK_OFFSET(0x156A0500)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKPASSWORDSHOWBTN_OFFSET UNITYSDK_OFFSET(0x156A0400)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKREGISTERBUTTON_OFFSET UNITYSDK_OFFSET(0x1569FFC0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKSAVERECORDTOGGLE_OFFSET UNITYSDK_OFFSET(0x156A03B0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKTOGGLE_OFFSET UNITYSDK_OFFSET(0x156A00C0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x156A0000)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x156A0060)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_DISABLEREGISTER_OFFSET UNITYSDK_OFFSET(0x1569FA30)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_HIDE_OFFSET UNITYSDK_OFFSET(0x1569FF10)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x156A0610)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_ONPASSWORDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x156A0530)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_SHOW_OFFSET UNITYSDK_OFFSET(0x1569FE10)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_START_OFFSET UNITYSDK_OFFSET(0x1569FDE0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_UPDATESAVERECORDTIPS_OFFSET UNITYSDK_OFFSET(0x1569F410)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1569EAE0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_UPDATETOGGLESTATUS_OFFSET UNITYSDK_OFFSET(0x156A03D0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x156A0660)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccount_TypeDefinitionIndex = 9200;

	class LoginByAccount : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByAccount** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginByAccount**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount_TypeDefinitionIndex)->GetStaticField(0x19E10);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
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
		// static const ::System::String* LoginButtonTextPath; // 0x0
		// static const ::System::String* RegisterTextPath; // 0x0
		// static const ::System::String* ForgetPasswordTextPath; // 0x0
		// static const ::System::String* AgreeAllTogglePath; // 0x0
		// static const ::System::String* UserAgreementPath; // 0x0
		// static const ::System::String* UserAgreementBtnTextPath; // 0x0
		// static const ::System::String* PrivacyPath; // 0x0
		// static const ::System::String* PrivacyBtnTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Button* closeButton; // 0x60
		::UnityEngine::GameObject* testFlagObject; // 0x68
		::UnityEngine::UI::InputField* accountInput; // 0x70
		::UnityEngine::UI::InputField* passwordInput; // 0x78
		::UnityEngine::UI::Button* pwdInputShowBtn; // 0x80
		::UnityEngine::GameObject* pwdInputShowBtnObject; // 0x88
		::UnityEngine::UI::Button* pwdInputHideBtn; // 0x90
		::UnityEngine::GameObject* pwdInputHideBtnObject; // 0x98
		::UnityEngine::UI::Button* pwdInputClearBtn; // 0xA0
		::UnityEngine::GameObject* pwdInputClearBtnObject; // 0xA8
		::UnityEngine::UI::Button* loginButton; // 0xB0
		::UnityEngine::UI::Button* registerButton; // 0xB8
		::UnityEngine::UI::Button* forgetPasswordButton; // 0xC0
		::UnityEngine::UI::Toggle* agreeAllToggle; // 0xC8
		::UnityEngine::UI::Button* userAgreementButton; // 0xD0
		::UnityEngine::UI::Button* privacyButton; // 0xD8
		::UnityEngine::UI::Toggle* saveRecordToggle; // 0xE0
		::UnityEngine::UI::Text* saveRecordText; // 0xE8
		::System::Action* OnBack; // 0xF0
		::System::Action* OnClose; // 0xF8
		::System::Action* OnRegister; // 0x100
		::System::Action* OnForgetPwd; // 0x108
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0x110
		::System::Action* OnUserAgreement; // 0x118
		::System::Action* OnUserPrivacy; // 0x120
		::System::Action_1<::System::Boolean>* OnToggleClicked; // 0x128
		::System::Action_1<::System::Boolean>* OnSaveRecordToggleClicked; // 0x130
		::System::Action* OnNotifyClose; // 0x138
		::MiHoYo::SDK::AccountModel* account; // 0x140
		::System::Boolean isPasswordShow; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_START_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_HIDE_OFFSET))();
		}

		::System::Void ClickBackButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKBACKBUTTON_OFFSET))(this);
		}

		::System::Void ClickCloseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickRegisterButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKREGISTERBUTTON_OFFSET))(this);
		}

		::System::Void ClickForgetPasswordButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKFORGETPASSWORDBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserAgreementButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserPrivacyButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
		}

		::System::Void ClickToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKTOGGLE_OFFSET))(this, a1);
		}

		::System::Void ClickLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKLOGINBUTTON_OFFSET))(this);
		}

		::System::Void ClickSaveRecordToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKSAVERECORDTOGGLE_OFFSET))(this, a1);
		}

		::System::Void UpdateToggleStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_UPDATETOGGLESTATUS_OFFSET))(this, a1);
		}

		::System::Void DisableRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_DISABLEREGISTER_OFFSET))(this);
		}

		::System::Void UpdateSaveRecordTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_UPDATESAVERECORDTIPS_OFFSET))(this);
		}

		::System::Void ClickPasswordShowBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKPASSWORDSHOWBTN_OFFSET))(this);
		}

		::System::Void ClickPasswordClearBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_CLICKPASSWORDCLEARBTN_OFFSET))(this);
		}

		::System::Void OnPasswordValueChange(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_ONPASSWORDVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_ONDESTROY_OFFSET))(this);
		}
	};
}
