#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/AxisState_SpeedMode.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace System { class String; }

#define CINEMACHINE_AXISSTATE_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0x1620360)
#define CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1620250)
#define CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1620380)
#define CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET UNITYSDK_OFFSET(0x1620230)
#define CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x1620420)
#define CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x1620400)
#define CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1620370)
#define CINEMACHINE_AXISSTATE_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x1620300)
#define CINEMACHINE_AXISSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1620210)
#define CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x1620220)
#define CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x1620430)
#define CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x1620410)
#define CINEMACHINE_AXISSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1620240)
#define CINEMACHINE_AXISSTATE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x16201D0)
#define CINEMACHINE_AXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1620110)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_TypeDefinitionIndex = 36557;

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
		::System::Single m_MinClampValue; // 0x40
		::System::Single m_MaxClampValue; // 0x44
		::System::Boolean m_Wrap; // 0x48
		::Cinemachine::AxisState_Recentering m_Recentering; // 0x4C
		::System::Boolean m_AngleLimitMode; // 0x68
		::System::Single m_AngleLimitOrign; // 0x6C
		::System::Single mCurrentSpeed; // 0x70
		::Cinemachine::AxisState_IInputAxisProvider* m_InputAxisProvider; // 0x78
		::System::Int32 m_InputAxisIndex; // 0x80
		::System::Boolean _ValueRangeLocked_k__BackingField; // 0x84
		::System::Boolean _HasRecentering_k__BackingField; // 0x85

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

		::System::Single NormalizeAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_NORMALIZEANGLE_OFFSET))(this, angle);
		}

		::System::Single ClampAngle(::System::Single originAngle, ::System::Single minRange, ::System::Single maxRange, ::System::Single inputAngle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_CLAMPANGLE_OFFSET))(this, originAngle, minRange, maxRange, inputAngle);
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
