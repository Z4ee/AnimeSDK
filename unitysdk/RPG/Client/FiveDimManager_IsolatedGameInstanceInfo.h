#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_IsolatedGameInstanceInfo_TypeDefinitionIndex = 57822;

	struct alignas(4) FiveDimManager_IsolatedGameInstanceInfo
	{
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::Boolean ShowSameGroupEntities; // 0x18
	};
}
