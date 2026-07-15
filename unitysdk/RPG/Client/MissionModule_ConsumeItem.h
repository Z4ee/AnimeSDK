#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class MissionItemConfig; }

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ConsumeItem_TypeDefinitionIndex = 63199;

	struct alignas(8) MissionModule_ConsumeItem
	{
		::System::Boolean IsShowConsumeFinishTips; // 0x10
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* ItemList; // 0x18
	};
}
