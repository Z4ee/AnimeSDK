#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_BINDBYMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BCA28E0)
#define MIHOYO_SDK_WIN_BINDBYMAIL_BACK_OFFSET UNITYSDK_OFFSET(0x1BCA3C00)
#define MIHOYO_SDK_WIN_BINDBYMAIL_BIND_OFFSET UNITYSDK_OFFSET(0x1BCA3DB0)
#define MIHOYO_SDK_WIN_BINDBYMAIL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BCA3C20)
#define MIHOYO_SDK_WIN_BINDBYMAIL_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCA3D40)
#define MIHOYO_SDK_WIN_BINDBYMAIL_HIDE_OFFSET UNITYSDK_OFFSET(0x1BCA2870)
#define MIHOYO_SDK_WIN_BINDBYMAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BCA40B0)
#define MIHOYO_SDK_WIN_BINDBYMAIL_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BCA4030)
#define MIHOYO_SDK_WIN_BINDBYMAIL_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCA3C40)
#define MIHOYO_SDK_WIN_BINDBYMAIL_SHOW_OFFSET UNITYSDK_OFFSET(0x1BCA2740)
#define MIHOYO_SDK_WIN_BINDBYMAIL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCA3C50)
#define MIHOYO_SDK_WIN_BINDBYMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1BCA39D0)
#define MIHOYO_SDK_WIN_BINDBYMAIL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BCA36E0)
#define MIHOYO_SDK_WIN_BINDBYMAIL_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x1BCA3DA0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__AWAKE_B__35_0_OFFSET UNITYSDK_OFFSET(0x1BCA40E0)
#define MIHOYO_SDK_WIN_BINDBYMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA40D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindByMail_TypeDefinitionIndex = 21253;

	class BindByMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::BindByMail** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BindByMail**)Il2CppClass::FromTypeDefinitionIndex(BindByMail_TypeDefinitionIndex)->GetStaticField(0x9E50);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BindDescTextPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* MailInputTextPath; // 0x0
		// static const ::System::String* CodeInputTextPath; // 0x0
		// static const ::System::String* MailInputPlaceholderPath; // 0x0
		// static const ::System::String* CodeInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* BindTipsPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Button* closeButton; // 0x60
		::UnityEngine::GameObject* closeButtonObject; // 0x68
		::UnityEngine::UI::Text* bindDescText; // 0x70
		::UnityEngine::UI::InputField* mailInput; // 0x78
		::UnityEngine::UI::InputField* codeInput; // 0x80
		::UnityEngine::UI::Button* submitButton; // 0x88
		::UnityEngine::UI::Button* requestCodeButton; // 0x90
		::UnityEngine::UI::Text* requestCodeText; // 0x98
		::UnityEngine::UI::Text* submitButtonText; // 0xA0
		::System::Action* OnBack; // 0xA8
		::System::Action* OnClose; // 0xB0
		::System::Action_1<::System::String*>* OnGetCode; // 0xB8
		::System::Action_2<::System::String*, ::System::String*>* OnSubmit; // 0xC0
		::System::Boolean isRequestVerifyCode; // 0xC8
		::System::Single countDownTime; // 0xCC
		::System::Boolean retrieveFlag; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_CLOSE_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ValueChangePhoneInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_VALUECHANGEPHONEINPUT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_BIND_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_COUNTDOWN_OFFSET))(this, time);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Awake_b__35_0(::System::String* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL__AWAKE_B__35_0_OFFSET))(this, _p0_);
		}
	};
}
