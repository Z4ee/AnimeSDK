#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GUESTBINDPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15699320)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_BINDMAIL_OFFSET UNITYSDK_OFFSET(0x1569A960)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_BIND_OFFSET UNITYSDK_OFFSET(0x1569A640)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1569A520)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1569A5C0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x1569A4B0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1569A990)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1569A900)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1569A620)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x1569A350)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1569A540)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1569A0D0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1569A0C0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x1569A630)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE__AWAKE_B__34_0_OFFSET UNITYSDK_OFFSET(0x1569A9F0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1569A9B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindPhone_TypeDefinitionIndex = 9162;

	class GuestBindPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::GuestBindPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GuestBindPhone**)Il2CppClass::FromTypeDefinitionIndex(GuestBindPhone_TypeDefinitionIndex)->GetStaticField(0x298A0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BindDescTextPath; // 0x0
		// static const ::System::String* PhoneInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* PhoneInputTextPath; // 0x0
		// static const ::System::String* CodeInputTextPath; // 0x0
		// static const ::System::String* PhoneInputPlaceholderPath; // 0x0
		// static const ::System::String* CodeInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* RedirectBtnPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* BindTipsPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* RedirectBtnTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Text* bindDescText; // 0x60
		::UnityEngine::UI::InputField* phoneInput; // 0x68
		::UnityEngine::UI::InputField* codeInput; // 0x70
		::UnityEngine::UI::Button* submitButton; // 0x78
		::UnityEngine::UI::Button* redirectButton; // 0x80
		::UnityEngine::UI::Button* requestCodeButton; // 0x88
		::UnityEngine::UI::Text* requestCodeText; // 0x90
		::UnityEngine::UI::Text* submitButtonText; // 0x98
		::UnityEngine::UI::Text* redirectButtonText; // 0xA0
		::System::Action* OnClose; // 0xA8
		::System::Action_1<::System::String*>* OnGetCode; // 0xB0
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xB8
		::System::Action* OnBindMail; // 0xC0
		::System::Boolean isRequestVerifyCode; // 0xC8
		::System::Single countDownTime; // 0xCC
		::System::Boolean retrieveFlag; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_HIDE_OFFSET))();
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_CLOSE_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ValueChangePhoneInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_VALUECHANGEPHONEINPUT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_BIND_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Void BindMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_BINDMAIL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Awake_b__34_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE__AWAKE_B__34_0_OFFSET))(this, a1);
		}
	};
}
