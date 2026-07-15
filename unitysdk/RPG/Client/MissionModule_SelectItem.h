#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_SelectItem_TypeDefinitionIndex = 63198;

	struct alignas(8) MissionModule_SelectItem
	{
		::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* ItemSelectConfig; // 0x10
		::RPG::GameCore::MissionItemConfigList* PlayerSelectList; // 0x18
	};
}
