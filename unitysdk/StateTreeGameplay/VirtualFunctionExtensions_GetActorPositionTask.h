#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/GetActorPositionTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETACTORPOSITIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x134590F0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETACTORPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13459060)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETACTORPOSITIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0x13459190)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_GetActorPositionTask_TypeDefinitionIndex = 87297;

	class VirtualFunctionExtensions_GetActorPositionTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::GetActorPositionTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::GetActorPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETACTORPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::GetActorPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetActorPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETACTORPOSITIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::GetActorPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetActorPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETACTORPOSITIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
