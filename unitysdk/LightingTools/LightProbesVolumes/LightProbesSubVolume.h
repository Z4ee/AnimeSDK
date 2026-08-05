#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC6EEB0)
#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6EF50)

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int LightProbesSubVolume_TypeDefinitionIndex = 94445;

	class LightProbesSubVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESSUBVOLUME_ONENABLE_OFFSET))(this);
		}
	};
}
