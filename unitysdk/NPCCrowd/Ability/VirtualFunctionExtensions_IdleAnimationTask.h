#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/IdleAnimationTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xCD30940)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xCD309E0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xCD308B0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_LINK_OFFSET UNITYSDK_OFFSET(0xCD30840)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_IdleAnimationTask_TypeDefinitionIndex = 76495;

	class VirtualFunctionExtensions_IdleAnimationTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::IdleAnimationTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::IdleAnimationTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::IdleAnimationTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::IdleAnimationTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::IdleAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::IdleAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::IdleAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::IdleAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_IDLEANIMATIONTASK_EXITSTATE_OFFSET))(self, context, transition);
		}
	};
}
