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

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_AWAKE_OFFSET UNITYSDK_OFFSET(0x184D85C0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKAPPLEBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB170)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB530)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKFACEBOOKBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB350)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKFORGETPASSWORDBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB5E0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKGOOGLEBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB260)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x184DAA50)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKREGISTERBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB550)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKTWITTERBUTTON_OFFSET UNITYSDK_OFFSET(0x184DB440)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_GUESTLOGIN_OFFSET UNITYSDK_OFFSET(0x184DB0F0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_HIDE_OFFSET UNITYSDK_OFFSET(0x184DA9E0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_ONBACKBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x184DB0C0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x184DB670)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_SHOW_OFFSET UNITYSDK_OFFSET(0x184DA810)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_START_OFFSET UNITYSDK_OFFSET(0x184DAF20)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_UPDATEBACKBTN_OFFSET UNITYSDK_OFFSET(0x184DAF50)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_UPDATEBOTTOMCONTENT_OFFSET UNITYSDK_OFFSET(0x184D99B0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x184DA670)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA__CTOR_OFFSET UNITYSDK_OFFSET(0x184DB690)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountOversea_TypeDefinitionIndex = 9184;

	class LoginByAccountOversea : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByAccountOversea** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginByAccountOversea**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountOversea_TypeDefinitionIndex)->GetStaticField(0x28F50);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* AccountInputPath; // 0x0
		// static const ::System::String* PasswordInputPath; // 0x0
		// static const ::System::String* AccountPlaceholderPath; // 0x0
		// static const ::System::String* PasswordPlaceholderPath; // 0x0
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
		::UnityEngine::UI::Button* loginButton; // 0x80
		::UnityEngine::UI::Button* registerButton; // 0x88
		::UnityEngine::UI::Button* forgetPasswordButton; // 0x90
		::UnityEngine::Transform* bottomTransform; // 0x98
		::UnityEngine::Transform* guestButtonTransform; // 0xA0
		::UnityEngine::Transform* appleButtonTransform; // 0xA8
		::UnityEngine::Transform* googleButtonTransform; // 0xB0
		::UnityEngine::Transform* facebookButtonTransform; // 0xB8
		::UnityEngine::Transform* twitterButtonTransform; // 0xC0
		::UnityEngine::UI::Text* accountPlaceholder; // 0xC8
		::UnityEngine::UI::Text* passwordPlaceholder; // 0xD0
		::UnityEngine::UI::Text* registerText; // 0xD8
		::UnityEngine::UI::Text* forgetPwdText; // 0xE0
		::UnityEngine::UI::Text* loginText; // 0xE8
		::System::Action* OnClose; // 0xF0
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0xF8
		::System::Action* OnRegister; // 0x100
		::System::Action* OnForgetPwd; // 0x108
		::System::Action* OnGuest; // 0x110
		::System::Action* OnApple; // 0x118
		::System::Action* OnGoogle; // 0x120
		::System::Action* OnTwitter; // 0x128
		::System::Action* OnFacebook; // 0x130
		::System::Action* OnBack; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_HIDE_OFFSET))();
		}

		::System::Void ClickLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKLOGINBUTTON_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_START_OFFSET))(this);
		}

		::System::Void UpdateBottomContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_UPDATEBOTTOMCONTENT_OFFSET))(this);
		}

		::System::Void UpdateBackBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_UPDATEBACKBTN_OFFSET))(this, a1);
		}

		::System::Void OnBackButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_ONBACKBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_UPDATETEXT_OFFSET))(this);
		}

		::System::Void GuestLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_GUESTLOGIN_OFFSET))(this);
		}

		::System::Void ClickAppleButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKAPPLEBUTTON_OFFSET))(this);
		}

		::System::Void ClickGoogleButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKGOOGLEBUTTON_OFFSET))(this);
		}

		::System::Void ClickFaceBookButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKFACEBOOKBUTTON_OFFSET))(this);
		}

		::System::Void ClickTwitterButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKTWITTERBUTTON_OFFSET))(this);
		}

		::System::Void ClickCloseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickRegisterButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKREGISTERBUTTON_OFFSET))(this);
		}

		::System::Void ClickForgetPasswordButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_CLICKFORGETPASSWORDBUTTON_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_ONDESTROY_OFFSET))(this);
		}
	};
}
