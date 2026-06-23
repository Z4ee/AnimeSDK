#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/VirtualProxy_MoveToTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"

namespace StateTreeCore { class StateTreeLinker; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x106FB780)
#define NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x106FB7F0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_LINK_OFFSET UNITYSDK_OFFSET(0x106FB710)
#define NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_TICK_OFFSET UNITYSDK_OFFSET(0x106FB860)
#define NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x106FB8E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_AttractorMoveToTask_TypeDefinitionIndex = 43083;

	class VirtualProxy_AttractorMoveToTask : public ::NPCCrowd::Ability::VirtualProxy_MoveToTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_LINK_OFFSET))(this, self, linker);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_ATTRACTORMOVETOTASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
