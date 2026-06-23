#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeNodeBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"

#define STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E279950)
#define STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1E2799B0)
#define STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E279A00)
#define STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1E279A50)
#define STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_TRIGGERTRANSITIONS_OFFSET UNITYSDK_OFFSET(0x1E279AB0)
#define STATETREECORE_VIRTUALPROXY_STATETREETASKBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E279B00)

namespace StateTreeCore
{
	inline static constexpr unsigned int VirtualProxy_StateTreeTaskBase_TypeDefinitionIndex = 31057;

	class VirtualProxy_StateTreeTaskBase : public ::StateTreeCore::VirtualProxy_StateTreeNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREETASKBASE__CTOR_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void StateCompleted(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_STATECOMPLETED_OFFSET))(this, self, context, completionStatus, completedActiveStates);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_TICK_OFFSET))(this, self, context, deltaTime);
		}

		::System::Void TriggerTransitions(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREETASKBASE_TRIGGERTRANSITIONS_OFFSET))(this, self, context);
		}
	};
}
