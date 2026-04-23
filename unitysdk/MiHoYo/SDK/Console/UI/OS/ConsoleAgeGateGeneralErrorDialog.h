#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x174FDC40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x174FDC20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x174FDBE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_GET_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x174FDC00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x174FE420)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x174FE390)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x174FE4C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_ONCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x174FE570)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x174FE060)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SETDIALOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x174FE0A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x174FE590)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x174FDC30)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x174FDBF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SET_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x174FDC10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x174FE270)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x174FE5A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_31_0_OFFSET UNITYSDK_OFFSET(0x174FE520)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateGeneralErrorDialog_TypeDefinitionIndex = 7780;

	class ConsoleAgeGateGeneralErrorDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateGeneralErrorDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateGeneralErrorDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateGeneralErrorDialog_TypeDefinitionIndex)->GetStaticField(0x17210);
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
		::System::String* cancelBtnText; // 0xF0
		::System::String* confirmBtnText; // 0xF8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>* _OnClose_k__BackingField; // 0x100
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>* _OnConfirm_k__BackingField; // 0x108
		::System::Boolean _Interactable_k__BackingField; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SET_ONCLOSE_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>* get_OnConfirm()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_GET_ONCONFIRM_OFFSET))(this);
		}

		::System::Void set_OnConfirm(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SET_ONCONFIRM_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* title, ::System::String* desc, ::System::String* subDesc, ::System::String* cancelText, ::System::String* confirmText)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SHOW_OFFSET))(title, desc, subDesc, cancelText, confirmText);
		}

		::System::Void SetDialogMessage(::System::String* title, ::System::String* desc, ::System::String* subDesc, ::System::String* cancelText, ::System::String* confirmText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SETDIALOGMESSAGE_OFFSET))(this, title, desc, subDesc, cancelText, confirmText);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_HIDE_OFFSET))();
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_ONCLOSEDIALOG_OFFSET))(this);
		}

		::System::Void OnConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_ONCONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Collections::IEnumerator* _OnCloseDialog_g__OnClosePressedRoutine_31_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEGENERALERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_31_0_OFFSET))(this);
		}
	};
}
