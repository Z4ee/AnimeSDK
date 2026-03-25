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

#define MIHOYO_SDK_WIN_BINDMIHOYO_AWAKE_OFFSET UNITYSDK_OFFSET(0x16062F60)
#define MIHOYO_SDK_WIN_BINDMIHOYO_BACK_OFFSET UNITYSDK_OFFSET(0x16063DF0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_BIND_OFFSET UNITYSDK_OFFSET(0x16063E90)
#define MIHOYO_SDK_WIN_BINDMIHOYO_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16063E20)
#define MIHOYO_SDK_WIN_BINDMIHOYO_HIDE_OFFSET UNITYSDK_OFFSET(0x16056770)
#define MIHOYO_SDK_WIN_BINDMIHOYO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16064090)
#define MIHOYO_SDK_WIN_BINDMIHOYO_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x16064000)
#define MIHOYO_SDK_WIN_BINDMIHOYO_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16063E10)
#define MIHOYO_SDK_WIN_BINDMIHOYO_SHOW_OFFSET UNITYSDK_OFFSET(0x16056AB0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x16057060)
#define MIHOYO_SDK_WIN_BINDMIHOYO_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x16063BD0)
#define MIHOYO_SDK_WIN_BINDMIHOYO_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x16063960)
#define MIHOYO_SDK_WIN_BINDMIHOYO_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x16063E80)
#define MIHOYO_SDK_WIN_BINDMIHOYO__AWAKE_B__31_0_OFFSET UNITYSDK_OFFSET(0x16064110)
#define MIHOYO_SDK_WIN_BINDMIHOYO__CTOR_OFFSET UNITYSDK_OFFSET(0x160640D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindMiHoYo_TypeDefinitionIndex = 8104;

	class BindMiHoYo : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::BindMiHoYo** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BindMiHoYo**)Il2CppClass::FromTypeDefinitionIndex(BindMiHoYo_TypeDefinitionIndex)->GetStaticField(0x13510);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* BindDescTextPath; // 0x0
		// static const ::System::String* PhoneInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* PhoneInputTextPath; // 0x0
		// static const ::System::String* CodeInputTextPath; // 0x0
		// static const ::System::String* PhoneInputPlaceholderPath; // 0x0
		// static const ::System::String* CodeInputPlaceholderPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Text* bindDescText; // 0x60
		::UnityEngine::UI::InputField* phoneInput; // 0x68
		::UnityEngine::UI::InputField* codeInput; // 0x70
		::UnityEngine::UI::Button* requestCodeButton; // 0x78
		::UnityEngine::UI::Text* requestCodeText; // 0x80
		::UnityEngine::UI::Button* bindButton; // 0x88
		::UnityEngine::UI::Text* bindButtonText; // 0x90
		::System::Action* OnBack; // 0x98
		::System::Action_1<::System::String*>* OnGetCode; // 0xA0
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xA8
		::System::Boolean isRequestVerifyCode; // 0xB0
		::System::Single countDownTime; // 0xB4
		::System::Boolean retrieveFlag; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_BACK_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ValueChangePhoneInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_VALUECHANGEPHONEINPUT_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_BIND_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_COUNTDOWN_OFFSET))(this, time);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Awake_b__31_0(::System::String* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO__AWAKE_B__31_0_OFFSET))(this, _p0_);
		}
	};
}
