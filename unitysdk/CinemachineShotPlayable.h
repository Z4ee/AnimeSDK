#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E81DB60)
#define CINEMACHINESHOTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81DC70)

inline static constexpr unsigned int CinemachineShotPlayable_TypeDefinitionIndex = 34002;

class CinemachineShotPlayable : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOTPLAYABLE__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET))(this);
	}
};
