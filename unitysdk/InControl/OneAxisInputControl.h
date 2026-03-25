#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlState.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputControl; }

#define INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x15C01130)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET UNITYSDK_OFFSET(0x15C01650)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET UNITYSDK_OFFSET(0x15C01250)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET UNITYSDK_OFFSET(0x15C013F0)
#define INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET UNITYSDK_OFFSET(0x15C01160)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x15C01AC0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15C01A90)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x15C01860)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_HASINPUT_OFFSET UNITYSDK_OFFSET(0x15C01820)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALISPRESSED_OFFSET UNITYSDK_OFFSET(0x15C019C0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15C019D0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_INTERNALWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15C019F0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET UNITYSDK_OFFSET(0x15C01A70)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x15C018C0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_ISRAWPRESSED_OFFSET UNITYSDK_OFFSET(0x15C01960)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x15C019A0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTSTATE_OFFSET UNITYSDK_OFFSET(0x15C017A0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x15C017E0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C01A20)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_NEXTRAWVALUE_OFFSET UNITYSDK_OFFSET(0x15C01800)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x15C01760)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x15C01A10)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x15C01A40)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15C01780)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x15C00E10)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C01A30)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15C017C0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x15C018E0)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASRELEASED_OFFSET UNITYSDK_OFFSET(0x15C01910)
#define INCONTROL_ONEAXISINPUTCONTROL_GET_WASREPEATED_OFFSET UNITYSDK_OFFSET(0x15C01940)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x15C01B20)
#define INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x15C01AE0)
#define INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET UNITYSDK_OFFSET(0x15C00E30)
#define INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15C010D0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x15C01AB0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET UNITYSDK_OFFSET(0x15C01A80)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15BFB6D0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x15BFB6B0)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x15C01A50)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x15C00E20)
#define INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15BFB6F0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET UNITYSDK_OFFSET(0x15C00FB0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x15C00EE0)
#define INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET UNITYSDK_OFFSET(0x15BFC4A0)
#define INCONTROL_ONEAXISINPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x15C01B50)

namespace InControl
{
	inline static constexpr unsigned int OneAxisInputControl_TypeDefinitionIndex = 31412;

	class OneAxisInputControl : public ::System::Object
	{
	public:
		::System::Single nextRepeatTime; // 0x10
		::System::Boolean Raw; // 0x14
		::System::Boolean pendingCommit; // 0x15
		::System::Boolean isNullControl; // 0x16
		::System::Boolean ownerEnabled; // 0x17
		::System::Single RepeatDelay; // 0x18
		::System::Single upperDeadZone; // 0x1C
		::System::UInt64 _UpdateTick_k__BackingField; // 0x20
		::System::UInt64 pendingTick; // 0x28
		::InControl::InputControlState thisState; // 0x30
		::System::Boolean enabled; // 0x3C
		::System::Boolean clearInputState; // 0x3D
		::System::Boolean internalEnabled; // 0x3E
		::System::Boolean wasRepeated; // 0x3F
		::System::Single lowerDeadZone; // 0x40
		::InControl::InputControlState nextState; // 0x44
		::InControl::InputControlState lastState; // 0x50
		::System::Single FirstRepeatDelay; // 0x5C
		::System::Single sensitivity; // 0x60
		::System::Single stateThreshold; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPDATETICK_OFFSET))(this, value);
		}

		::System::Void PrepareForUpdate(::System::UInt64 updateTick)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_PREPAREFORUPDATE_OFFSET))(this, updateTick);
		}

		::System::Boolean UpdateWithState(::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHSTATE_OFFSET))(this, state, updateTick, deltaTime);
		}

		::System::Boolean UpdateWithValue(::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Boolean UpdateWithRawValue(::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_UPDATEWITHRAWVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void SetValue(::System::Single value, ::System::UInt64 updateTick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SETVALUE_OFFSET))(this, value, updateTick);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void Commit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMIT_OFFSET))(this);
		}

		::System::Void CommitWithState(::System::Boolean state, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSTATE_OFFSET))(this, state, updateTick, deltaTime);
		}

		::System::Void CommitWithValue(::System::Single value, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHVALUE_OFFSET))(this, value, updateTick, deltaTime);
		}

		::System::Void CommitWithSides(::InControl::InputControl* negativeSide, ::InControl::InputControl* positiveSide, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControl*, ::InControl::InputControl*, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_COMMITWITHSIDES_OFFSET))(this, negativeSide, positiveSide, updateTick, deltaTime);
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

		::System::Void set_Sensitivity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET))(this, value);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_StateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_StateThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET))(this, value);
		}

		::System::Boolean get_IsNullControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ISNULLCONTROL_OFFSET))(this);
		}

		::System::Void set_InternalEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_INTERNALENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_EnabledInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_GET_ENABLEDINHIERARCHY_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::InControl::OneAxisInputControl* instance)
		{
			return ((::System::Boolean(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_OFFSET))(instance);
		}

		static ::System::Single op_Implicit_1(::InControl::OneAxisInputControl* instance)
		{
			return ((::System::Single(*)(::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_ONEAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET))(instance);
		}
	};
}
