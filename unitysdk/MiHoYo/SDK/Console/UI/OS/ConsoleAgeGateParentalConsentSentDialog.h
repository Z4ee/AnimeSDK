#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x15EC08C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_CLOSEPRESSED_OFFSET UNITYSDK_OFFSET(0x15EC24E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_COUNTDOWNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x15EC2390)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x15EC0880)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15EC08A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15EC0860)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x15EC0840)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC2180)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x15EC2290)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15EC1720)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_RESENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x15EC16F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETDATETIMEZONETEXT_OFFSET UNITYSDK_OFFSET(0x15EC1800)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETEMAIL_OFFSET UNITYSDK_OFFSET(0x15EC18A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15EC2590)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x15EC18E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x15EC0890)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15EC08B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15EC0870)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x15EC0850)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x15EC23E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15EC2320)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x15EC1440)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_47_0_OFFSET UNITYSDK_OFFSET(0x15EC2540)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC25B0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentSentDialog_TypeDefinitionIndex = 7656;

	class ConsoleAgeGateParentalConsentSentDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentSentDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentSentDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateParentalConsentSentDialog_TypeDefinitionIndex)->GetStaticField(0x131A0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* subDescTextPath; // 0x0
		// static const ::System::String* dateCountdownTitleTextPath; // 0x0
		// static const ::System::String* dateTextPath; // 0x0
		// static const ::System::String* resendEmailTextPath; // 0x0
		// static const ::System::String* parentEmailTextPath; // 0x0
		// static const ::System::String* countdownSecondsTextPath; // 0x0
		// static const ::System::String* warningTextPath; // 0x0
		// static const ::System::String* closeWindowTextPath; // 0x0
		::UnityEngine::UI::Text* countDownText; // 0xC0
		::UnityEngine::UI::Text* dateText; // 0xC8
		::UnityEngine::UI::Text* parentEmailText; // 0xD0
		::UnityEngine::UI::Text* resendEmailText; // 0xD8
		::System::String* dateTextStr; // 0xE0
		::System::String* emailTextStr; // 0xE8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* _OnResendEmail_k__BackingField; // 0xF0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* _OnClose_k__BackingField; // 0xF8
		::System::Int32 _cooldownTime_k__BackingField; // 0x100
		::System::Boolean isCountingDown; // 0x104
		::System::Boolean _Interactable_k__BackingField; // 0x105
		::MiHoYo::SDK::AgeGateFlowType Type; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* get_OnResendEmail()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_ONRESENDEMAIL_OFFSET))(this);
		}

		::System::Void set_OnResendEmail(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_ONRESENDEMAIL_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_ONCLOSE_OFFSET))(this, value);
		}

		::System::Int32 get_cooldownTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_COOLDOWNTIME_OFFSET))(this);
		}

		::System::Void set_cooldownTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_COOLDOWNTIME_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Boolean StartCountdown(::System::Int32 cooldown)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET))(this, cooldown);
		}

		::System::Void SetDateTimeZoneText(::System::String* date)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETDATETIMEZONETEXT_OFFSET))(this, date);
		}

		::System::Void SetEmail(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETEMAIL_OFFSET))(this, email);
		}

		static ::System::Void Show(::System::String* email, ::System::String* date, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SHOW_OFFSET))(email, date, type);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void ResendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_RESENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void ClosePressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_CLOSEPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Collections::IEnumerator* CountdownCoroutine(::System::Int32 time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_COUNTDOWNCOROUTINE_OFFSET))(this, time);
		}

		::System::Collections::IEnumerator* _ClosePressed_g__OnClosePressedRoutine_47_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_47_0_OFFSET))(this);
		}
	};
}
