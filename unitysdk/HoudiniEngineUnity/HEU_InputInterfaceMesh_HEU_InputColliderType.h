#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputInterfaceMesh_HEU_InputColliderType_TypeDefinitionIndex = 39350;

	enum class HEU_InputInterfaceMesh_HEU_InputColliderType : ::System::Int32
	{
		NONE = 0,
		BOX = 1,
		SPHERE = 2,
		CAPSULE = 3,
		MESH = 4,
	};
}
