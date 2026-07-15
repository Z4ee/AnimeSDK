#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PipelineQueryType_TypeDefinitionIndex = 35985;

	enum class PipelineQueryType : ::System::Int32
	{
		kQueryProbe = 0,
		kQueryStencilLight = 1,
		kQueryMainLight = 2,
		kQueryMainLightProbe = 3,
		kQueryVolumetricLight = 4,
		kQueryCharacterShadow = 5,
		kQueryFogEmissionBakeVolume = 6,
		kQueryHybridTransparent = 7,
		kQueryVoxelIrradianceCache = 8,
		kQueryGPUParticles = 9,
		kQueryLocalAmbientVolume = 10,
	};
}
