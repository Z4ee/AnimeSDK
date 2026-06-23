#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/PlayAnimationTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_PLAYANIMATIONTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x16832CA0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_PLAYANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x16832C10)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_PLAYANIMATIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0x16832D40)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_PlayAnimationTask_TypeDefinitionIndex = 67153;

	class VirtualFunctionExtensions_PlayAnimationTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::PlayAnimationTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::PlayAnimationTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_PLAYANIMATIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::PlayAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::PlayAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_PLAYANIMATIONTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::PlayAnimationTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::PlayAnimationTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_PLAYANIMATIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
