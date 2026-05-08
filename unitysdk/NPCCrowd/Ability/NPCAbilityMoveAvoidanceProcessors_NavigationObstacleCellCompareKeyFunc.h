#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityMoveAvoidanceProcessors_NavigationObstacleCellCompareKeyFunc___cellSize_e__FixedBuffer.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_COMPARE_OFFSET UNITYSDK_OFFSET(0x6B38B0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_FOUNDATION_CONTAINER_IHIERARCHICALHASHGRIDCOMPAREKEYFUNC_NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM__GETKEY_OFFSET UNITYSDK_OFFSET(0x6B3910)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_GETCELLKEY_OFFSET UNITYSDK_OFFSET(0x6B3690)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_GETKEY_OFFSET UNITYSDK_OFFSET(0x6B37A0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x6B3520)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_NavigationObstacleCellCompareKeyFunc_TypeDefinitionIndex = 41976;

	struct alignas(8) NPCAbilityMoveAvoidanceProcessors_NavigationObstacleCellCompareKeyFunc
	{
		::UnityEngine::Vector3 _center; // 0x10
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data; // 0x20
		::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_NavigationObstacleCellCompareKeyFunc___cellSize_e__FixedBuffer _cellSize; // 0x40

		/*
		::System::Void _ctor(::UnityEngine::Bounds bounds, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> grid, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC__CTOR_OFFSET))(this, bounds, grid, data);
		}
		*/

		/*
		::System::Double GetCellKey(::Foundation::Container::CellLocation cell)
		{
			return ((::System::Double(*)(::PVOID, ::Foundation::Container::CellLocation))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_GETCELLKEY_OFFSET))(this, cell);
		}
		*/

		/*
		::System::Double GetKey(::NPCCrowd::Ability::NavigationObstacleItem& item)
		{
			return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_GETKEY_OFFSET))(this, item);
		}
		*/

		::System::Int32 Compare(::System::Double x, ::System::Double y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_COMPARE_OFFSET))(this, x, y);
		}

		/*
		::System::Double Foundation_Container_IHierarchicalHashGridCompareKeyFunc_NPCCrowd_Ability_NavigationObstacleItem__GetKey(::NPCCrowd::Ability::NavigationObstacleItem& item)
		{
			return ((::System::Double(*)(::PVOID, ::NPCCrowd::Ability::NavigationObstacleItem&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_NAVIGATIONOBSTACLECELLCOMPAREKEYFUNC_FOUNDATION_CONTAINER_IHIERARCHICALHASHGRIDCOMPAREKEYFUNC_NPCCROWD_ABILITY_NAVIGATIONOBSTACLEITEM__GETKEY_OFFSET))(this, item);
		}
		*/
	};
}
