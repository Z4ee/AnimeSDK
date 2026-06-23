#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/Object.h"

#define STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREECONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1E1DC940)

namespace StateTreeCore
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeConditionBase_TypeDefinitionIndex = 30918;

	class VirtualFunctionExtensions_StateTreeConditionBase : public ::System::Object
	{
	public:
		static ::System::Boolean TestCondition(::StateTreeCore::StateTreeConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREECORE_VIRTUALFUNCTIONEXTENSIONS_STATETREECONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
