#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215090)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachineVolumeSettings_TypeDefinitionIndex = 37729;

	class CinemachineVolumeSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
