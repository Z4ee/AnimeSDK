#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_PathGraphLodOverrideData_TypeDefinitionIndex = 44640;

	struct alignas(4) NPCCrowdLodManager_PathGraphLodOverrideData
	{
		::System::Int32 paramKey; // 0x10
		::System::Boolean overrideLodItemBias; // 0x14
		::System::Single lodItemBias; // 0x18
	};
}
