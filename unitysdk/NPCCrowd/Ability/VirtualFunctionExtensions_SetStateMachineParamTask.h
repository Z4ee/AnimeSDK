#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/SetStateMachineParamTask.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xFBFC570)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xFBFC4E0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_LINK_OFFSET UNITYSDK_OFFSET(0xFBFC470)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xFBFC610)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_SetStateMachineParamTask_TypeDefinitionIndex = 52550;

	class VirtualFunctionExtensions_SetStateMachineParamTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::SetStateMachineParamTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::SetStateMachineParamTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::SetStateMachineParamTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::SetStateMachineParamTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::SetStateMachineParamTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::SetStateMachineParamTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::NPCCrowd::Ability::SetStateMachineParamTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::SetStateMachineParamTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_SETSTATEMACHINEPARAMTASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}
	};
}
