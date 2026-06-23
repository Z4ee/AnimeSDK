#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xD5C4A70)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xD5C4B00)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xD5C4B90)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0xD5C4C20)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xD5C4CB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeCrowdTaskBase_TypeDefinitionIndex = 41859;

	class VirtualFunctionExtensions_StateTreeCrowdTaskBase : public ::System::Object
	{
	public:
		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}

		static ::System::Void TriggerTransitions(::NPCCrowd::Ability::StateTreeCrowdTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::StateTreeCrowdTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
	};
}
