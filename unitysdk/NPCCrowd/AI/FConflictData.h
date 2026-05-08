#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int FConflictData_TypeDefinitionIndex = 81157;

	struct alignas(4) FConflictData
	{
		::System::Int32 conflictedArea; // 0x10
		::System::Int32 serverConflictedAttractorArea; // 0x14
	};
}
