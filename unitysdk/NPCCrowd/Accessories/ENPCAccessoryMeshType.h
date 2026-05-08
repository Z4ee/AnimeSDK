#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int ENPCAccessoryMeshType_TypeDefinitionIndex = 66362;

	enum class ENPCAccessoryMeshType : ::System::Int32
	{
		Static = 1,
		None = 0,
		Bone = 2,
	};
}
