#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/InControl/Mouse.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET UNITYSDK_OFFSET(0x15B801C0)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B808E0)
#define INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B808A0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B80920)
#define INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x15B807D0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x15B807A0)
#define INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x15B80380)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x15B80930)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x15B80180)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x15B80880)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x15B80870)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x15B80890)
#define INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B80820)
#define INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x15B80970)
#define INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B80240)
#define INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET UNITYSDK_OFFSET(0x15B802E0)
#define INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x15B80940)
#define INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET UNITYSDK_OFFSET(0x15B80190)
#define INCONTROL_MOUSEBINDINGSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B809A0)
#define INCONTROL_MOUSEBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B801B0)
#define INCONTROL_MOUSEBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B801A0)

namespace InControl
{
	inline static constexpr unsigned int MouseBindingSource_TypeDefinitionIndex = 31388;

	class MouseBindingSource : public ::InControl::BindingSource
	{
	public:
		static ::System::Single* StaticGet_ScaleX()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x10E00);
		}
		static ::System::Single* StaticGet_JitterThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x10E04);
		}
		static ::System::Single* StaticGet_ScaleZ()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x10E08);
		}
		static ::System::Single* StaticGet_ScaleY()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSource_TypeDefinitionIndex)->GetStaticField(0x10E0C);
		}
		::InControl::Mouse _Control_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::Mouse mouseControl)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE__CTOR_1_OFFSET))(this, mouseControl);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE__CCTOR_OFFSET))();
		}

		::InControl::Mouse get_Control()
		{
			return ((::InControl::Mouse(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_CONTROL_OFFSET))(this);
		}

		::System::Void set_Control(::InControl::Mouse value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_SET_CONTROL_OFFSET))(this, value);
		}

		static ::System::Boolean ButtonIsPressed(::InControl::Mouse control)
		{
			return ((::System::Boolean(*)(::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_BUTTONISPRESSED_OFFSET))(control);
		}

		static ::System::Boolean NegativeScrollWheelIsActive(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_NEGATIVESCROLLWHEELISACTIVE_OFFSET))(threshold);
		}

		static ::System::Boolean PositiveScrollWheelIsActive(::System::Single threshold)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_POSITIVESCROLLWHEELISACTIVE_OFFSET))(threshold);
		}

		static ::System::Single GetValue(::InControl::Mouse mouseControl)
		{
			return ((::System::Single(*)(::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_OFFSET))(mouseControl);
		}

		::System::Single GetValue_1(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETVALUE_1_OFFSET))(this, inputDevice);
		}

		::System::Boolean GetState(::InControl::InputDevice* inputDevice)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETSTATE_OFFSET))(this, inputDevice);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_SAVE_OFFSET))(this, writer);
		}

		::System::Void Load(::System::IO::BinaryReader* reader, ::System::UInt16 dataFormatVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCE_LOAD_OFFSET))(this, reader, dataFormatVersion);
		}
	};
}
