#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x16488620)
#define CINEMACHINE_TIMELINE_CINEMACHINESHOTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x164889C0)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineShotPlayable_TypeDefinitionIndex = 38585;

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
