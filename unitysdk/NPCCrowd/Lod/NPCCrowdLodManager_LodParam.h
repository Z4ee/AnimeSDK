#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LodParam_TypeDefinitionIndex = 54999;

	enum class NPCCrowdLodManager_LodParam : ::System::Int32
	{
		Count = 2,
		Camera = 1,
		Avatar = 0,
	};
}
