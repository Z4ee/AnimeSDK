#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6DA880)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityObstacleFlushProcessor_ExecuteJob_TypeDefinitionIndex = 57224;

	struct alignas(8) NPCAbilityObstacleFlushProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transform; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> _movementFragments; // 0x20
		::Unity::Collections::NativeArray_1<::System::UInt32> _entityIDs; // 0x30
		::Unity::Collections::NativeArray_1<::System::Boolean> _bIsUsing; // 0x40
		::Unity::Collections::NativeArray_1<::Foundation::Container::NativeHashSetElementId> _entityMapIds; // 0x50
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> _obstacleLocation; // 0x60
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x70
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _entityMap; // 0xC0

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYOBSTACLEFLUSHPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this);
		}
	};
}
