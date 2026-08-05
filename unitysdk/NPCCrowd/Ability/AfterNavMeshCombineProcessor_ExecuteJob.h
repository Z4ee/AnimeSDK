#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineSnapshot.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityGhostLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityStandingSteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCDitherStateFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySmoothOrientationProcessors_OrientationParameters.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbilityParameters; }

#define NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5EC7F0)
#define NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTEJOB_SETMOVEMENTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x5EC800)
#define NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTEJOB_SETORIENTATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x5EC810)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AfterNavMeshCombineProcessor_ExecuteJob_TypeDefinitionIndex = 48431;

	struct alignas(8) AfterNavMeshCombineProcessor_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x10
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters runtimeParameters; // 0x20
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors_OrientationParameters orientationParams; // 0x48
		::System::Single currentTime; // 0x68
		::System::Single deltaTime; // 0x6C
		::System::Single ditherRadius; // 0x70
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap; // 0x78
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> obstacleGrid; // 0x98
		::Unity::Collections::NativeArray_1<::System::UInt32> entityIds; // 0xE8
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment> runtime_steering; // 0xF8
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x108
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> runtime_pathFollowV2; // 0x118
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment> runtime_splineFollow; // 0x128
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x138
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> runtime_animatorBufferData; // 0x148
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityStandingSteeringFragment> runtime_standingSteering; // 0x158
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityGhostLocationFragment> runtime_ghost; // 0x168
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> runtime_movement; // 0x178
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCDitherStateFragment> ditherStateFragments; // 0x188
		::NPCCrowd::Ability::CrowdSplineSnapshot splineSnapshot; // 0x198

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}

		::System::Void SetMovementParameters(::NPCCrowd::Ability::NPCAbilityParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTEJOB_SETMOVEMENTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void SetOrientationParameters(::NPCCrowd::Ability::NPCAbilityParameters* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityParameters*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_AFTERNAVMESHCOMBINEPROCESSOR_EXECUTEJOB_SETORIENTATIONPARAMETERS_OFFSET))(this, parameters);
		}
	};
}
