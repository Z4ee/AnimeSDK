#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class DeadZoneFunc; }
namespace InControl { class OneAxisInputControl; }

#define INCONTROL_TWOAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x17213470)
#define INCONTROL_TWOAXISINPUTCONTROL_FILTER_OFFSET UNITYSDK_OFFSET(0x17213580)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x17213BF0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x172132E0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x17213B80)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x17213BA0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LASTSTATE_OFFSET UNITYSDK_OFFSET(0x17213B40)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x17213B60)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x17213280)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17213A10)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x172132A0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x172138F0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17213980)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x17213B30)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x17213300)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17213AA0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_UP_OFFSET UNITYSDK_OFFSET(0x172132C0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17213B50)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_VECTOR_OFFSET UNITYSDK_OFFSET(0x17213B70)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_WASPRESSED_OFFSET UNITYSDK_OFFSET(0x17213BB0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_WASRELEASED_OFFSET UNITYSDK_OFFSET(0x17213BD0)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_X_OFFSET UNITYSDK_OFFSET(0x17213240)
#define INCONTROL_TWOAXISINPUTCONTROL_GET_Y_OFFSET UNITYSDK_OFFSET(0x17213260)
#define INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17213CB0)
#define INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x17213CD0)
#define INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17213C90)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_DOWN_OFFSET UNITYSDK_OFFSET(0x172132F0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x17213B90)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x17213290)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17213A20)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x172132B0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET UNITYSDK_OFFSET(0x17213900)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17213990)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x17213310)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17213AB0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_UP_OFFSET UNITYSDK_OFFSET(0x172132D0)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_X_OFFSET UNITYSDK_OFFSET(0x17213250)
#define INCONTROL_TWOAXISINPUTCONTROL_SET_Y_OFFSET UNITYSDK_OFFSET(0x17213270)
#define INCONTROL_TWOAXISINPUTCONTROL_UPDATEWITHAXES_OFFSET UNITYSDK_OFFSET(0x17213610)
#define INCONTROL_TWOAXISINPUTCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17213D00)
#define INCONTROL_TWOAXISINPUTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x17213320)

namespace InControl
{
	inline static constexpr unsigned int TwoAxisInputControl_TypeDefinitionIndex = 37133;

	class TwoAxisInputControl : public ::System::Object
	{
	public:
		static ::InControl::TwoAxisInputControl** StaticGet_Null()
		{
			return (::InControl::TwoAxisInputControl**)Il2CppClass::FromTypeDefinitionIndex(TwoAxisInputControl_TypeDefinitionIndex)->GetStaticField(0xBF30);
		}
		::InControl::OneAxisInputControl* _Left_k__BackingField; // 0x10
		::InControl::OneAxisInputControl* _Up_k__BackingField; // 0x18
		::InControl::OneAxisInputControl* _Down_k__BackingField; // 0x20
		::InControl::DeadZoneFunc* DeadZoneFunc; // 0x28
		::InControl::OneAxisInputControl* _Right_k__BackingField; // 0x30
		::System::Single lowerDeadZone; // 0x38
		::System::Boolean thisState; // 0x3C
		::System::Boolean clearInputState; // 0x3D
		::System::Boolean lastState; // 0x3E
		::System::UInt64 _UpdateTick_k__BackingField; // 0x40
		::System::Single stateThreshold; // 0x48
		::System::Single _Y_k__BackingField; // 0x4C
		::System::Single sensitivity; // 0x50
		::System::Boolean _HasChanged_k__BackingField; // 0x54
		::System::Boolean Raw; // 0x55
		::UnityEngine::Vector2 lastValue; // 0x58
		::System::Single upperDeadZone; // 0x60
		::System::Single _X_k__BackingField; // 0x64
		::UnityEngine::Vector2 thisValue; // 0x68

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

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_Y_OFFSET))(this, value);
		}

		::InControl::OneAxisInputControl* get_Left()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_Left(::InControl::OneAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_LEFT_OFFSET))(this, value);
		}

		::InControl::OneAxisInputControl* get_Right()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_Right(::InControl::OneAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_RIGHT_OFFSET))(this, value);
		}

		::InControl::OneAxisInputControl* get_Up()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_UP_OFFSET))(this);
		}

		::System::Void set_Up(::InControl::OneAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_UP_OFFSET))(this, value);
		}

		::InControl::OneAxisInputControl* get_Down()
		{
			return ((::InControl::OneAxisInputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_DOWN_OFFSET))(this);
		}

		::System::Void set_Down(::InControl::OneAxisInputControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::OneAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_DOWN_OFFSET))(this, value);
		}

		::System::UInt64 get_UpdateTick()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_UPDATETICK_OFFSET))(this);
		}

		::System::Void set_UpdateTick(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_UPDATETICK_OFFSET))(this, value);
		}

		::System::Void ClearInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_CLEARINPUTSTATE_OFFSET))(this);
		}

		::System::Void Filter(::InControl::TwoAxisInputControl* twoAxisInputControl, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TwoAxisInputControl*, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_FILTER_OFFSET))(this, twoAxisInputControl, deltaTime);
		}

		::System::Void UpdateWithAxes(::System::Single x, ::System::Single y, ::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_UPDATEWITHAXES_OFFSET))(this, x, y, updateTick, deltaTime);
		}

		::System::Single get_Sensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_SENSITIVITY_OFFSET))(this);
		}

		::System::Void set_Sensitivity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_SENSITIVITY_OFFSET))(this, value);
		}

		::System::Single get_StateThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_STATETHRESHOLD_OFFSET))(this);
		}

		::System::Void set_StateThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_STATETHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_UPPERDEADZONE_OFFSET))(this, value);
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

		::System::Void set_HasChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_SET_HASCHANGED_OFFSET))(this, value);
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

		static ::System::Boolean op_Implicit(::InControl::TwoAxisInputControl* instance)
		{
			return ((::System::Boolean(*)(::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_OFFSET))(instance);
		}

		static ::UnityEngine::Vector2 op_Implicit_1(::InControl::TwoAxisInputControl* instance)
		{
			return ((::UnityEngine::Vector2(*)(::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_1_OFFSET))(instance);
		}

		static ::UnityEngine::Vector3 op_Implicit_2(::InControl::TwoAxisInputControl* instance)
		{
			return ((::UnityEngine::Vector3(*)(::InControl::TwoAxisInputControl*))((::PBYTE)hIl2Cpp + INCONTROL_TWOAXISINPUTCONTROL_OP_IMPLICIT_2_OFFSET))(instance);
		}
	};
}
