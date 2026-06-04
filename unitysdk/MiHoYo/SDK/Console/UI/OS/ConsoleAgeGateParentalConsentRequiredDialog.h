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

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x182FF8E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_CLOSEPRESSED_OFFSET UNITYSDK_OFFSET(0x18300C10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_COUNTDOWNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18300AB0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x182FF8A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182FF8C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182FF880)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x182FF860)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x183008A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x183009B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18300550)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x18300520)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETEMAIL_OFFSET UNITYSDK_OFFSET(0x183005A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18300CC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x183005E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x182FF8B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182FF8D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182FF890)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x182FF870)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x18300B00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18300A40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x183001E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_40_0_OFFSET UNITYSDK_OFFSET(0x18300C70)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18300CE0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentRequiredDialog_TypeDefinitionIndex = 8699;

	class ConsoleAgeGateParentalConsentRequiredDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateParentalConsentRequiredDialog_TypeDefinitionIndex)->GetStaticField(0x12BA0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* rightTitleTextPath; // 0x0
		// static const ::System::String* parentEmailTextPath; // 0x0
		// static const ::System::String* countdownSecondsTextPath; // 0x0
		// static const ::System::String* tipsTextPath; // 0x0
		// static const ::System::String* warningTextPath; // 0x0
		::UnityEngine::UI::Text* countDownText; // 0xC0
		::UnityEngine::UI::Text* parentEmailText; // 0xC8
		::System::String* emailTextStr; // 0xD0
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* _OnResendEmail_k__BackingField; // 0xD8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* _OnClose_k__BackingField; // 0xE0
		::System::Int32 _cooldownTime_k__BackingField; // 0xE8
		::System::Boolean isCountingDown; // 0xEC
		::System::Boolean _Interactable_k__BackingField; // 0xED
		::MiHoYo::SDK::AgeGateFlowType Type; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* get_OnResendEmail()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONRESENDEMAIL_OFFSET))(this);
		}

		::System::Void set_OnResendEmail(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONRESENDEMAIL_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Int32 get_cooldownTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_COOLDOWNTIME_OFFSET))(this);
		}

		::System::Void set_cooldownTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_COOLDOWNTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Boolean StartCountdown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void SetEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETEMAIL_OFFSET))(this, a1);
		}

		static ::System::Void Show(::System::String* a1, ::MiHoYo::SDK::AgeGateFlowType a2)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SHOW_OFFSET))(a1, a2);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDE_OFFSET))();
		}

		::System::Void SendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void ClosePressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_CLOSEPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* CountdownCoroutine(::System::Int32 a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_COUNTDOWNCOROUTINE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _ClosePressed_g__OnClosePressedRoutine_40_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_40_0_OFFSET))(this);
		}
	};
}
