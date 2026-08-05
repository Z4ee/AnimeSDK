#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GameplayTask/EAbilityActionTaskState.h"
#include "unitysdk/NPCCrowd/GameplayTask/EActionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS_GETENUMNAME_1_OFFSET UNITYSDK_OFFSET(0x12D2EDB0)
#define NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x12D2ED70)
#define NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D2EF30)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex = 54892;

	class NPCAbilityActionTaskBaseEnumUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AwaitingActivation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x43290);
		}
		static ::System::String** StaticGet_Active()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x43298);
		}
		static ::System::String** StaticGet_Paused()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x432A0);
		}
		static ::System::String** StaticGet_Finished()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x432A8);
		}
		static ::System::String** StaticGet_Uninitialized()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x432B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* GetEnumName(::NPCCrowd::GameplayTask::EActionType type)
		{
			return ((::System::String*(*)(::NPCCrowd::GameplayTask::EActionType))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS_GETENUMNAME_OFFSET))(type);
		}

		static ::System::String* GetEnumName_1(::NPCCrowd::GameplayTask::EAbilityActionTaskState state)
		{
			return ((::System::String*(*)(::NPCCrowd::GameplayTask::EAbilityActionTaskState))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS_GETENUMNAME_1_OFFSET))(state);
		}
	};
}
