#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefUnionIndex_UnionKind_TypeDefinitionIndex = 64548;

	enum class RogueTournBuildRefUnionIndex_UnionKind : ::System::Byte
	{
		Empty = 0x0,
		HttpId = 0x1,
		ShareCodeArchiveSlotId = 0x2,
	};
}
