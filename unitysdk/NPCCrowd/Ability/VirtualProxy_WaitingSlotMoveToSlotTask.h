#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/VirtualProxy_StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xD415240)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xD4152B0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD4151E0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_LINK_OFFSET UNITYSDK_OFFSET(0xD415170)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_TICK_OFFSET UNITYSDK_OFFSET(0xD415320)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xD4153A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_WaitingSlotMoveToSlotTask_TypeDefinitionIndex = 45783;

	class VirtualProxy_WaitingSlotMoveToSlotTask : public ::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTMOVETOSLOTTASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
