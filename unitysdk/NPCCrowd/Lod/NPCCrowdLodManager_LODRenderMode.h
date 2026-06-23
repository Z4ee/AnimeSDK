#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderMode_TypeDefinitionIndex = 44645;

	enum class NPCCrowdLodManager_LODRenderMode : ::System::Byte
	{
		Hide = 0x3,
		GPUSimpleModel = 0x2,
		GPU = 0x1,
		CPU = 0x0,
	};
}
