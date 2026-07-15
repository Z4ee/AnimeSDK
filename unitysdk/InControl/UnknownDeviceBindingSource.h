#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB565FA0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0xB565E70)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB566080)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0xB565A30)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0xB5658E0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB5660A0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0xB565830)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0xB565E50)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xB565D60)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0xB565E60)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB5660B0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB565A90)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0xB5661E0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0xB566340)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0xB565850)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5658D0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB565860)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSource_TypeDefinitionIndex = 38654;

	class UnknownDeviceBindingSource : public ::InControl::BindingSource
	{
	public:
		::InControl::UnknownDeviceControl _Control_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::UnknownDeviceControl a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_1_OFFSET))(this, a1);
		}

		::InControl::UnknownDeviceControl get_Control()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::UnknownDeviceControl a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SET_CONTROL_OFFSET))(this, a1);
		}

		::System::Single GetValue(::InControl::InputDevice* a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean GetState(::InControl::InputDevice* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SAVE_OFFSET))(this, a1);
		}
	};
}
