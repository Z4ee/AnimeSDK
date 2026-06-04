#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x182F8C40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_CORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x182F9A50)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182F8C20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x182F8BC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x182F8C00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONSENDEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x182F8BE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x182F9780)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x182F9890)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182F9B10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x182F9720)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x182F9A20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETDAYS_OFFSET UNITYSDK_OFFSET(0x182F95E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182F9B00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182F8C30)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x182F8BD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCORRECTAGEBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x182F8C10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONSENDEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x182F8BF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x182F9920)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__CORRECTAGEBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_36_0_OFFSET UNITYSDK_OFFSET(0x182F9AB0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x182F9BC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG__ONCLOSE_G__ONCLOSEPRESSEDROUTINE_38_0_OFFSET UNITYSDK_OFFSET(0x182F9B70)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateAgeAppealOptionDialog_TypeDefinitionIndex = 8686;

	class ConsoleAgeGateAgeAppealOptionDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateAgeAppealOptionDialog_TypeDefinitionIndex)->GetStaticField(0x127E0);
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

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCLOSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnSendEmailButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONSENDEMAILBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnSendEmailButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONSENDEMAILBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* get_OnCorrectAgeButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_ONCORRECTAGEBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnCorrectAgeButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_ONCORRECTAGEBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetDays(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETDAYS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SHOW_OFFSET))(a1);
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

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
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
