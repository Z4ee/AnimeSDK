#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeConditionBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF4ED5E0)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xF4ED570)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xF4ED640)
#define NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xF4ED6B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_CheckIsFollowingCondition_TypeDefinitionIndex = 76934;

	class VirtualProxy_CheckIsFollowingCondition : public ::StateTreeCore::VirtualProxy_StateTreeConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_CHECKISFOLLOWINGCONDITION_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
