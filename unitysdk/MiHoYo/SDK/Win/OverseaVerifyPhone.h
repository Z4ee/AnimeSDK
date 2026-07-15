#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x171605A0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BACK_OFFSET UNITYSDK_OFFSET(0x17161AA0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_CLOSE_OFFSET UNITYSDK_OFFSET(0x17161A80)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17161B40)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x17161A10)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17161DA0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x17161D60)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17161BA0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x17161910)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17161AC0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_START_OFFSET UNITYSDK_OFFSET(0x17161730)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_SUBMIT_OFFSET UNITYSDK_OFFSET(0x17161BC0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x171615A0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_VALUECHANGEPHONEINPUT_OFFSET UNITYSDK_OFFSET(0x17161BB0)
#define MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17161DC0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaVerifyPhone_TypeDefinitionIndex = 9176;

	class OverseaVerifyPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaVerifyPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaVerifyPhone**)Il2CppClass::FromTypeDefinitionIndex(OverseaVerifyPhone_TypeDefinitionIndex)->GetStaticField(0x29770);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* ContentTitlePath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputTipsPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* NextButtonPath; // 0x0
		// static const ::System::String* NextButtonTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::GameObject* closeButtonObject; // 0x60
		::UnityEngine::UI::Button* closeButton; // 0x68
		::UnityEngine::UI::Text* contentTitle; // 0x70
		::UnityEngine::UI::Text* contentText; // 0x78
		::UnityEngine::UI::InputField* verifycodeInput; // 0x80
		::UnityEngine::UI::Button* requestCodeButton; // 0x88
		::UnityEngine::UI::Text* requestCodeText; // 0x90
		::UnityEngine::UI::Button* nextButton; // 0x98
		::UnityEngine::UI::Text* nextButtonText; // 0xA0
		::System::Action* OnClose; // 0xA8
		::System::Action* OnBack; // 0xB0
		::System::Action* OnGetCode; // 0xB8
		::System::Action_1<::System::String*>* OnVerify; // 0xC0
		::System::Boolean isRequestVerifyCode; // 0xC8
		::System::Single countDownTime; // 0xCC
		::System::Boolean retrieveFlag; // 0xD0
		::MiHoYo::SDK::AccountModel* account; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_START_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_HIDE_OFFSET))();
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_CLOSE_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_BACK_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ValueChangePhoneInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_VALUECHANGEPHONEINPUT_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_SUBMIT_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAVERIFYPHONE_ONDESTROY_OFFSET))(this);
		}
	};
}
