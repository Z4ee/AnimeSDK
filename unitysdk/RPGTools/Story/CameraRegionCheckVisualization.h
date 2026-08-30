#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPGTOOLS_STORY_CAMERAREGIONCHECKVISUALIZATION__CTOR_OFFSET UNITYSDK_OFFSET(0xE80B380)

namespace RPGTools::Story
{
	inline static constexpr unsigned int CameraRegionCheckVisualization_TypeDefinitionIndex = 49398;

	class CameraRegionCheckVisualization : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_CAMERAREGIONCHECKVISUALIZATION__CTOR_OFFSET))(this);
		}
	};
}
