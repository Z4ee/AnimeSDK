#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookData_NPCProgressPair_TypeDefinitionIndex = 64655;

	struct alignas(4) RogueTournHandbookData_NPCProgressPair
	{
		::System::UInt32 NPCID; // 0x10
		::System::UInt32 Progress; // 0x14
	};
}
