#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C91A890)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_BIND_OFFSET UNITYSDK_OFFSET(0x1C91B7B0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C91B620)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1C91B730)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_HIDE_OFFSET UNITYSDK_OFFSET(0x1C91B5B0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C91BAF0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C91BA70)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1C91B790)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_SHOW_OFFSET UNITYSDK_OFFSET(0x1C91B4D0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1C91B640)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1C91B2A0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x1C91B7A0)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__AWAKE_B__25_0_OFFSET UNITYSDK_OFFSET(0x1C91BB20)
#define MIHOYO_SDK_WIN_SAFEMOBILEBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91BB10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileBind_TypeDefinitionIndex = 21614;

	class SafeMobileBind : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::SafeMobileBind** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SafeMobileBind**)Il2CppClass::FromTypeDefinitionIndex(SafeMobileBind_TypeDefinitionIndex)->GetStaticField(0xB4E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* PhoneInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* PhoneInputTextPath; // 0x0
		// static const ::System::String* CodeInputTextPath; // 0x0
		// static const ::System::String* PhoneInputPlaceholderPath; // 0x0
		// static const ::System::String* CodeInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::InputField* phoneInput; // 0x60
		::UnityEngine::UI::InputField* codeInput; // 0x68
		::UnityEngine::UI::Button* submitButton; // 0x70
		::UnityEngine::UI::Button* requestCodeButton; // 0x78
		::UnityEngine::UI::Text* requestCodeText; // 0x80
		::System::Action* OnClose; // 0x88
		::System::Action_1<::System::String*>* OnGetCode; // 0x90
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0x98
		::System::Boolean isRequestVerifyCode; // 0xA0
		::System::Single countDownTime; // 0xA4
		::System::Boolean retrieveFlag; // 0xA8
		::MiHoYo::SDK::AccountModel* account; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_SHOW_OFFSET))(model);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_HIDE_OFFSET))();
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_CLOSE_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ValueChangePhoneInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_VALUECHANGEPHONEINPUT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_BIND_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_COUNTDOWN_OFFSET))(this, time);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Awake_b__25_0(::System::String* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEBIND__AWAKE_B__25_0_OFFSET))(this, _p0_);
		}
	};
}
