#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"

#define CINEMACHINE_CINEMACHINECORE_UPDATESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x119AD590)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_UpdateStatus_TypeDefinitionIndex = 30856;

	class CinemachineCore_UpdateStatus : public ::System::Object
	{
	public:
		::System::Int32 lastUpdateFrame; // 0x10
		::System::Single lastUpdateDeltaTime; // 0x14
		::Cinemachine::UpdateTracker_UpdateClock lastUpdateMode; // 0x18
		::System::Int32 lastUpdateFixedFrame; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATESTATUS__CTOR_OFFSET))(this);
		}
	};
}
