#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/ValueType.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20C6820)
#define INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20C6800)
#define INCONTROL_UNKNOWNDEVICECONTROL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20C68E0)
#define INCONTROL_UNKNOWNDEVICECONTROL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x20C67D0)
#define INCONTROL_UNKNOWNDEVICECONTROL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x20C67E0)
#define INCONTROL_UNKNOWNDEVICECONTROL_LOAD_OFFSET UNITYSDK_OFFSET(0x20C6950)
#define INCONTROL_UNKNOWNDEVICECONTROL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15D17E60)
#define INCONTROL_UNKNOWNDEVICECONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15D185E0)
#define INCONTROL_UNKNOWNDEVICECONTROL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15D18880)
#define INCONTROL_UNKNOWNDEVICECONTROL_SAVE_OFFSET UNITYSDK_OFFSET(0x20C6900)
#define INCONTROL_UNKNOWNDEVICECONTROL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20C68F0)
#define INCONTROL_UNKNOWNDEVICECONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D18AB0)
#define INCONTROL_UNKNOWNDEVICECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x20C67A0)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceControl_TypeDefinitionIndex = 31397;

	struct alignas(4) UnknownDeviceControl
	{
		static ::InControl::UnknownDeviceControl* StaticGet_None()
		{
			return (::InControl::UnknownDeviceControl*)Il2CppClass::FromTypeDefinitionIndex(UnknownDeviceControl_TypeDefinitionIndex)->GetStaticField(0x10CE0);
		}
		::InControl::InputControlType Control; // 0x10
		::InControl::InputRangeType SourceRange; // 0x14
		::System::Boolean IsButton; // 0x18
		::System::Boolean IsAnalog; // 0x19

		::System::Void _ctor(::InControl::InputControlType control, ::InControl::InputRangeType sourceRange)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL__CTOR_OFFSET))(this, control, sourceRange);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL__CCTOR_OFFSET))();
		}

		::System::Single GetValue(::InControl::InputDevice* device)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_GETVALUE_OFFSET))(this, device);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_GET_INDEX_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::InControl::UnknownDeviceControl a, ::InControl::UnknownDeviceControl b)
		{
			return ((::System::Boolean(*)(::InControl::UnknownDeviceControl, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::UnknownDeviceControl a, ::InControl::UnknownDeviceControl b)
		{
			return ((::System::Boolean(*)(::InControl::UnknownDeviceControl, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::InControl::UnknownDeviceControl other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::InControl::UnknownDeviceControl control)
		{
			return ((::System::Boolean(*)(::InControl::UnknownDeviceControl))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_OP_IMPLICIT_OFFSET))(control);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_TOSTRING_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_SAVE_OFFSET))(this, writer);
		}

		::System::Void Load(::System::IO::BinaryReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICECONTROL_LOAD_OFFSET))(this, reader);
		}
	};
}
