#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x187A3160)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BIND_OFFSET UNITYSDK_OFFSET(0x187A3E90)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_CLOSE_OFFSET UNITYSDK_OFFSET(0x187A3D70)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x187A3E10)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_HIDE_OFFSET UNITYSDK_OFFSET(0x187A3D00)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x187A4090)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x187A4030)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x187A3E70)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_SHOW_OFFSET UNITYSDK_OFFSET(0x187A3C00)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x187A3D90)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x187A3A80)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x187A3E80)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x187A40B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileVerifyMail_TypeDefinitionIndex = 9434;

	class SafeMobileVerifyMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::SafeMobileVerifyMail** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SafeMobileVerifyMail**)Il2CppClass::FromTypeDefinitionIndex(SafeMobileVerifyMail_TypeDefinitionIndex)->GetStaticField(0x3A6D0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* MailTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPlaceholderPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Text* mailText; // 0x60
		::UnityEngine::UI::InputField* codeInput; // 0x68
		::UnityEngine::UI::Button* requestCodeButton; // 0x70
		::UnityEngine::UI::Text* requestCodeText; // 0x78
		::UnityEngine::UI::Button* submitButton; // 0x80
		::System::Action* OnClose; // 0x88
		::System::Action_1<::System::String*>* OnGetCode; // 0x90
		::System::Action_1<::System::String*>* OnBind; // 0x98
		::System::Boolean isRequestVerifyCode; // 0xA0
		::System::Single countDownTime; // 0xA4
		::System::Boolean retrieveFlag; // 0xA8
		::MiHoYo::SDK::AccountModel* account; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_HIDE_OFFSET))();
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_CLOSE_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ValueChangePhoneInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_VALUECHANGEPHONEINPUT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BIND_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_ONDESTROY_OFFSET))(this);
		}
	};
}
