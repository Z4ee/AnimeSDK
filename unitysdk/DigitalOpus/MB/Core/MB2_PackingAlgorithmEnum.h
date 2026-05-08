#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_PackingAlgorithmEnum_TypeDefinitionIndex = 85027;

	enum class MB2_PackingAlgorithmEnum : ::System::Int32
	{
		UnitysPackTextures = 0,
		MeshBakerTexturePacker = 1,
		MeshBakerTexturePacker_Fast = 2,
		MeshBakerTexturePacker_Horizontal = 3,
		MeshBakerTexturePacker_Vertical = 4,
		MeshBakerTexturePaker_Fast_V2_Beta = 5,
	};
}
