#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_AXISSTATE_RECENTERING_CANCELRECENTERING_OFFSET UNITYSDK_OFFSET(0x2DFA0F0)
#define CINEMACHINE_AXISSTATE_RECENTERING_COPYSTATEFROM_OFFSET UNITYSDK_OFFSET(0x2DFA0C0)
#define CINEMACHINE_AXISSTATE_RECENTERING_DORECENTERING_OFFSET UNITYSDK_OFFSET(0x2DFA180)
#define CINEMACHINE_AXISSTATE_RECENTERING_LEGACYUPGRADE_OFFSET UNITYSDK_OFFSET(0x2DFA190)
#define CINEMACHINE_AXISSTATE_RECENTERING_RECENTERNOW_OFFSET UNITYSDK_OFFSET(0x2DFA170)
#define CINEMACHINE_AXISSTATE_RECENTERING_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2DFA0B0)
#define CINEMACHINE_AXISSTATE_RECENTERING__CTOR_OFFSET UNITYSDK_OFFSET(0x2DFA090)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_Recentering_TypeDefinitionIndex = 38501;

	struct alignas(4) AxisState_Recentering
	{
		::System::Boolean m_enabled; // 0x10
		::System::Single m_WaitTime; // 0x14
		::System::Single m_RecenteringTime; // 0x18
		::System::Single mLastAxisInputTime; // 0x1C
		::System::Single mRecenteringVelocity; // 0x20
		::System::Int32 m_LegacyHeadingDefinition; // 0x24
		::System::Int32 m_LegacyVelocityFilterStrength; // 0x28

		::System::Void _ctor(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_VALIDATE_OFFSET))(this);
		}

		::System::Void CopyStateFrom(::Cinemachine::AxisState_Recentering& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_Recentering&))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_COPYSTATEFROM_OFFSET))(this, a1);
		}

		::System::Void CancelRecentering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_CANCELRECENTERING_OFFSET))(this);
		}

		::System::Void RecenterNow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_RECENTERNOW_OFFSET))(this);
		}

		/*
		::System::Void DoRecentering(::Cinemachine::AxisState& a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_DORECENTERING_OFFSET))(this, a1, a2, a3);
		}
		*/

		::System::Boolean LegacyUpgrade(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RECENTERING_LEGACYUPGRADE_OFFSET))(this, a1, a2);
		}
	};
}
