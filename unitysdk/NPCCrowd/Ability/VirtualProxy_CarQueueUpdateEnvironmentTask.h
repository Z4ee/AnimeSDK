#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/VirtualProxy_StateTreeCrowdTaskBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA678860)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK_LINK_OFFSET UNITYSDK_OFFSET(0xA6787F0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA6788C0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA678940)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_CarQueueUpdateEnvironmentTask_TypeDefinitionIndex = 85551;

	class VirtualProxy_CarQueueUpdateEnvironmentTask : public ::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUEUPDATEENVIRONMENTTASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
