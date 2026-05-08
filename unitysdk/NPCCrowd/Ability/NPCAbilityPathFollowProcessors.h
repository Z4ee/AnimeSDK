#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xD23D490)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD23CA70)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_INITPATHPROCESSOR_OFFSET UNITYSDK_OFFSET(0xD2356C0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_INITPOINTPROCESSOR_OFFSET UNITYSDK_OFFSET(0xD2345D0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_ISPATHFOLLOWMOVING_OFFSET UNITYSDK_OFFSET(0xD237F70)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0xD23AEC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD23D6C0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS__CTOR_OFFSET UNITYSDK_OFFSET(0xD233F80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessors_TypeDefinitionIndex = 44394;

	class NPCAbilityPathFollowProcessors : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_SpeedScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessors_TypeDefinitionIndex)->GetStaticField(0xEED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS__CCTOR_OFFSET))();
		}

		::System::Boolean IsPathFollowMoving(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_ISPATHFOLLOWMOVING_OFFSET))(this, runtime, idx);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle InitPathProcessor(::System::Collections::Generic::List_1<::System::UInt16>*& pathFollowNodes, ::System::Boolean teleportToFirstPoint, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::System::Int32 idx, ::System::String* style, ::NPCCrowd::NPCIDGeneratorInt* IDGen, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams, ::System::Single randDesiredSpeed)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt16>*&, ::System::Boolean, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32, ::System::String*, ::NPCCrowd::NPCIDGeneratorInt*, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_INITPATHPROCESSOR_OFFSET))(this, pathFollowNodes, teleportToFirstPoint, runtime, parameters, idx, style, IDGen, moveParams, randDesiredSpeed);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle InitPointProcessor(::UnityEngine::Vector3 inAim, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::System::Int32 idx, ::System::String* style, ::NPCCrowd::NPCIDGeneratorInt* IDGen)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::UnityEngine::Vector3, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32, ::System::String*, ::NPCCrowd::NPCIDGeneratorInt*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_INITPOINTPROCESSOR_OFFSET))(this, inAim, runtime, parameters, idx, style, IDGen);
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment>& runtime_pathFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>& runtime_animatorBufferData, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform, ::System::Single currentTime, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTE_OFFSET))(idx, runtime_pathFollow, runtime_moveTarget, runtime_animatorBufferData, runtime_transform, currentTime, deltaTime);
		}

		::System::Void PreExecuteBeforeJob(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::System::Single deltaTime, ::NPCCrowd::NPCIDGeneratorInt* IDGen)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single, ::NPCCrowd::NPCIDGeneratorInt*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_PREEXECUTEBEFOREJOB_OFFSET))(this, runtime, idx, deltaTime, IDGen);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
