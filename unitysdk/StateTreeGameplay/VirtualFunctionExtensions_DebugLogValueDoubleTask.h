#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/DebugLogValueDoubleTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x13458D50)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x13458E80)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x13458F20)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13458DF0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_TICK_OFFSET UNITYSDK_OFFSET(0x13458FC0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_DebugLogValueDoubleTask_TypeDefinitionIndex = 69353;

	class VirtualFunctionExtensions_DebugLogValueDoubleTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::DebugLogValueDoubleTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::DebugLogValueDoubleTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::DebugLogValueDoubleTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::DebugLogValueDoubleTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::DebugLogValueDoubleTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DebugLogValueDoubleTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeGameplay::DebugLogValueDoubleTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::DebugLogValueDoubleTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::DebugLogValueDoubleTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DebugLogValueDoubleTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGVALUEDOUBLETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
