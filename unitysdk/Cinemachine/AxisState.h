#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/AxisState_SpeedMode.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace System { class String; }

#define CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0xA547D0)
#define CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0xA54860)
#define CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET UNITYSDK_OFFSET(0xA743C0)
#define CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0xA54900)
#define CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0xA548E0)
#define CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA743E0)
#define CINEMACHINE_AXISSTATE_RESET_OFFSET UNITYSDK_OFFSET(0xA547A0)
#define CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0xA547B0)
#define CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0xA54910)
#define CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0xA548F0)
#define CINEMACHINE_AXISSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA743D0)
#define CINEMACHINE_AXISSTATE_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA54760)
#define CINEMACHINE_AXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA546C0)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_TypeDefinitionIndex = 34087;

	struct alignas(8) AxisState
	{
		// static const ::System::Single Epsilon; // 0x0
		::System::Single Value; // 0x10
		::Cinemachine::AxisState_SpeedMode m_SpeedMode; // 0x14
		::System::Single m_MaxSpeed; // 0x18
		::System::Single m_AccelTime; // 0x1C
		::System::Single m_DecelTime; // 0x20
		::System::String* m_InputAxisName; // 0x28
		::System::Single m_InputAxisValue; // 0x30
		::System::Boolean m_InvertInput; // 0x34
		::System::Single m_MinValue; // 0x38
		::System::Single m_MaxValue; // 0x3C
		::System::Boolean m_Wrap; // 0x40
		::Cinemachine::AxisState_Recentering m_Recentering; // 0x44
		::System::Single mCurrentSpeed; // 0x60
		::Cinemachine::AxisState_IInputAxisProvider* m_InputAxisProvider; // 0x68
		::System::Int32 m_InputAxisIndex; // 0x70
		::System::Boolean _ValueRangeLocked_k__BackingField; // 0x74
		::System::Boolean _HasRecentering_k__BackingField; // 0x75

		::System::Void _ctor(::System::Single minValue, ::System::Single maxValue, ::System::Boolean wrap, ::System::Boolean rangeLocked, ::System::Single maxSpeed, ::System::Single accelTime, ::System::Single decelTime, ::System::String* name, ::System::Boolean invert)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE__CTOR_OFFSET))(this, minValue, maxValue, wrap, rangeLocked, maxSpeed, accelTime, decelTime, name, invert);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_VALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RESET_OFFSET))(this);
		}

		::System::Void SetInputAxisProvider(::System::Int32 axis, ::Cinemachine::AxisState_IInputAxisProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET))(this, axis, provider);
		}

		::System::Boolean get_HasInputProvider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET))(this);
		}

		::System::Boolean Update(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Single ClampValue(::System::Single v)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET))(this, v);
		}

		::System::Boolean MaxSpeedUpdate(::System::Single input, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET))(this, input, deltaTime);
		}

		::System::Single GetMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET))(this);
		}

		::System::Boolean get_ValueRangeLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET))(this);
		}

		::System::Void set_ValueRangeLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_HasRecentering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET))(this);
		}

		::System::Void set_HasRecentering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET))(this, value);
		}
	};
}
