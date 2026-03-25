#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x15EB9000)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_CORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x15EB9DF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15EB8FE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x15EB8F80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x15EB8FC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONSENDEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x15EB8FA0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x15EB9B30)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x15EB9C40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15EB9EB0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15EB9AD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x15EB9DC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETDAYS_OFFSET UNITYSDK_OFFSET(0x15EB9980)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15EB9EA0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15EB8FF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x15EB8F90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x15EB8FD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONSENDEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x15EB8FB0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x15EB9CD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__CORRECTAGEBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_36_0_OFFSET UNITYSDK_OFFSET(0x15EB9E50)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB9F60)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__ONCLOSE_G__ONCLOSEPRESSEDROUTINE_38_0_OFFSET UNITYSDK_OFFSET(0x15EB9F10)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateAgeAppealOptionDialog_TypeDefinitionIndex = 7639;

	class ConsoleAgeGateAgeAppealOptionDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateAgeAppealOptionDialog_TypeDefinitionIndex)->GetStaticField(0x13050);
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCLOSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnSendEmailButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONSENDEMAILBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnSendEmailButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONSENDEMAILBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnCorrectAgeButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCORRECTAGEBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnCorrectAgeButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCORRECTAGEBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetDays(::System::Int32 days)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETDAYS_OFFSET))(this, days);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show(::System::Int32 days)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SHOW_OFFSET))(days);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDE_OFFSET))();
		}

		::System::Void SendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void CorrectAgeButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_CORRECTAGEBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONCLOSE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _CorrectAgeButtonPressed_g__OnClosePressedRoutine_36_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__CORRECTAGEBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_36_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _OnClose_g__OnClosePressedRoutine_38_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__ONCLOSE_G__ONCLOSEPRESSEDROUTINE_38_0_OFFSET))(this);
		}
	};
}
