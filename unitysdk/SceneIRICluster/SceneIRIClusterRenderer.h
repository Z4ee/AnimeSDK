#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace IRIClusterBuilder { class IRI2VolumeTemplate; }

#define SCENEIRICLUSTER_SCENEIRICLUSTERRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xE909380)

namespace SceneIRICluster
{
	inline static constexpr unsigned int SceneIRIClusterRenderer_TypeDefinitionIndex = 48186;

	class SceneIRIClusterRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRIClusterBuilder::IRI2VolumeTemplate* VolumeTemplate; // 0x18
		::UnityEngine::Bounds LocalBounds; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEIRICLUSTER_SCENEIRICLUSTERRENDERER__CTOR_OFFSET))(this);
		}
	};
}
