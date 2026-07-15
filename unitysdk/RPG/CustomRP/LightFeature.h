#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightFeature_TypeDefinitionIndex = 36157;

	enum class LightFeature : ::System::Int32
	{
		None = 0,
		SpotAngleCull = 1,
		DisableCharLight = 2,
		LOD0 = 65536,
		Lod0ToFar = 262144,
		LODFar = 524288,
	};
}
