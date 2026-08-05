#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/AddValueFloatOverTimeTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x13458AC0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x13458BE0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13458B60)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_TICK_OFFSET UNITYSDK_OFFSET(0x13458CD0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_AddValueFloatOverTimeTask_TypeDefinitionIndex = 54047;

	class VirtualFunctionExtensions_AddValueFloatOverTimeTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::AddValueFloatOverTimeTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::AddValueFloatOverTimeTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::AddValueFloatOverTimeTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::AddValueFloatOverTimeTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::AddValueFloatOverTimeTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_ADDVALUEFLOATOVERTIMETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
