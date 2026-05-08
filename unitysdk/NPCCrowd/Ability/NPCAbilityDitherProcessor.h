#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCDitherStateFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xBDD70A0)
#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDD5BE0)
#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_FINDCLOSESTENTITY_OFFSET UNITYSDK_OFFSET(0xBDD6990)
#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_GETCLOSESTENTITYDISTANCE_OFFSET UNITYSDK_OFFSET(0xBDD5EC0)
#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xBDD5DC0)
#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD72B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityDitherProcessor_TypeDefinitionIndex = 64297;

	class NPCAbilityDitherProcessor : public ::System::Object
	{
	public:
		// static const ::System::Single QueryCellSize; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Execute(::System::Int32 index, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCDitherStateFragment>& ditherStateFragments, ::Unity::Collections::NativeArray_1<::System::UInt32> entityIdFragments, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> obstacleGrid, ::System::Single ditherRadius)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCDitherStateFragment>&, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTE_OFFSET))(index, ditherStateFragments, entityIdFragments, entityMap, obstacleGrid, ditherRadius);
		}

		static ::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_GETNATIVEDATA_OFFSET))(entityId, entityMap);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Single> GetClosestEntityDistance(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> obstacleGrid)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Single>(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_GETCLOSESTENTITYDISTANCE_OFFSET))(entityId, entityMap, obstacleGrid);
		}

		static ::System::Int32 FindClosestEntity(::System::UInt32 entityId, ::UnityEngine::Vector3 position, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> obstacleGrid)
		{
			return ((::System::Int32(*)(::System::UInt32, ::UnityEngine::Vector3, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_FINDCLOSESTENTITY_OFFSET))(entityId, position, entityMap, obstacleGrid);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
