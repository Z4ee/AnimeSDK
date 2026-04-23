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

#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17315860)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17315730)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17315940)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x17315350)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x173151F0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x17315960)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x17315140)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x17315710)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x17315630)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x17315720)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x17315970)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x173153B0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x17315AB0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x17315B80)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x17315160)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173151E0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17315170)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSource_TypeDefinitionIndex = 37114;

	class UnknownDeviceBindingSource : public ::InControl::BindingSource
	{
	public:
		::InControl::UnknownDeviceControl _Control_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::UnknownDeviceControl control)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE__CTOR_1_OFFSET))(this, control);
		}

		::InControl::UnknownDeviceControl get_Control()
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::UnknownDeviceControl value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SET_CONTROL_OFFSET))(this, value);
		}

		::System::Single GetValue(::InControl::InputDevice* device)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETVALUE_OFFSET))(this, device);
		}

		::System::Boolean GetState(::InControl::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_GETSTATE_OFFSET))(this, device);
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

		::System::Boolean Equals(::InControl::BindingSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_EQUALS_1_OFFSET))(this, other);
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

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCE_SAVE_OFFSET))(this, writer);
		}
	};
}
