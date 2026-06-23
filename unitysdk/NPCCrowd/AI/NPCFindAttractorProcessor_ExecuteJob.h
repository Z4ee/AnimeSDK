#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x731E70)
#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x731E60)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCFindAttractorProcessor_ExecuteJob_TypeDefinitionIndex = 41341;

	struct alignas(8) NPCFindAttractorProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x20
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data; // 0x70
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transformFragments; // 0x90
		::Unity::Collections::NativeArray_1<::System::UInt32> _EntityIDs; // 0xA0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> _attractorControlFragments; // 0xB0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> _navmeshFragments; // 0xC0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> _aiBlackboardFragments; // 0xD0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> _pathFollowFragments; // 0xE0
		::System::Single deltaTime; // 0xF0
		::System::Single curTime; // 0xF4

		::System::Void _ctor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Single deltaTime, ::System::Single curTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, deltaTime, curTime);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
