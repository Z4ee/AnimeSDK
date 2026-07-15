#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputObjectTypeWrapper_TypeDefinitionIndex = 38407;

	enum class HEU_InputObjectTypeWrapper : ::System::Int32
	{
		HDA = 0,
		UNITY_MESH = 1,
		CURVE = 2,
		TERRAIN = 3,
		BOUNDING_BOX = 4,
		TILEMAP = 5,
	};
}
