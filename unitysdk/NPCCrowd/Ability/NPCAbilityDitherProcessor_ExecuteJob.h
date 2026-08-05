#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCDitherStateFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbilityDitherParameters; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x754C80)
#define NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x754C70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityDitherProcessor_ExecuteJob_TypeDefinitionIndex = 81400;

	struct alignas(8) NPCAbilityDitherProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x20
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data; // 0x70
		::Unity::Collections::NativeArray_1<::System::UInt32> _entityIdFragments; // 0x90
		::System::Single _ditherRadius; // 0xA0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCDitherStateFragment> _ditherStateFragments; // 0xA8

		::System::Void _ctor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::NPCCrowd::Ability::NPCAbilityDitherParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityDitherParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, parameters);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYDITHERPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
