#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/MoveToTask.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x10642370)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x10642440)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x106422D0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_LINK_OFFSET UNITYSDK_OFFSET(0x10642280)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x10642510)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_TICK_OFFSET UNITYSDK_OFFSET(0x106425D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_MoveToTask_TypeDefinitionIndex = 75630;

	class VirtualFunctionExtensions_MoveToTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::MoveToTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::MoveToTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::MoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::MoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_MOVETOTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
