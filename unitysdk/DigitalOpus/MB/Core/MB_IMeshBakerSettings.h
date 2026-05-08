#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LightmapOptions.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshCombineAPIType.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_MeshPivotLocation.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_RenderType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class IAssignToMeshCustomizer; }

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_IMeshBakerSettings_TypeDefinitionIndex = 85090;

	class MB_IMeshBakerSettings
	{
	public:
	};
}
