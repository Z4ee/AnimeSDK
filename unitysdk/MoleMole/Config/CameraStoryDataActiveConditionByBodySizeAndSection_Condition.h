#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveConditionByBodySizeAndSection_Condition_TypeDefinitionIndex = 43563;

	struct alignas(4) CameraStoryDataActiveConditionByBodySizeAndSection_Condition
	{
		::MoleMole::Battle::EntityBodySize player; // 0x10
		::MoleMole::Battle::EntityBodySize npc; // 0x14
	};
}
