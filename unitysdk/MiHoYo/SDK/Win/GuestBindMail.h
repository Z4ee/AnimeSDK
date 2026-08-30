#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GUESTBINDMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B84E240)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_BACK_OFFSET UNITYSDK_OFFSET(0x1B84EEF0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_BIND_OFFSET UNITYSDK_OFFSET(0x1B84EF30)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B84EF10)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1B84F190)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_HIDE_OFFSET UNITYSDK_OFFSET(0x1B84E1A0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B84F1D0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B84F1B0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_SETMAILINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x1B84E210)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_SHOW_OFFSET UNITYSDK_OFFSET(0x1B84E040)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1B84EEE0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B84F1F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindMail_TypeDefinitionIndex = 9439;

	class GuestBindMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::GuestBindMail** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GuestBindMail**)Il2CppClass::FromTypeDefinitionIndex(GuestBindMail_TypeDefinitionIndex)->GetStaticField(0x254A0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* PasswordInputPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* RegisterButtonPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonPath; // 0x0
		// static const ::System::String* MailInputTextPath; // 0x0
		// static const ::System::String* PasswordInputTextPath; // 0x0
		// static const ::System::String* MailInputPlaceholderPath; // 0x0
		// static const ::System::String* PasswordInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* RegisterButtonTextPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::UI::InputField* mailInput; // 0x68
		::UnityEngine::UI::InputField* passwordInput; // 0x70
		::UnityEngine::UI::Button* submitButton; // 0x78
		::UnityEngine::UI::Button* registerButton; // 0x80
		::UnityEngine::UI::Button* forgetPasswordButton; // 0x88
		::UnityEngine::UI::Text* submitButtonText; // 0x90
		::UnityEngine::UI::Text* registerButtonText; // 0x98
		::UnityEngine::UI::Text* forgetPasswordButtonText; // 0xA0
		::System::Action* OnBack; // 0xA8
		::System::Action* OnClose; // 0xB0
		::System::Action* OnRegister; // 0xB8
		::System::Action* OnForget; // 0xC0
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_HIDE_OFFSET))();
		}

		::System::Void SetMailInputText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_SETMAILINPUTTEXT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_CLOSE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_BIND_OFFSET))(this);
		}

		::System::Void ForgetPassword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_FORGETPASSWORD_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_REGISTER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_ONDESTROY_OFFSET))(this);
		}
	};
}
