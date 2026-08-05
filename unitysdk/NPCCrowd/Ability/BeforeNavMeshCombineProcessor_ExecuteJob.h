#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCGameplayTagActionRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCPathMaskTagRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityBehavioursDefine.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySmoothOrientationProcessors_OrientationParameters.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_BEFORENAVMESHCOMBINEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7321A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int BeforeNavMeshCombineProcessor_ExecuteJob_TypeDefinitionIndex = 71109;

	struct alignas(8) BeforeNavMeshCombineProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x10
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters runtimeParameters; // 0x20
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors_OrientationParameters orientationParams; // 0x48
		::System::Single currentTime; // 0x68
		::System::Single deltaTime; // 0x6C
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap; // 0x70
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> obstacleGrid; // 0x90
		::NPCCrowd::Ability::NPCAbilityBehavioursDefine behavioursDefine; // 0xE0
		::Unity::Collections::NativeArray_1<::System::UInt32> entityIds; // 0x110
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment> runtime_steering; // 0x120
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_lastTransform; // 0x130
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x140
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> runtime_pathFollowV2; // 0x150
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> runtime_splineFollow; // 0x160
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x170
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> runtime_animatorBufferData; // 0x180
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> runtime_blackBoard; // 0x190
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> runtime_navmesh; // 0x1A0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment> runtime_montage; // 0x1B0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> runtime_attractorControlFragments; // 0x1C0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment> runtime_pathMaskTagRuntime; // 0x1D0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment> runtime_gameplayTagActionRuntime; // 0x1E0

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_BEFORENAVMESHCOMBINEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
