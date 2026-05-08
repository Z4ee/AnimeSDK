#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeTaskBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xFBFC150)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK_LINK_OFFSET UNITYSDK_OFFSET(0xFBFC050)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK_TICK_OFFSET UNITYSDK_OFFSET(0xFBFC250)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xFBFC6E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_CarQueueStoppingUpdateTask_TypeDefinitionIndex = 76379;

	class VirtualProxy_CarQueueStoppingUpdateTask : public ::StateTreeCore::VirtualProxy_StateTreeTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CARQUEUESTOPPINGUPDATETASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
