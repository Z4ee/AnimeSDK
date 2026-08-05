#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/VirtualProxy_StateTreeCrowdConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xE934A00)
#define NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xE934990)
#define NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xE934A60)
#define NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xE934AD0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_PathFollowIsMovingCondition_TypeDefinitionIndex = 74394;

	class VirtualProxy_PathFollowIsMovingCondition : public ::NPCCrowd::Ability::VirtualProxy_StateTreeCrowdConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_PATHFOLLOWISMOVINGCONDITION_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
