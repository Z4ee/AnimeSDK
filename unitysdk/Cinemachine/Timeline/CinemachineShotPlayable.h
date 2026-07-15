#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D217AE0)
#define CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D217E80)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineShotPlayable_TypeDefinitionIndex = 37726;

	class CinemachineShotPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET))(this);
		}
	};
}
