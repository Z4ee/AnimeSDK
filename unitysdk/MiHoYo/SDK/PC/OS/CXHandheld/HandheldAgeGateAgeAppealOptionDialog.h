#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CD005A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_CORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD01660)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CD00580)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CD00520)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD00560)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONSENDEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD00540)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1CD01360)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CD01490)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1CD01790)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CD01300)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD01600)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SETDAYS_OFFSET UNITYSDK_OFFSET(0x1CD01090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CD01780)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1CD00590)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CD00530)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD00570)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONSENDEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CD00550)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CD01520)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG__CORRECTAGEBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_36_0_OFFSET UNITYSDK_OFFSET(0x1CD01730)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD018B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG__ONCLOSE_G__ONCLOSEPRESSEDROUTINE_38_0_OFFSET UNITYSDK_OFFSET(0x1CD01860)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateAgeAppealOptionDialog_TypeDefinitionIndex = 20872;

	class HandheldAgeGateAgeAppealOptionDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateAgeAppealOptionDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateAgeAppealOptionDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateAgeAppealOptionDialog_TypeDefinitionIndex)->GetStaticField(0xA530);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* rightTitleTextPath; // 0x0
		// static const ::System::String* sendEmailButtonTextPath; // 0x0
		// static const ::System::String* ageAppealButtonTextPath; // 0x0
		// static const ::System::String* rightDescTextPath; // 0x0
		// static const ::System::String* sendEmailButtonPath; // 0x0
		// static const ::System::String* ageAppealButtonPath; // 0x0
		::UnityEngine::UI::Button* SendEmailButton; // 0xC0
		::UnityEngine::UI::Button* AgeAppealButton; // 0xC8
		::UnityEngine::UI::Text* titleText; // 0xD0
		::System::Int32 Days; // 0xD8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* _OnClosed_k__BackingField; // 0xE0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* _OnSendEmailButtonPressed_k__BackingField; // 0xE8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* _OnCorrectAgeButtonPressed_k__BackingField; // 0xF0
		::System::Boolean _Interactable_k__BackingField; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCLOSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnSendEmailButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONSENDEMAILBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnSendEmailButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONSENDEMAILBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnCorrectAgeButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCORRECTAGEBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnCorrectAgeButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCORRECTAGEBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetDays(::System::Int32 days)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SETDAYS_OFFSET))(this, days);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show(::System::Int32 days)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SHOW_OFFSET))(days);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_HIDE_OFFSET))();
		}

		::System::Void SendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void CorrectAgeButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_CORRECTAGEBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG_ONCLOSE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _CorrectAgeButtonPressed_g__OnClosePressedRoutine_36_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG__CORRECTAGEBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_36_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _OnClose_g__OnClosePressedRoutine_38_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG__ONCLOSE_G__ONCLOSEPRESSEDROUTINE_38_0_OFFSET))(this);
		}
	};
}
