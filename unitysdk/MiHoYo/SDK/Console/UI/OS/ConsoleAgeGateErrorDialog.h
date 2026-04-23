#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x174FD110)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x174FD0F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x174FD0D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x174FD860)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x174FD7D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x174FD900)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x174FD510)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETDIALOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x174FD5F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x174FD9B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x174FD100)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x174FD0E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x174FD6C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x174FD9C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_25_0_OFFSET UNITYSDK_OFFSET(0x174FD960)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateErrorDialog_TypeDefinitionIndex = 7787;

	class ConsoleAgeGateErrorDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateErrorDialog_TypeDefinitionIndex)->GetStaticField(0x171A0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* subDescTextPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0xC0
		::UnityEngine::UI::Text* descText; // 0xC8
		::UnityEngine::UI::Text* subDescText; // 0xD0
		::System::String* titleTextStr; // 0xD8
		::System::String* descTextStr; // 0xE0
		::System::String* subDescTextStr; // 0xE8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>* _OnClose_k__BackingField; // 0xF0
		::System::Boolean _Interactable_k__BackingField; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_ONCLOSE_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* title, ::System::String* desc, ::System::String* subDesc)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SHOW_OFFSET))(title, desc, subDesc);
		}

		::System::Void SetDialogMessage(::System::String* title, ::System::String* desc, ::System::String* subDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETDIALOGMESSAGE_OFFSET))(this, title, desc, subDesc);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_HIDE_OFFSET))();
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONCLOSEDIALOG_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Collections::IEnumerator* _OnCloseDialog_g__OnClosePressedRoutine_25_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_25_0_OFFSET))(this);
		}
	};
}
