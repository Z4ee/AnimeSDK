#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/GrantType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GRANTBINDPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15D42550)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_BACK_OFFSET UNITYSDK_OFFSET(0x15D435A0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15D438F0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x15D43530)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15D43960)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_QUESTION_OFFSET UNITYSDK_OFFSET(0x15D435C0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x15D436A0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15D43690)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x15D43430)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15D43870)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_START_OFFSET UNITYSDK_OFFSET(0x15D432E0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_SUBMIT_OFFSET UNITYSDK_OFFSET(0x15D436D0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x15D43160)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x15D42FC0)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D43980)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantBindPhone_TypeDefinitionIndex = 9452;

	class GrantBindPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::GrantBindPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GrantBindPhone**)Il2CppClass::FromTypeDefinitionIndex(GrantBindPhone_TypeDefinitionIndex)->GetStaticField(0x30800);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* QuestionButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* BindPhoneTextPath; // 0x0
		// static const ::System::String* VerifyPhoneTipsTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPlaceholderPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Text* phoneText; // 0x60
		::UnityEngine::UI::Text* verifyPhoneTipsText; // 0x68
		::UnityEngine::UI::InputField* verifycodeInput; // 0x70
		::UnityEngine::UI::Button* requestCodeButton; // 0x78
		::UnityEngine::UI::Text* requestCodeText; // 0x80
		::UnityEngine::UI::Button* submitButton; // 0x88
		::UnityEngine::UI::Button* questionButton; // 0x90
		::System::Action* OnBack; // 0x98
		::System::Action_1<::MiHoYo::SDK::GrantType>* OnGetCode; // 0xA0
		::System::Action_1<::System::String*>* OnSubmit; // 0xA8
		::System::Boolean isRequestVerifyCode; // 0xB0
		::System::Single countDownTime; // 0xB4
		::System::Boolean retrieveFlag; // 0xB8
		::MiHoYo::SDK::AccountModel* account; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_START_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_HIDE_OFFSET))();
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_BACK_OFFSET))(this);
		}

		::System::Void Question()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_QUESTION_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_SUBMIT_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE_ONDESTROY_OFFSET))(this);
		}
	};
}
