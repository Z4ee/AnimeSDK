#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_CINEMACHINETRACKEDDOLLY_AUTODOLLY__CTOR_OFFSET UNITYSDK_OFFSET(0x2DFBA50)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTrackedDolly_AutoDolly_TypeDefinitionIndex = 38494;

	struct alignas(4) CinemachineTrackedDolly_AutoDolly
	{
		::System::Boolean m_Enabled; // 0x10
		::System::Single m_PositionOffset; // 0x14
		::System::Int32 m_SearchRadius; // 0x18
		::System::Int32 m_SearchResolution; // 0x1C

		::System::Void _ctor(::System::Boolean a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETRACKEDDOLLY_AUTODOLLY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
