#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/SendGraphEventTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_SENDGRAPHEVENTTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x19E38230)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_SENDGRAPHEVENTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x19E381B0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_SENDGRAPHEVENTTASK_TICK_OFFSET UNITYSDK_OFFSET(0x19E382C0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_SendGraphEventTask_TypeDefinitionIndex = 87144;

	class VirtualFunctionExtensions_SendGraphEventTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::SendGraphEventTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::SendGraphEventTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_SENDGRAPHEVENTTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::SendGraphEventTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::SendGraphEventTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_SENDGRAPHEVENTTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::SendGraphEventTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::SendGraphEventTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_SENDGRAPHEVENTTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
