#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Prop::PillarPuzzle
{
	inline static constexpr unsigned int PillarPuzzleNeighbourRelation_TypeDefinitionIndex = 78495;

	struct alignas(4) PillarPuzzleNeighbourRelation
	{
		::System::UInt32 Left; // 0x10
		::System::UInt32 Right; // 0x14
	};
}
