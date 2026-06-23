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

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A99A4C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_CLOSEPRESSED_OFFSET UNITYSDK_OFFSET(0x1A99B910)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_COUNTDOWNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A99B7D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x1A99A480)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A99A4A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A99A460)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A99A440)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A99B540)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1A99B670)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A99B090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x1A99B020)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETEMAIL_OFFSET UNITYSDK_OFFSET(0x1A99B200)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A99BA30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x1A99B360)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_COOLDOWNTIME_OFFSET UNITYSDK_OFFSET(0x1A99A490)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A99A4B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A99A470)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A99A450)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1A99B820)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1A99B700)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A99ADB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_39_0_OFFSET UNITYSDK_OFFSET(0x1A99B9E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A99BA40)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentRequiredDialog_TypeDefinitionIndex = 20538;

	class HandheldAgeGateParentalConsentRequiredDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentRequiredDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentRequiredDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateParentalConsentRequiredDialog_TypeDefinitionIndex)->GetStaticField(0x9BE0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* rightTitleTextPath; // 0x0
		// static const ::System::String* parentEmailTextPath; // 0x0
		// static const ::System::String* countdownSecondsTextPath; // 0x0
		// static const ::System::String* tipsTextPath; // 0x0
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* get_OnResendEmail()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONRESENDEMAIL_OFFSET))(this);
		}

		::System::Void set_OnResendEmail(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONRESENDEMAIL_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_ONCLOSE_OFFSET))(this, value);
		}

		::System::Int32 get_cooldownTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_COOLDOWNTIME_OFFSET))(this);
		}

		::System::Void set_cooldownTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_COOLDOWNTIME_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Boolean StartCountdown(::System::Int32 cooldown)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_STARTCOUNTDOWN_OFFSET))(this, cooldown);
		}

		::System::Void SetEmail(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETEMAIL_OFFSET))(this, email);
		}

		static ::System::Void Show(::System::String* email, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::System::Void(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SHOW_OFFSET))(email, type);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_HIDE_OFFSET))();
		}

		::System::Void SendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void ClosePressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_CLOSEPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Collections::IEnumerator* CountdownCoroutine(::System::Int32 time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG_COUNTDOWNCOROUTINE_OFFSET))(this, time);
		}

		::System::Collections::IEnumerator* _ClosePressed_g__OnClosePressedRoutine_39_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG__CLOSEPRESSED_G__ONCLOSEPRESSEDROUTINE_39_0_OFFSET))(this);
		}
	};
}
