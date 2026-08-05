#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/MoveToPositionTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_MOVETOPOSITIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x134592C0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_MOVETOPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13459230)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_MOVETOPOSITIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0x13459360)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_MoveToPositionTask_TypeDefinitionIndex = 42413;

	class VirtualFunctionExtensions_MoveToPositionTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::MoveToPositionTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::MoveToPositionTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_MOVETOPOSITIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::MoveToPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::MoveToPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_MOVETOPOSITIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::MoveToPositionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::MoveToPositionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_MOVETOPOSITIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
