#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeConditionBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"

#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREECOMMONCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x143B8330)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREECOMMONCONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x143B83D0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_StateTreeCommonConditionBase_TypeDefinitionIndex = 80817;

	class VirtualProxy_StateTreeCommonConditionBase : public ::StateTreeCore::VirtualProxy_StateTreeConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREECOMMONCONDITIONBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREECOMMONCONDITIONBASE_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
