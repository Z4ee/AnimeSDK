#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"

#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1BEF5390)
#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1BEF5420)
#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BEF54B0)
#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1BEF5540)
#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1BEF55D0)

namespace StateTreeCore
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeTaskBase_TypeDefinitionIndex = 28401;

	class VirtualFunctionExtensions_StateTreeTaskBase : public ::System::Object
	{
	public:
		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_TICK_OFFSET))(self, context, deltaTime);
		}

		static ::System::Void TriggerTransitions(::StateTreeCore::StateTreeTaskBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreeTaskBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREETASKBASE_TRIGGERTRANSITIONS_OFFSET))(self, context);
		}
	};
}
