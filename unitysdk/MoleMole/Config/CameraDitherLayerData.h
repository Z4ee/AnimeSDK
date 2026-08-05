#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDitherLayerData_TypeDefinitionIndex = 64023;

	struct alignas(4) CameraDitherLayerData
	{
		::UnityEngine::LayerMask ColliderDetectLayers; // 0x10
		::UnityEngine::LayerMask ColliderIgnoreLayers; // 0x14
	};
}
