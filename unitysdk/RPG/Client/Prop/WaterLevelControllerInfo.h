#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelControllerInfo_TypeDefinitionIndex = 78446;

	struct alignas(4) WaterLevelControllerInfo
	{
		::System::Int32 WaterLevelIndex; // 0x10
		::System::Int32 WaterLevelControllerAnimState; // 0x14
	};
}
