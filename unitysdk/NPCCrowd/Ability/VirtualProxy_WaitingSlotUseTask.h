#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeTaskBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xD449590)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD449530)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_LINK_OFFSET UNITYSDK_OFFSET(0xD4494C0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_TICK_OFFSET UNITYSDK_OFFSET(0xD449600)
#define NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xD449680)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_WaitingSlotUseTask_TypeDefinitionIndex = 46936;

	class VirtualProxy_WaitingSlotUseTask : public ::StateTreeCore::VirtualProxy_StateTreeTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_WAITINGSLOTUSETASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
