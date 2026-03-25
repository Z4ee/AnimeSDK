#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x119D9320)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachineVolumeSettings_TypeDefinitionIndex = 30927;

	class CinemachineVolumeSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEVOLUMESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
