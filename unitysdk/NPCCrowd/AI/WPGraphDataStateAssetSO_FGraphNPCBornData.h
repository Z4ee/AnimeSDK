#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO_FGraphNPCBornData_TypeDefinitionIndex = 78375;

	struct alignas(8) WPGraphDataStateAssetSO_FGraphNPCBornData
	{
		::Il2CppArray<::System::UInt16>* spawnNodeIDList; // 0x10
		::System::UInt16 enterNodeID; // 0x18
	};
}
