#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_AUTODOLLY__CTOR_OFFSET UNITYSDK_OFFSET(0xACF770)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTrackedDolly_AutoDolly_TypeDefinitionIndex = 34718;

	struct alignas(4) CinemachineTrackedDolly_AutoDolly
	{
		::System::Boolean m_Enabled; // 0x10
		::System::Single m_PositionOffset; // 0x14
		::System::Int32 m_SearchRadius; // 0x18
		::System::Int32 m_SearchResolution; // 0x1C

		::System::Void _ctor(::System::Boolean enabled, ::System::Single positionOffset, ::System::Int32 searchRadius, ::System::Int32 stepsPerSegment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_AUTODOLLY__CTOR_OFFSET))(this, enabled, positionOffset, searchRadius, stepsPerSegment);
		}
	};
}
