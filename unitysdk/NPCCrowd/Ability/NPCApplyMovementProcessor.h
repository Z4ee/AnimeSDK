#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x11501FB0)
#define NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11501290)
#define NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x11502230)
#define NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11502220)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCApplyMovementProcessor_TypeDefinitionIndex = 61110;

	class NPCApplyMovementProcessor : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_bIsFreezeMovement()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCApplyMovementProcessor_TypeDefinitionIndex)->GetStaticField(0x11330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>& runtime_transform, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment>& runtime_movement, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> AnimationFragments, ::Unity::Collections::NativeArray_1<::System::UInt32> EntityIDs, ::System::Single currentTime, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR_EXECUTE_OFFSET))(idx, runtime_transform, runtime_movement, runtime_moveTarget, AnimationFragments, EntityIDs, currentTime, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAPPLYMOVEMENTPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
