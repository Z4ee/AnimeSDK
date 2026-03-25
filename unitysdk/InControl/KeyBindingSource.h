#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/InControl/KeyCombo.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_KEYBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B7EC50)
#define INCONTROL_KEYBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B7EBB0)
#define INCONTROL_KEYBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B7ECD0)
#define INCONTROL_KEYBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15B7E3D0)
#define INCONTROL_KEYBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15B7E390)
#define INCONTROL_KEYBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x15B7ED30)
#define INCONTROL_KEYBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x15B7E120)
#define INCONTROL_KEYBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15B7EB90)
#define INCONTROL_KEYBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x15B7EB50)
#define INCONTROL_KEYBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x15B7EBA0)
#define INCONTROL_KEYBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B7E630)
#define INCONTROL_KEYBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x15B7ED40)
#define INCONTROL_KEYBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x15B7EEA0)
#define INCONTROL_KEYBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x15B7E140)
#define INCONTROL_KEYBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B7E160)
#define INCONTROL_KEYBINDINGSOURCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15B7E170)
#define INCONTROL_KEYBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7E150)

namespace InControl
{
	inline static constexpr unsigned int KeyBindingSource_TypeDefinitionIndex = 31384;

	class KeyBindingSource : public ::InControl::BindingSource
	{
	public:
		::InControl::KeyCombo _Control_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::KeyCombo keyCombo)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE__CTOR_1_OFFSET))(this, keyCombo);
		}

		::System::Void _ctor_2(::Il2CppArray<::InControl::Key>* keys)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::Key>*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE__CTOR_2_OFFSET))(this, keys);
		}

		::InControl::KeyCombo get_Control()
		{
			return ((::InControl::KeyCombo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::KeyCombo value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::KeyCombo))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_SET_CONTROL_OFFSET))(this, value);
		}

		::System::Single GetValue(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GETVALUE_OFFSET))(this, inputDevice);
		}

		::System::Boolean GetState(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GETSTATE_OFFSET))(this, inputDevice);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBINDINGSOURCE_SAVE_OFFSET))(this, writer);
		}
	};
}
