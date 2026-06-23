#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BC922F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BC922D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BC922B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BC92D40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BC92CB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1BC92DE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC927A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SETDIALOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BC927D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BC92F00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BC922E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1BC922C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BC92BB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC92F10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_25_0_OFFSET UNITYSDK_OFFSET(0x1BC92EB0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateErrorDialog_TypeDefinitionIndex = 20529;

	class HandheldAgeGateErrorDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateErrorDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateErrorDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateErrorDialog_TypeDefinitionIndex)->GetStaticField(0xA4D0);
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SET_ONCLOSE_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* title, ::System::String* desc, ::System::String* subDesc)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SHOW_OFFSET))(title, desc, subDesc);
		}

		::System::Void SetDialogMessage(::System::String* title, ::System::String* desc, ::System::String* subDesc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SETDIALOGMESSAGE_OFFSET))(this, title, desc, subDesc);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_HIDE_OFFSET))();
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_ONCLOSEDIALOG_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		::System::Collections::IEnumerator* _OnCloseDialog_g__OnClosePressedRoutine_25_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG__ONCLOSEDIALOG_G__ONCLOSEPRESSEDROUTINE_25_0_OFFSET))(this);
		}
	};
}
