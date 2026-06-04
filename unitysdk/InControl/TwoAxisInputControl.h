#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class DeadZoneFunc; }
namespace InControl { class OneAxisInputControl; }

#define INCONTROL_TWOAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x18048E60)
#define INCONTROL_TWOAXISINPUTCONTROL_FILTER_OFFSET UNITYSDK_OFFSET(0x18048F70)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x180495F0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x18048CC0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x18049580)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x180495A0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LASTSTATE_OFFSET UNITYSDK_OFFSET(0x18049540)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x18049560)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x18048C60)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x18049410)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x18048C80)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x180492F0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18049380)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18049530)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x18048CE0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x180494A0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x18048CA0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18049550)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x18049570)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x180495B0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_WASRELEASED_OFFSET UNITYSDK_OFFSET(0x180495D0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x18048C20)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x18048C40)
#define INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x180496B0)
#define INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x180496D0)
#define INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18049690)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x18048CD0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x18049590)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x18048C70)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x18049420)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x18048C90)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x18049300)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18049390)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x18048CF0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x180494B0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x18048CB0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x18048C30)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x18048C50)
#define INCONTROL_TWOAXISINPUTCONTROL_UPDATEWITHAXES_OFFSET UNITYSDK_OFFSET(0x18049000)
#define INCONTROL_TWOAXISINPUTCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18049700)
#define INCONTROL_TWOAXISINPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x18048D00)

namespace InControl
{
	inline static constexpr unsigned int TwoAxisInputControl_TypeDefinitionIndex = 37865;

	class TwoAxisInputControl : public ::System::Object
	{
	public:
		static ::InControl::TwoAxisInputControl** StaticGet_Null()
		{
			return (::InControl::TwoAxisInputControl**)Il2CppClass::FromTypeDefinitionIndex(TwoAxisInputControl_TypeDefinitionIndex)->GetStaticField(0x12060);
		}
		::InControl::DeadZoneFunc* DeadZoneFunc; // 0x10
		::InControl::OneAxisInputControl* _Down_k__BackingField; // 0x18
		::InControl::OneAxisInputControl* _Right_k__BackingField; // 0x20
		::InControl::OneAxisInputControl* _Left_k__BackingField; // 0x28
		::InControl::OneAxisInputControl* _Up_k__BackingField; // 0x30
		::UnityEngine::Vector2 lastValue; // 0x38
		::System::Boolean Raw; // 0x40
		::System::Boolean clearInputState; // 0x41
		::System::Boolean thisState; // 0x42
		::System::Boolean _HasChanged_k__BackingField; // 0x43
		::System::Boolean lastState; // 0x44
		::System::Single upperDeadZone; // 0x48
		::UnityEngine::Vector2 thisValue; // 0x4C
		::System::Single stateThreshold; // 0x54
		::System::UInt64 _UpdateTick_k__BackingField; // 0x58
		::System::Single _X_k__BackingField; // 0x60
		::System::Single _Y_k__BackingField; // 0x64
		::System::Single sensitivity; // 0x68
		::System::Single lowerDeadZone; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL__CCTOR_OFFSET))();
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_Y_OFFSET))(this, a1);
		}

		::InControl::OneAxisInputControl* get_Left()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_Left(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_LEFT_OFFSET))(this, a1);
		}

		::InControl::OneAxisInputControl* get_Right()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_Right(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_RIGHT_OFFSET))(this, a1);
		}

		::InControl::OneAxisInputControl* get_Up()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_UP_OFFSET))(this);
		}

		::System::Void set_Up(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_UP_OFFSET))(this, a1);
		}

		::InControl::OneAxisInputControl* get_Down()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_DOWN_OFFSET))(this);
		}

		::System::Void set_Down(::InControl::OneAxisInputControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_DOWN_OFFSET))(this, a1);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_UPDATETICK_OFFSET))(this, a1);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void Filter(::InControl::TwoAxisInputControl* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_FILTER_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateWithAxes(::System::Single a1, ::System::Single a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_UPDATEWITHAXES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET))(this, a1);
		}

		::System::Single get_StateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_StateThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}

		::System::Boolean get_State()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_LastState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_LASTSTATE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_LastValue()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_LASTVALUE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_Vector()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_VECTOR_OFFSET))(this);
		}

		::System::Boolean get_HasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Void set_HasChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_HASCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_WASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_WasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_WASRELEASED_OFFSET))(this);
		}

		::System::Single get_Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_ANGLE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::InControl::TwoAxisInputControl* a1)
		{
			return ((::System::Boolean(*)(::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 op_Implicit_1(::InControl::TwoAxisInputControl* a1)
		{
			return ((::UnityEngine::Vector2(*)(::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 op_Implicit_2(::InControl::TwoAxisInputControl* a1)
		{
			return ((::UnityEngine::Vector3(*)(::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_2_OFFSET))(a1);
		}
	};
}
