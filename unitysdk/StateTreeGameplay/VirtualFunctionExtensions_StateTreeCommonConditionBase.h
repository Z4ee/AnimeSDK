#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeGameplay/StateTreeCommonConditionBase.h"
#include "unitysdk/System/Object.h"

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x18B49D40)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeCommonConditionBase_TypeDefinitionIndex = 65444;

	class VirtualFunctionExtensions_StateTreeCommonConditionBase : public ::System::Object
	{
	public:
		static ::System::Boolean TestCondition(::StateTreeGameplay::StateTreeCommonConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::StateTreeCommonConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREECOMMONCONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
