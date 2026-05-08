#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeNodeBase.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"

#define STATETREECORE_VIRTUALPROXY_STATETREECONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C539990)
#define STATETREECORE_VIRTUALPROXY_STATETREECONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5399F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int VirtualProxy_StateTreeConditionBase_TypeDefinitionIndex = 28269;

	class VirtualProxy_StateTreeConditionBase : public ::StateTreeCore::VirtualProxy_StateTreeNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREECONDITIONBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALPROXY_STATETREECONDITIONBASE_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
