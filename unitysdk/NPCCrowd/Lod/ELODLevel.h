#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int ELODLevel_TypeDefinitionIndex = 39467;

	enum class ELODLevel : ::System::UInt32
	{
		EnumSize = 0x5,
		Undefined = 0x7,
		LOD4 = 0x4,
		LOD2 = 0x2,
		LOD0 = 0x0,
		LOD3 = 0x3,
		LOD1 = 0x1,
	};
}
