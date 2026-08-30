#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DebugTextureType_TypeDefinitionIndex = 70915;

	enum class DebugTextureType : ::System::Int32
	{
		None = 0,
		RayDirection = 1,
		RayOrigin = 2,
		ObjectID = 3,
		SDFHitResult = 4,
		MaterialAlbedo = 5,
		MaterialPBR = 6,
		MaterialNormal = 7,
		RelightingResult = 8,
	};
}
