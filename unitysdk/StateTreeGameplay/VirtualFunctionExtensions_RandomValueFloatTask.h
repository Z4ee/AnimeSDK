#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/RandomValueFloatTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1C13ED10)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1C13EE40)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1C13EDB0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_RandomValueFloatTask_TypeDefinitionIndex = 54977;

	class VirtualFunctionExtensions_RandomValueFloatTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::RandomValueFloatTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::RandomValueFloatTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVALUEFLOATTASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::RandomValueFloatTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::RandomValueFloatTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::RandomValueFloatTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::RandomValueFloatTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_RANDOMVALUEFLOATTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
	};
}
