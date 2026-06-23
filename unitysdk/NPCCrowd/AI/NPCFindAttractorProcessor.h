#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xD404DA0)
#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD4040A0)
#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_RETURNTOINITSTATE_OFFSET UNITYSDK_OFFSET(0xD403F60)
#define NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD404FD0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCFindAttractorProcessor_TypeDefinitionIndex = 41340;

	class NPCFindAttractorProcessor : public ::System::Object
	{
	public:
		// static const ::System::Single QueryCD; // 0x0
		// static const ::System::Single ReleaseQueryCD; // 0x0
		// static const ::System::Single QueryCellSize; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void ReturnToInitState(::NPCCrowd::Ability::FNPCAttractorControlFragment& attractorControlData, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAttractorControlFragment&, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_RETURNTOINITSTATE_OFFSET))(attractorControlData, entityID);
		}

		static ::System::Void Execute(::System::Int32 index, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data, ::Unity::Collections::NativeArray_1<::System::UInt32> _EntityIDs, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment>& _attractorControlFragments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>& _navmeshFragments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>& _aiBlackboardFragments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>& _pathFollowFragments)
		{
			return ((::System::Void(*)(::System::Int32, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTE_OFFSET))(index, _obstacleGrid, _data, _EntityIDs, _attractorControlFragments, _navmeshFragments, _aiBlackboardFragments, _pathFollowFragments);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCFINDATTRACTORPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
