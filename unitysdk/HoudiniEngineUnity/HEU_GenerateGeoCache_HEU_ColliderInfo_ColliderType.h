#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderType_TypeDefinitionIndex = 38480;

	enum class HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderType : ::System::Int32
	{
		NONE = 0,
		BOX = 1,
		SPHERE = 2,
		MESH = 3,
		SIMPLE_BOX = 4,
		SIMPLE_SPHERE = 5,
		SIMPLE_CAPSULE = 6,
	};
}
