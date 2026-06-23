#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/AIActionProcessor_JobData.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_AI_AIACTIONPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xE8A0CC0)
#define NPCCROWD_AI_AIACTIONPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE8A02F0)
#define NPCCROWD_AI_AIACTIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A0F70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionProcessor_TypeDefinitionIndex = 66679;

	class AIActionProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::System::UInt32> _EntityIDs, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>& runtime_blackBoard, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>& runtime_navmesh, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>& runtime_pathFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>& runtime_animatorBufferData, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment>& runtime_attractorControlFragments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment>& runtime_montage, ::NPCCrowd::AI::AIActionProcessor_JobData job, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment>&, ::NPCCrowd::AI::AIActionProcessor_JobData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPROCESSOR_EXECUTE_OFFSET))(idx, _EntityIDs, runtime_transform, runtime_blackBoard, runtime_navmesh, runtime_pathFollow, runtime_moveTarget, runtime_animatorBufferData, runtime_attractorControlFragments, runtime_montage, job, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
