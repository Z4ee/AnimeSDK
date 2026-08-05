#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FollowMoveTask.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x13DE8490)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x13DE8540)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13DE83F0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_LINK_OFFSET UNITYSDK_OFFSET(0x13DE8380)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x13DE85F0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_TICK_OFFSET UNITYSDK_OFFSET(0x13DE86A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_FollowMoveTask_TypeDefinitionIndex = 44633;

	class VirtualFunctionExtensions_FollowMoveTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::FollowMoveTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::FollowMoveTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::FollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::FollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_FOLLOWMOVETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
