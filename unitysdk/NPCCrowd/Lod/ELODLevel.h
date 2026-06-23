#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int ELODLevel_TypeDefinitionIndex = 50253;

	enum class ELODLevel : ::System::UInt32
	{
		LOD0 = 0x0,
		LOD1 = 0x1,
		LOD2 = 0x2,
		EnumSize = 0x5,
		LOD4 = 0x4,
		Undefined = 0x7,
		LOD3 = 0x3,
	};
}
