#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1876B670)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_BACK_OFFSET UNITYSDK_OFFSET(0x1876C4F0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_BIND_OFFSET UNITYSDK_OFFSET(0x1876C560)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1876C510)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1876C7C0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_HIDE_OFFSET UNITYSDK_OFFSET(0x1876B600)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1876C7E0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_SETMAILINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x1876C530)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_SHOW_OFFSET UNITYSDK_OFFSET(0x1876B4A0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1876C0D0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1876C800)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGuestBindMail_TypeDefinitionIndex = 9437;

	class OverseaGuestBindMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaGuestBindMail** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaGuestBindMail**)Il2CppClass::FromTypeDefinitionIndex(OverseaGuestBindMail_TypeDefinitionIndex)->GetStaticField(0x26E50);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* PasswordInputPath; // 0x0
		// static const ::System::String* MailInputTextPath; // 0x0
		// static const ::System::String* PasswordInputTextPath; // 0x0
		// static const ::System::String* MailInputPlaceholderPath; // 0x0
		// static const ::System::String* PasswordInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::UI::InputField* mailInput; // 0x68
		::UnityEngine::UI::InputField* passwordInput; // 0x70
		::UnityEngine::UI::Button* submitButton; // 0x78
		::UnityEngine::UI::Button* forgetPasswordButton; // 0x80
		::UnityEngine::UI::Text* submitButtonText; // 0x88
		::UnityEngine::UI::Text* forgetPasswordButtonText; // 0x90
		::System::Action* OnBack; // 0x98
		::System::Action* OnClose; // 0xA0
		::System::Action* OnForget; // 0xA8
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_CLOSE_OFFSET))(this);
		}

		::System::Void SetMailInputText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_SETMAILINPUTTEXT_OFFSET))(this, a1);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_BIND_OFFSET))(this);
		}

		::System::Void ForgetPassword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_FORGETPASSWORD_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_ONDESTROY_OFFSET))(this);
		}
	};
}
