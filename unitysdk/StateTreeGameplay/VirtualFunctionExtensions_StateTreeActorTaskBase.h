#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorTaskBase.h"
#include "unitysdk/System/Object.h"

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E82ABA0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1E82AC30)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E82ACF0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1E82ADC0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1E82AE50)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeActorTaskBase_TypeDefinitionIndex = 48911;

	class VirtualFunctionExtensions_StateTreeActorTaskBase : public ::System::Object
	{
	public:
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}

		static ::System::Void TriggerTransitions(::StateTreeGameplay::StateTreeActorTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeGameplay::StateTreeActorTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
	};
}
