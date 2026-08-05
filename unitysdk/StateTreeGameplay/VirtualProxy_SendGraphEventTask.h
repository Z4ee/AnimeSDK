#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/VirtualProxy_StateTreeActorTaskBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1C13EF40)
#define STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1C13EEE0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1C13EFB0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13F060)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_SendGraphEventTask_TypeDefinitionIndex = 40248;

	class VirtualProxy_SendGraphEventTask : public ::StateTreeGameplay::VirtualProxy_StateTreeActorTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK__CTOR_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_SENDGRAPHEVENTTASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
