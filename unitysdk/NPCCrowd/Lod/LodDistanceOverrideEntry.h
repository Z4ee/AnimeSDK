#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfig_RoadGraphType.h"
#include "unitysdk/NPCCrowd/Lod/LodLevelOverrideEntry.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_LOD_LODDISTANCEOVERRIDEENTRY_GETENTRY_OFFSET UNITYSDK_OFFSET(0x6533A0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int LodDistanceOverrideEntry_TypeDefinitionIndex = 86679;

	struct alignas(4) LodDistanceOverrideEntry
	{
		::NPCCrowd::AI::PathGraphConfig_RoadGraphType roadType; // 0x10
		::NPCCrowd::Lod::LodLevelOverrideEntry lod1; // 0x14
		::NPCCrowd::Lod::LodLevelOverrideEntry lod2; // 0x1C
		::NPCCrowd::Lod::LodLevelOverrideEntry lod3; // 0x24
		::NPCCrowd::Lod::LodLevelOverrideEntry lod4; // 0x2C
		::System::Boolean overrideLodItemBias; // 0x34
		::System::Single lodItemBias; // 0x38

		::NPCCrowd::Lod::LodLevelOverrideEntry GetEntry(::System::Int32 lodIndex)
		{
			return ((::NPCCrowd::Lod::LodLevelOverrideEntry(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_LODDISTANCEOVERRIDEENTRY_GETENTRY_OFFSET))(this, lodIndex);
		}
	};
}
