#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/NavmeshToPathFollowTask.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xD8888C0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xD888960)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD888830)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_LINK_OFFSET UNITYSDK_OFFSET(0xD8887C0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xD888A00)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_TICK_OFFSET UNITYSDK_OFFSET(0xD888AE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_NavmeshToPathFollowTask_TypeDefinitionIndex = 45863;

	class VirtualFunctionExtensions_NavmeshToPathFollowTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::NavmeshToPathFollowTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NavmeshToPathFollowTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::NavmeshToPathFollowTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::NavmeshToPathFollowTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::NavmeshToPathFollowTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::NavmeshToPathFollowTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::NavmeshToPathFollowTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NavmeshToPathFollowTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::NPCCrowd::Ability::NavmeshToPathFollowTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NavmeshToPathFollowTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::NavmeshToPathFollowTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::NavmeshToPathFollowTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_NAVMESHTOPATHFOLLOWTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
