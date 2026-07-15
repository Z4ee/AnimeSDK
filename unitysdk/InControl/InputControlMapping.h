#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlSource.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define INCONTROL_INPUTCONTROLMAPPING_APPLYTOVALUE_OFFSET UNITYSDK_OFFSET(0x17339EC0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_IGNOREINITIALZEROVALUE_OFFSET UNITYSDK_OFFSET(0x17339D90)
#define INCONTROL_INPUTCONTROLMAPPING_GET_INVERT_OFFSET UNITYSDK_OFFSET(0x17339D10)
#define INCONTROL_INPUTCONTROLMAPPING_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17339DE0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17339C30)
#define INCONTROL_INPUTCONTROLMAPPING_GET_PASSIVE_OFFSET UNITYSDK_OFFSET(0x17339D70)
#define INCONTROL_INPUTCONTROLMAPPING_GET_RAW_OFFSET UNITYSDK_OFFSET(0x17339D50)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x17339D30)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x17339DB0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SOURCERANGE_OFFSET UNITYSDK_OFFSET(0x17339E80)
#define INCONTROL_INPUTCONTROLMAPPING_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x17339E40)
#define INCONTROL_INPUTCONTROLMAPPING_GET_TARGETRANGE_OFFSET UNITYSDK_OFFSET(0x17339EA0)
#define INCONTROL_INPUTCONTROLMAPPING_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x17339E60)
#define INCONTROL_INPUTCONTROLMAPPING_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17339E10)
#define INCONTROL_INPUTCONTROLMAPPING_SET_IGNOREINITIALZEROVALUE_OFFSET UNITYSDK_OFFSET(0x17339DA0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_INVERT_OFFSET UNITYSDK_OFFSET(0x17339D20)
#define INCONTROL_INPUTCONTROLMAPPING_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17339DF0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17339D00)
#define INCONTROL_INPUTCONTROLMAPPING_SET_PASSIVE_OFFSET UNITYSDK_OFFSET(0x17339D80)
#define INCONTROL_INPUTCONTROLMAPPING_SET_RAW_OFFSET UNITYSDK_OFFSET(0x17339D60)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x17339D40)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x17339DC0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SOURCERANGE_OFFSET UNITYSDK_OFFSET(0x17339E90)
#define INCONTROL_INPUTCONTROLMAPPING_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x17339E50)
#define INCONTROL_INPUTCONTROLMAPPING_SET_TARGETRANGE_OFFSET UNITYSDK_OFFSET(0x17339EB0)
#define INCONTROL_INPUTCONTROLMAPPING_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x17339E70)
#define INCONTROL_INPUTCONTROLMAPPING_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17339E20)
#define INCONTROL_INPUTCONTROLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1733A2A0)

namespace InControl
{
	inline static constexpr unsigned int InputControlMapping_TypeDefinitionIndex = 38665;

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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_Invert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_INVERT_OFFSET))(this);
		}

		::System::Void set_Invert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_INVERT_OFFSET))(this, a1);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_Raw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_RAW_OFFSET))(this);
		}

		::System::Void set_Raw(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_RAW_OFFSET))(this, a1);
		}

		::System::Boolean get_Passive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_PASSIVE_OFFSET))(this);
		}

		::System::Void set_Passive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_PASSIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreInitialZeroValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_IGNOREINITIALZEROVALUE_OFFSET))(this);
		}

		::System::Void set_IgnoreInitialZeroValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_IGNOREINITIALZEROVALUE_OFFSET))(this, a1);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SENSITIVITY_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}

		::InControl::InputControlSource get_Source()
		{
			return ((::InControl::InputControlSource(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::InControl::InputControlSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlSource))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SOURCE_OFFSET))(this, a1);
		}

		::InControl::InputControlType get_Target()
		{
			return ((::InControl::InputControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::InControl::InputControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_TARGET_OFFSET))(this, a1);
		}

		::InControl::InputRangeType get_SourceRange()
		{
			return ((::InControl::InputRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_SOURCERANGE_OFFSET))(this);
		}

		::System::Void set_SourceRange(::InControl::InputRangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_SOURCERANGE_OFFSET))(this, a1);
		}

		::InControl::InputRangeType get_TargetRange()
		{
			return ((::InControl::InputRangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_GET_TARGETRANGE_OFFSET))(this);
		}

		::System::Void set_TargetRange(::InControl::InputRangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_SET_TARGETRANGE_OFFSET))(this, a1);
		}

		::System::Single ApplyToValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTCONTROLMAPPING_APPLYTOVALUE_OFFSET))(this, a1);
		}
	};
}
