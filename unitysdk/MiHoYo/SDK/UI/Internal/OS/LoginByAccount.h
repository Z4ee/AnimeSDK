#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ACCOUNTINPUTCLEARBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1D3D0DE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D3CD0E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKAPPLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0B80)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0D80)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKFACEBOOKBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0C80)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKFORGETPASSWORDBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0DC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKGOOGLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0C00)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D03A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKREGISTERBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0DA0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKTWITTERBUTTON_OFFSET UNITYSDK_OFFSET(0x1D3D0D00)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_DISABLEREGISTER_OFFSET UNITYSDK_OFFSET(0x1D3D00B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_GUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x1D3D0B00)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_HIDEPASSWORDDETAILBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1D3D1150)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_HIDE_OFFSET UNITYSDK_OFFSET(0x1D3D0330)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONACCOUNTINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1D3D1270)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONBACKBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1D3D0AE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D3D1570)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONPASSWORDINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1D3D12F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_PASSWORDINPUTCLEARBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1D3D0E70)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_SHOWPASSWORDDETAILBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1D3D1030)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_SHOW_OFFSET UNITYSDK_OFFSET(0x1D3D0200)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_START_OFFSET UNITYSDK_OFFSET(0x1D3D08F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_UPDATEBACKBTN_OFFSET UNITYSDK_OFFSET(0x1D3D0980)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_UPDATEBOTTOMCONTENT_OFFSET UNITYSDK_OFFSET(0x1D3CF090)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1D3CFE10)
#define MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D1590)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int LoginByAccount_TypeDefinitionIndex = 20534;

	class LoginByAccount : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::LoginByAccount** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::LoginByAccount**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount_TypeDefinitionIndex)->GetStaticField(0xB140);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* AccountInputPath; // 0x0
		// static const ::System::String* PasswordInputPath; // 0x0
		// static const ::System::String* AccountPlaceholderPath; // 0x0
		// static const ::System::String* PasswordPlaceholderPath; // 0x0
		// static const ::System::String* AccountInputClearAllBtnPath; // 0x0
		// static const ::System::String* PasswordInputClearAllBtnPath; // 0x0
		// static const ::System::String* PasswordShowDetailBtnPath; // 0x0
		// static const ::System::String* PasswordHideDetailBtnPath; // 0x0
		// static const ::System::String* LoginButtonPath; // 0x0
		// static const ::System::String* RegisterButtonPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonPath; // 0x0
		// static const ::System::String* TestEnvTextPath; // 0x0
		// static const ::System::String* LoginButtonTextPath; // 0x0
		// static const ::System::String* RegisterTextPath; // 0x0
		// static const ::System::String* ForgetPasswordTextPath; // 0x0
		// static const ::System::String* BottomContentPath; // 0x0
		// static const ::System::String* OverSeaGuestButtonPath; // 0x0
		// static const ::System::String* GoogleButtonPath; // 0x0
		// static const ::System::String* AppleButtonPath; // 0x0
		// static const ::System::String* FaceBookButtonPath; // 0x0
		// static const ::System::String* TwitterButtonPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::GameObject* testFlagObject; // 0x68
		::UnityEngine::UI::InputField* accountInput; // 0x70
		::UnityEngine::UI::InputField* passwordInput; // 0x78
		::UnityEngine::UI::Button* accountClearAllBtn; // 0x80
		::UnityEngine::UI::Button* passwordClearAllBtn; // 0x88
		::UnityEngine::UI::Button* passwordShowDetailBtn; // 0x90
		::UnityEngine::UI::Button* passwordHideDetailBtn; // 0x98
		::UnityEngine::UI::Button* loginButton; // 0xA0
		::UnityEngine::UI::Button* registerButton; // 0xA8
		::UnityEngine::UI::Button* forgetPasswordButton; // 0xB0
		::UnityEngine::Transform* bottomTransform; // 0xB8
		::UnityEngine::Transform* guestButtonTransform; // 0xC0
		::UnityEngine::Transform* appleButtonTransform; // 0xC8
		::UnityEngine::Transform* googleButtonTransform; // 0xD0
		::UnityEngine::Transform* facebookButtonTransform; // 0xD8
		::UnityEngine::Transform* twitterButtonTransform; // 0xE0
		::UnityEngine::UI::Text* accountPlaceholder; // 0xE8
		::UnityEngine::UI::Text* passwordPlaceholder; // 0xF0
		::UnityEngine::UI::Text* registerText; // 0xF8
		::UnityEngine::UI::Text* forgetPwdText; // 0x100
		::UnityEngine::UI::Text* loginText; // 0x108
		::System::Action* OnClose; // 0x110
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0x118
		::System::Action* OnRegister; // 0x120
		::System::Action* OnForgetPwd; // 0x128
		::System::Action* OnGuest; // 0x130
		::System::Action* OnApple; // 0x138
		::System::Action* OnGoogle; // 0x140
		::System::Action* OnTwitter; // 0x148
		::System::Action* OnFacebook; // 0x150
		::System::Action* OnBack; // 0x158
		::System::Boolean isShowPassword; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_SHOW_OFFSET))(model);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_HIDE_OFFSET))();
		}

		::System::Void DisableRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_DISABLEREGISTER_OFFSET))(this);
		}

		::System::Void ClickLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKLOGINBUTTON_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_START_OFFSET))(this);
		}

		::System::Void UpdateBottomContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_UPDATEBOTTOMCONTENT_OFFSET))(this);
		}

		::System::Void UpdateBackBtn(::System::Boolean backBtnEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_UPDATEBACKBTN_OFFSET))(this, backBtnEnable);
		}

		::System::Void OnBackButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONBACKBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_UPDATETEXT_OFFSET))(this);
		}

		::System::Void GuestLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_GUESTLOGIN_OFFSET))(this);
		}

		::System::Void ClickAppleButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKAPPLEBUTTON_OFFSET))(this);
		}

		::System::Void ClickGoogleButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKGOOGLEBUTTON_OFFSET))(this);
		}

		::System::Void ClickFaceBookButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKFACEBOOKBUTTON_OFFSET))(this);
		}

		::System::Void ClickTwitterButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKTWITTERBUTTON_OFFSET))(this);
		}

		::System::Void ClickCloseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickRegisterButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKREGISTERBUTTON_OFFSET))(this);
		}

		::System::Void ClickForgetPasswordButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_CLICKFORGETPASSWORDBUTTON_OFFSET))(this);
		}

		::System::Void AccountInputClearBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ACCOUNTINPUTCLEARBTNCLICK_OFFSET))(this);
		}

		::System::Void PasswordInputClearBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_PASSWORDINPUTCLEARBTNCLICK_OFFSET))(this);
		}

		::System::Void ShowPasswordDetailBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_SHOWPASSWORDDETAILBTNCLICK_OFFSET))(this);
		}

		::System::Void HidePasswordDetailBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_HIDEPASSWORDDETAILBTNCLICK_OFFSET))(this);
		}

		::System::Void OnAccountInputValueChange(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONACCOUNTINPUTVALUECHANGE_OFFSET))(this, value);
		}

		::System::Void OnPasswordInputValueChange(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONPASSWORDINPUTVALUECHANGE_OFFSET))(this, value);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_LOGINBYACCOUNT_ONDESTROY_OFFSET))(this);
		}
	};
}
