#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/PlayerAvatarDistanceCondition.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0xFB556D0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xFB55800)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xFB55790)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xFB55890)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_PlayerAvatarDistanceCondition_TypeDefinitionIndex = 55167;

	class VirtualFunctionExtensions_PlayerAvatarDistanceCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::PlayerAvatarDistanceCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PlayerAvatarDistanceCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PLAYERAVATARDISTANCECONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
