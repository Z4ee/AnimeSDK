#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EPedestrianAssetType_TypeDefinitionIndex = 66165;

	enum class EPedestrianAssetType : ::System::Int32
	{
		GPU_CrowdPrototype = 0,
		GPU_BatchAnimation = 1,
		ArtNPC = 2,
	};
}
