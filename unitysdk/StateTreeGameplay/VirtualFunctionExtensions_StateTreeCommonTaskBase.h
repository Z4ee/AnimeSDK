#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonTaskBase.h"
#include "unitysdk/System/Object.h"

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1DE8DE80)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1DE8DF10)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DE8DFA0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1DE8E070)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1DE8E100)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeCommonTaskBase_TypeDefinitionIndex = 61165;

	class VirtualFunctionExtensions_StateTreeCommonTaskBase : public ::System::Object
	{
	public:
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}

		static ::System::Void TriggerTransitions(::StateTreeGameplay::StateTreeCommonTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeCommonTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
	};
}
