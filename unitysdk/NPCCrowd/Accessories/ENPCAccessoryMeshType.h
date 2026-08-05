#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int ENPCAccessoryMeshType_TypeDefinitionIndex = 58952;

	enum class ENPCAccessoryMeshType : ::System::Int32
	{
		Bone = 2,
		Static = 1,
		None = 0,
	};
}
