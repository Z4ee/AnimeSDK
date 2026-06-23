#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/DelaySecondsTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1AC77C90)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1AC77DB0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1AC77D30)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1AC77E80)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_DelaySecondsTask_TypeDefinitionIndex = 68134;

	class VirtualFunctionExtensions_DelaySecondsTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::DelaySecondsTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::DelaySecondsTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::DelaySecondsTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::DelaySecondsTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::DelaySecondsTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DelaySecondsTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::DelaySecondsTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::DelaySecondsTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_DELAYSECONDSTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
