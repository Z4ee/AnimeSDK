#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GameplayTask/EAbilityActionTaskState.h"
#include "unitysdk/NPCCrowd/GameplayTask/EActionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS_GETENUMNAME_1_OFFSET UNITYSDK_OFFSET(0xFFCBFA0)
#define NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0xFFCBF60)
#define NPCCROWD_GAMEPLAYTASK_NPCABILITYACTIONTASKBASEENUMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFCC130)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex = 50691;

	class NPCAbilityActionTaskBaseEnumUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AwaitingActivation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x41B00);
		}
		static ::System::String** StaticGet_Paused()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x41B08);
		}
		static ::System::String** StaticGet_Active()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x41B10);
		}
		static ::System::String** StaticGet_Finished()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x41B18);
		}
		static ::System::String** StaticGet_Uninitialized()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityActionTaskBaseEnumUtils_TypeDefinitionIndex)->GetStaticField(0x41B20);
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
