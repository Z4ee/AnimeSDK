#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_NAPAXISSTATE_RECENTERING_CANCELRECENTERING_OFFSET UNITYSDK_OFFSET(0x9AFAD0)
#define CINEMACHINE_NAPAXISSTATE_RECENTERING_COPYSTATEFROM_OFFSET UNITYSDK_OFFSET(0x9AFAA0)
#define CINEMACHINE_NAPAXISSTATE_RECENTERING_DORECENTERING_OFFSET UNITYSDK_OFFSET(0x9AFB00)
#define CINEMACHINE_NAPAXISSTATE_RECENTERING_LEGACYUPGRADE_OFFSET UNITYSDK_OFFSET(0x9AFB10)
#define CINEMACHINE_NAPAXISSTATE_RECENTERING_RECENTERNOW_OFFSET UNITYSDK_OFFSET(0x9AFAF0)
#define CINEMACHINE_NAPAXISSTATE_RECENTERING_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9AFA90)
#define CINEMACHINE_NAPAXISSTATE_RECENTERING__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFA70)

namespace Cinemachine
{
	inline static constexpr unsigned int NapAxisState_Recentering_TypeDefinitionIndex = 32592;

	struct alignas(4) NapAxisState_Recentering
	{
		::System::Boolean m_enabled; // 0x10
		::System::Single m_WaitTime; // 0x14
		::System::Single m_RecenteringTime; // 0x18
		::System::Single mLastAxisInputTime; // 0x1C
		::System::Single mRecenteringVelocity; // 0x20
		::System::Int32 m_LegacyHeadingDefinition; // 0x24
		::System::Int32 m_LegacyVelocityFilterStrength; // 0x28

		::System::Void _ctor(::System::Boolean enabled, ::System::Single waitTime, ::System::Single recenteringTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING__CTOR_OFFSET))(this, enabled, waitTime, recenteringTime);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING_VALIDATE_OFFSET))(this);
		}

		::System::Void CopyStateFrom(::Cinemachine::NapAxisState_Recentering& other)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::NapAxisState_Recentering&))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING_COPYSTATEFROM_OFFSET))(this, other);
		}

		::System::Void CancelRecentering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING_CANCELRECENTERING_OFFSET))(this);
		}

		::System::Void RecenterNow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING_RECENTERNOW_OFFSET))(this);
		}

		/*
		::System::Void DoRecentering(::Cinemachine::NapAxisState& axis, ::System::Single deltaTime, ::System::Single recenterTarget)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::NapAxisState&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING_DORECENTERING_OFFSET))(this, axis, deltaTime, recenterTarget);
		}
		*/

		::System::Boolean LegacyUpgrade(::System::Int32& heading, ::System::Int32& velocityFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CINEMACHINE_NAPAXISSTATE_RECENTERING_LEGACYUPGRADE_OFFSET))(this, heading, velocityFilter);
		}
	};
}
