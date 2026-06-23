#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformSubSystem_ExternalObstacleRuntimeData_TypeDefinitionIndex = 48632;

	struct alignas(8) NPCAbilityFlushTransformSubSystem_ExternalObstacleRuntimeData
	{
		::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment obstacleCellLocation; // 0x10
		::Foundation::Container::NativeHashSetElementId entityMapId; // 0x20
		::System::Boolean hasEntityMapId; // 0x28
	};
}
