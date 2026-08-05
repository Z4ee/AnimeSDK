#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeTaskBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"

#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1F1CB710)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1F1CB7B0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F1CB850)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1F1CB8F0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1F1CB9A0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1CBA40)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_StateTreeActorTaskBase_TypeDefinitionIndex = 75665;

	class VirtualProxy_StateTreeActorTaskBase : public ::StateTreeCore::VirtualProxy_StateTreeTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE__CTOR_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void StateCompleted(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_STATECOMPLETED_OFFSET))(this, self, context, completionStatus, completedActiveStates);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::System::Void TriggerTransitions(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORTASKBASE_TRIGGERTRANSITIONS_OFFSET))(this, self, context);
		}
	};
}
