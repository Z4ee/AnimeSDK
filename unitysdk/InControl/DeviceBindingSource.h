#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSource.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"

namespace InControl { class InputDevice; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_DEVICEBINDINGSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18E7C410)
#define INCONTROL_DEVICEBINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18E7C390)
#define INCONTROL_DEVICEBINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18E7C490)
#define INCONTROL_DEVICEBINDINGSOURCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x18E7BDE0)
#define INCONTROL_DEVICEBINDINGSOURCE_GETVALUE_OFFSET UNITYSDK_OFFSET(0x18E7BB40)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x18E7C530)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET UNITYSDK_OFFSET(0x18E7C2B0)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x18E7C1C0)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x18E7C320)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_INCLUDECONTROLS_OFFSET UNITYSDK_OFFSET(0x18E7BA80)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18E7C8E0)
#define INCONTROL_DEVICEBINDINGSOURCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18E7BF30)
#define INCONTROL_DEVICEBINDINGSOURCE_ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x18E7CAB0)
#define INCONTROL_DEVICEBINDINGSOURCE_ISSINGLECONTROL_OFFSET UNITYSDK_OFFSET(0x18E7CAD0)
#define INCONTROL_DEVICEBINDINGSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x18E7C750)
#define INCONTROL_DEVICEBINDINGSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x18E7C540)
#define INCONTROL_DEVICEBINDINGSOURCE_SET_INCLUDECONTROLS_OFFSET UNITYSDK_OFFSET(0x18E7BA90)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18E7BAD0)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18E7BAF0)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18E7BB00)
#define INCONTROL_DEVICEBINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7BAA0)

namespace InControl
{
	inline static constexpr unsigned int DeviceBindingSource_TypeDefinitionIndex = 39500;

	class DeviceBindingSource : public ::InControl::BindingSource
	{
	public:
		::Il2CppArray<::InControl::InputControlType>* _IncludeControls_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::InControl::DeviceBindingSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::DeviceBindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::InControl::InputControlType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE__CTOR_3_OFFSET))(this, a1);
		}

		::Il2CppArray<::InControl::InputControlType>* get_IncludeControls()
		{
			return ((::Il2CppArray<::InControl::InputControlType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_INCLUDECONTROLS_OFFSET))(this);
		}

		::System::Void set_IncludeControls(::Il2CppArray<::InControl::InputControlType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_SET_INCLUDECONTROLS_OFFSET))(this, a1);
		}

		::System::Single GetValue(::InControl::InputDevice* a1)
		{
			return ((::System::Single(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GETVALUE_OFFSET))(this, a1);
		}

		::System::Boolean GetState(::InControl::InputDevice* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICENAME_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_DeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_DeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_DEVICESTYLE_OFFSET))(this);
		}

		::System::Boolean Equals(::InControl::BindingSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::BindingSourceType get_BindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_BINDINGSOURCETYPE_OFFSET))(this);
		}

		::System::Void Save(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_SAVE_OFFSET))(this, a1);
		}

		::System::Void Load(::System::IO::BinaryReader* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*, ::System::UInt16))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsComboControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_ISCOMBOCONTROL_OFFSET))(this);
		}

		::System::Boolean IsSingleControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCE_ISSINGLECONTROL_OFFSET))(this);
		}
	};
}
