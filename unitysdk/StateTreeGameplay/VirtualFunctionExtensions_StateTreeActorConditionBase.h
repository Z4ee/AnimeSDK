#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorConditionBase.h"
#include "unitysdk/System/Object.h"

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1B5A87F0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeActorConditionBase_TypeDefinitionIndex = 85476;

	class VirtualFunctionExtensions_StateTreeActorConditionBase : public ::System::Object
	{
	public:
		static ::System::Boolean TestCondition(::StateTreeGameplay::StateTreeActorConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::StateTreeActorConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
