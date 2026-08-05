#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/PathFollowMoveTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xF0D4550)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xF0D45E0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF0D44C0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_LINK_OFFSET UNITYSDK_OFFSET(0xF0D4450)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_PathFollowMoveTask_TypeDefinitionIndex = 76864;

	class VirtualFunctionExtensions_PathFollowMoveTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::PathFollowMoveTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PathFollowMoveTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::PathFollowMoveTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::PathFollowMoveTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::PathFollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::PathFollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::PathFollowMoveTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::PathFollowMoveTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWMOVETASK_EXITSTATE_OFFSET))(self, context, transition);
		}
	};
}
