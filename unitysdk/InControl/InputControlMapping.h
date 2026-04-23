#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSource.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INCONTROL_INPUTCONTROLMAPPING_APPLYTOVALUE_OFFSET UNITYSDK_OFFSET(0x1716BD60)
#define INCONTROL_INPUTCONTROLMAPPING_GET_IGNOREINITIALZEROVALUE_OFFSET UNITYSDK_OFFSET(0x1716BC30)
#define INCONTROL_INPUTCONTROLMAPPING_GET_INVERT_OFFSET UNITYSDK_OFFSET(0x1716BBB0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1716BC80)
#define INCONTROL_INPUTCONTROLMAPPING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1716BB40)
#define INCONTROL_INPUTCONTROLMAPPING_GET_PASSIVE_OFFSET UNITYSDK_OFFSET(0x1716BC10)
#define INCONTROL_INPUTCONTROLMAPPING_GET_RAW_OFFSET UNITYSDK_OFFSET(0x1716BBF0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x1716BBD0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1716BC50)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SOURCERANGE_OFFSET UNITYSDK_OFFSET(0x1716BD20)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1716BCE0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_TARGETRANGE_OFFSET UNITYSDK_OFFSET(0x1716BD40)
#define INCONTROL_INPUTCONTROLMAPPING_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1716BD00)
#define INCONTROL_INPUTCONTROLMAPPING_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1716BCB0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_IGNOREINITIALZEROVALUE_OFFSET UNITYSDK_OFFSET(0x1716BC40)
#define INCONTROL_INPUTCONTROLMAPPING_SET_INVERT_OFFSET UNITYSDK_OFFSET(0x1716BBC0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1716BC90)
#define INCONTROL_INPUTCONTROLMAPPING_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1716BBA0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_PASSIVE_OFFSET UNITYSDK_OFFSET(0x1716BC20)
#define INCONTROL_INPUTCONTROLMAPPING_SET_RAW_OFFSET UNITYSDK_OFFSET(0x1716BC00)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x1716BBE0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1716BC60)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SOURCERANGE_OFFSET UNITYSDK_OFFSET(0x1716BD30)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1716BCF0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_TARGETRANGE_OFFSET UNITYSDK_OFFSET(0x1716BD50)
#define INCONTROL_INPUTCONTROLMAPPING_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1716BD10)
#define INCONTROL_INPUTCONTROLMAPPING_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1716BCC0)
#define INCONTROL_INPUTCONTROLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1716C090)

namespace InControl
{
	inline static constexpr unsigned int InputControlMapping_TypeDefinitionIndex = 37125;

	class InputControlMapping : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean invert; // 0x18
		::System::Single scale; // 0x1C
		::System::Boolean raw; // 0x20
		::System::Boolean passive; // 0x21
		::System::Boolean ignoreInitialZeroValue; // 0x22
		::System::Single sensitivity; // 0x24
		::System::Single lowerDeadZone; // 0x28
		::System::Single upperDeadZone; // 0x2C
		::InControl::InputControlSource source; // 0x30
		::InControl::InputControlType target; // 0x38
		::InControl::InputRangeType sourceRange; // 0x3C
		::InControl::InputRangeType targetRange; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_Invert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_INVERT_OFFSET))(this);
		}

		::System::Void set_Invert(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_INVERT_OFFSET))(this, value);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SCALE_OFFSET))(this, value);
		}

		::System::Boolean get_Raw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_RAW_OFFSET))(this);
		}

		::System::Void set_Raw(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_RAW_OFFSET))(this, value);
		}

		::System::Boolean get_Passive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_PASSIVE_OFFSET))(this);
		}

		::System::Void set_Passive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_PASSIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IgnoreInitialZeroValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_IGNOREINITIALZEROVALUE_OFFSET))(this);
		}

		::System::Void set_IgnoreInitialZeroValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_IGNOREINITIALZEROVALUE_OFFSET))(this, value);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SENSITIVITY_OFFSET))(this, value);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_UPPERDEADZONE_OFFSET))(this, value);
		}

		::InControl::InputControlSource get_Source()
		{
			return ((::InControl::InputControlSource(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::InControl::InputControlSource value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlSource))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SOURCE_OFFSET))(this, value);
		}

		::InControl::InputControlType get_Target()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::InControl::InputControlType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_TARGET_OFFSET))(this, value);
		}

		::InControl::InputRangeType get_SourceRange()
		{
			return ((::InControl::InputRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SOURCERANGE_OFFSET))(this);
		}

		::System::Void set_SourceRange(::InControl::InputRangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SOURCERANGE_OFFSET))(this, value);
		}

		::InControl::InputRangeType get_TargetRange()
		{
			return ((::InControl::InputRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_TARGETRANGE_OFFSET))(this);
		}

		::System::Void set_TargetRange(::InControl::InputRangeType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_TARGETRANGE_OFFSET))(this, value);
		}

		::System::Single ApplyToValue(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_APPLYTOVALUE_OFFSET))(this, value);
		}
	};
}
