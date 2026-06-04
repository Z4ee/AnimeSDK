#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlState.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputControl; }

#define INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x18033A50)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET UNITYSDK_OFFSET(0x18033F50)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET UNITYSDK_OFFSET(0x18033B60)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET UNITYSDK_OFFSET(0x18033CF0)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET UNITYSDK_OFFSET(0x18033A80)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x180343C0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x18034390)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x18034170)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET UNITYSDK_OFFSET(0x18034130)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET UNITYSDK_OFFSET(0x180342D0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET UNITYSDK_OFFSET(0x180342E0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET UNITYSDK_OFFSET(0x18034300)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET UNITYSDK_OFFSET(0x18034370)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x180341D0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET UNITYSDK_OFFSET(0x18034270)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x180342B0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET UNITYSDK_OFFSET(0x180340B0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x180340F0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x18034320)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x18034110)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x18034070)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x18034310)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18034340)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18034090)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x18033730)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x18034330)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x180340D0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x180341F0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET UNITYSDK_OFFSET(0x18034220)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET UNITYSDK_OFFSET(0x18034250)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x18034420)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x180343E0)
#define INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET UNITYSDK_OFFSET(0x18033750)
#define INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET UNITYSDK_OFFSET(0x180339F0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x180343B0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET UNITYSDK_OFFSET(0x18034380)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1802EA50)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1802EA30)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18034350)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x18033740)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1802EA70)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x180338D0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x18033800)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x1802F920)
#define INCONTROL_ONEAXISINPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18034450)

namespace InControl
{
	inline static constexpr unsigned int OneAxisInputControl_TypeDefinitionIndex = 37864;

	class OneAxisInputControl : public ::System::Object
	{
	public:
		::InControl::InputControlState lastState; // 0x10
		::System::Boolean wasRepeated; // 0x1C
		::System::Boolean internalEnabled; // 0x1D
		::System::Boolean enabled; // 0x1E
		::System::Boolean Raw; // 0x1F
		::System::UInt64 pendingTick; // 0x20
		::System::Single nextRepeatTime; // 0x28
		::InControl::InputControlState thisState; // 0x2C
		::System::Single FirstRepeatDelay; // 0x38
		::InControl::InputControlState nextState; // 0x3C
		::System::Boolean isNullControl; // 0x48
		::System::Boolean pendingCommit; // 0x49
		::System::Boolean clearInputState; // 0x4A
		::System::Boolean ownerEnabled; // 0x4B
		::System::Single stateThreshold; // 0x4C
		::System::Single upperDeadZone; // 0x50
		::System::Single lowerDeadZone; // 0x54
		::System::Single sensitivity; // 0x58
		::System::Single RepeatDelay; // 0x5C
		::System::UInt64 _UpdateTick_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET))(this, a1);
		}

		::System::Void PrepareForUpdate(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean UpdateWithState(::System::Boolean a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateWithValue(::System::Single a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateWithRawValue(::System::Single a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetValue(::System::Single a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET))(this);
		}

		::System::Void CommitWithState(::System::Boolean a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitWithValue(::System::Single a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CommitWithSides(::InControl::InputControl* a1, ::InControl::InputControl* a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControl*, ::InControl::InputControl*, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_State()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_LastState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET))(this);
		}

		::System::Single get_LastValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET))(this);
		}

		::System::Single get_RawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Single get_NextRawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_HasInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET))(this);
		}

		::System::Boolean get_HasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_WasRepeated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET))(this);
		}

		::System::Boolean get_IsRawPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET))(this);
		}

		::System::Single get_LastRawValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_InternalIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_InternalWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_InternalWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET))(this);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_StateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_StateThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNullControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET))(this);
		}

		::System::Void set_InternalEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_EnabledInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Boolean(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_1(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Single(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET))(a1);
		}
	};
}
