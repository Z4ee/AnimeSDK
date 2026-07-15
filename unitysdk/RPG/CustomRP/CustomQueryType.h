#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomQueryType_TypeDefinitionIndex = 35984;

	enum class CustomQueryType : ::System::Int32
	{
		kQueryStart = 0,
		kQueryLight = 0,
		kQueryAreaLight = 1,
		kQueryStencilLight = 2,
		kQueryMainLight = 3,
		kQueryMainLightProbe = 4,
		kQueryProbe = 5,
		kQueryBoxProjectionProbe = 6,
		kQueryVolumetricLightBeam = 7,
		kQueryLocalFogSphere = 8,
		kQueryLocalAmbientVolume = 9,
		kQueryEasyFog = 10,
		kQueryCustomEffect = 11,
		kQueryHybridTransparent = 12,
		kQueryBillboard = 13,
		kQueryVolumetricLight = 14,
		kQueryLocalAmbient = 15,
		kQueryLineGlow = 16,
		kQueryCharacterShadow = 17,
		kQueryFogEmissionBakeVolume = 18,
		kQueryFogVolume = 19,
		kQueryVoxelIrradianceCache = 20,
		kOcclusionQueryCount = 21,
		kQueryDecalLow = 21,
		kQueryDecalMiddle = 22,
		kQueryDecalHigh = 23,
		kQueryDecalVeryHigh = 24,
		kQuerySSGI = 25,
		kQueryCount = 26,
	};
}
