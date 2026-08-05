#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/GetConditionalValueFloatTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1C13E930)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1C13EA80)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1C13EB60)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1C13EA00)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1C13EC30)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_GetConditionalValueFloatTask_TypeDefinitionIndex = 68611;

	class VirtualFunctionExtensions_GetConditionalValueFloatTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::GetConditionalValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::GetConditionalValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::GetConditionalValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::GetConditionalValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_GETCONDITIONALVALUEFLOATTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
