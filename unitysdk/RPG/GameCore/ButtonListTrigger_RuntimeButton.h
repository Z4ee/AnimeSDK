#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONICON_OFFSET UNITYSDK_OFFSET(0xB5DA4C0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONNAME_OFFSET UNITYSDK_OFFSET(0xB5DA500)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xB5DA4E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0xB5DA540)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_HOSTRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB5DA520)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_SHOWPRIORITY_OFFSET UNITYSDK_OFFSET(0xB5DA560)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONICON_OFFSET UNITYSDK_OFFSET(0xB5DA4D0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONNAME_OFFSET UNITYSDK_OFFSET(0xB5DA510)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xB5DA4F0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xB5DA550)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_HOSTRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB5DA530)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_SHOWPRIORITY_OFFSET UNITYSDK_OFFSET(0xB5DA570)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D86C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonListTrigger_RuntimeButton_TypeDefinitionIndex = 53004;

	class ButtonListTrigger_RuntimeButton : public ::System::Object
	{
	public:
		::System::String* _ButtonName_k__BackingField; // 0x10
		::System::String* _ButtonIcon_k__BackingField; // 0x18
		::System::Boolean _Enable_k__BackingField; // 0x20
		::RPG::GameCore::ButtonShowPriority _ShowPriority_k__BackingField; // 0x24
		::RPG::Client::TextID _ButtonText_k__BackingField; // 0x28
		::System::UInt32 _HostRuntimeID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON__CTOR_OFFSET))(this);
		}

		::System::String* get_ButtonIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONICON_OFFSET))(this);
		}

		::System::Void set_ButtonIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONICON_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ButtonText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONTEXT_OFFSET))(this);
		}

		::System::Void set_ButtonText(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONTEXT_OFFSET))(this, value);
		}

		::System::String* get_ButtonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_BUTTONNAME_OFFSET))(this);
		}

		::System::Void set_ButtonName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_BUTTONNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_HostRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_HOSTRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_HostRuntimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_HOSTRUNTIMEID_OFFSET))(this, value);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_ENABLE_OFFSET))(this, value);
		}

		::RPG::GameCore::ButtonShowPriority get_ShowPriority()
		{
			return ((::RPG::GameCore::ButtonShowPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_GET_SHOWPRIORITY_OFFSET))(this);
		}

		::System::Void set_ShowPriority(::RPG::GameCore::ButtonShowPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ButtonShowPriority))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_RUNTIMEBUTTON_SET_SHOWPRIORITY_OFFSET))(this, value);
		}
	};
}
