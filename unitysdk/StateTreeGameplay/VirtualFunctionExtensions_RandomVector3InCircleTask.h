#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/RandomVector3InCircleTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INCIRCLETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x19E38120)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INCIRCLETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x19E380A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_RandomVector3InCircleTask_TypeDefinitionIndex = 39878;

	class VirtualFunctionExtensions_RandomVector3InCircleTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::RandomVector3InCircleTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::RandomVector3InCircleTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INCIRCLETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::RandomVector3InCircleTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::RandomVector3InCircleTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVECTOR3INCIRCLETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
	};
}
