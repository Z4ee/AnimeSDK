#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/AxisState_SpeedMode.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace System { class String; }

#define CINEMACHINE_AXISSTATE_CLAMPANGLE_OFFSET UNITYSDK_OFFSET(0x2BCF750)
#define CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x2BCF640)
#define CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x2BCF770)
#define CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET UNITYSDK_OFFSET(0x2BCF620)
#define CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x2BCF810)
#define CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x2BCF7F0)
#define CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x2BCF760)
#define CINEMACHINE_AXISSTATE_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x2BCF6F0)
#define CINEMACHINE_AXISSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x2BCF600)
#define CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x2BCF610)
#define CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x2BCF820)
#define CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x2BCF800)
#define CINEMACHINE_AXISSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2BCF630)
#define CINEMACHINE_AXISSTATE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2BCF5C0)
#define CINEMACHINE_AXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x2BCF500)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_TypeDefinitionIndex = 36857;

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

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::String* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_VALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RESET_OFFSET))(this);
		}

		::System::Void SetInputAxisProvider(::System::Int32 a1, ::Cinemachine::AxisState_IInputAxisProvider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HasInputProvider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_HASINPUTPROVIDER_OFFSET))(this);
		}

		::System::Boolean Update(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_UPDATE_OFFSET))(this, a1);
		}

		::System::Single ClampValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET))(this, a1);
		}

		::System::Single NormalizeAngle(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_NORMALIZEANGLE_OFFSET))(this, a1);
		}

		::System::Single ClampAngle(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_CLAMPANGLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MaxSpeedUpdate(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET))(this);
		}

		::System::Boolean get_ValueRangeLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_VALUERANGELOCKED_OFFSET))(this);
		}

		::System::Void set_ValueRangeLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRecentering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GET_HASRECENTERING_OFFSET))(this);
		}

		::System::Void set_HasRecentering(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET))(this, a1);
		}
	};
}
