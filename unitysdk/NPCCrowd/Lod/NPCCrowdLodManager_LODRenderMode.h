#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderMode_TypeDefinitionIndex = 57942;

	enum class NPCCrowdLodManager_LODRenderMode : ::System::Byte
	{
		GPU = 0x1,
		CPU = 0x0,
		GPUSimpleModel = 0x2,
		Hide = 0x3,
	};
}
