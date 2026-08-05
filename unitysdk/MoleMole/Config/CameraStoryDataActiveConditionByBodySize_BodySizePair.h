#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByBodySize_BodySizePair_TypeDefinitionIndex = 43820;

	struct alignas(4) CameraStoryDataActiveConditionByBodySize_BodySizePair
	{
		::MoleMole::Battle::EntityBodySize player; // 0x10
		::MoleMole::Battle::EntityBodySize npc; // 0x14
	};
}
