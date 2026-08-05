#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/DebugLogValueFloatTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x18B49A30)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x18B49B60)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x18B49C00)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x18B49AD0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_TICK_OFFSET UNITYSDK_OFFSET(0x18B49CA0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_DebugLogValueFloatTask_TypeDefinitionIndex = 70612;

	class VirtualFunctionExtensions_DebugLogValueFloatTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::DebugLogValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::DebugLogValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::DebugLogValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DebugLogValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEFLOATTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
