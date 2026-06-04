#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x182F9E80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182F9E60)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182F9E40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x182FA5E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x182FA550)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x182FA680)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x182FA280)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETDIALOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x182FA360)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182FA730)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182F9E70)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x182F9E50)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x182FA430)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x182FA740)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_25_0_OFFSET UNITYSDK_OFFSET(0x182FA6E0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateErrorDialog_TypeDefinitionIndex = 8690;

	class ConsoleAgeGateErrorDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateErrorDialog_TypeDefinitionIndex)->GetStaticField(0x12880);
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

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SHOW_OFFSET))(a1, a2, a3);
		}

		::System::Void SetDialogMessage(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETDIALOGMESSAGE_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _OnCloseDialog_g__OnClosePressedRoutine_25_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_25_0_OFFSET))(this);
		}
	};
}
