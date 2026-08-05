#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/LookAtIKTask.h"
#include "unitysdk/StateTreeCore/StateTreeActiveStates.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xF602E70)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF602DE0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_LINK_OFFSET UNITYSDK_OFFSET(0xF602D70)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xF602F10)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_TICK_OFFSET UNITYSDK_OFFSET(0xF602FE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_LookAtIKTask_TypeDefinitionIndex = 72665;

	class VirtualFunctionExtensions_LookAtIKTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::LookAtIKTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::LookAtIKTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void StateCompleted(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeRunStatus completionStatus, ::StateTreeCore::StateTreeActiveStates& completedActiveStates)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeRunStatus, ::StateTreeCore::StateTreeActiveStates&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_STATECOMPLETED_OFFSET))(self, context, completionStatus, completedActiveStates);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::LookAtIKTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::LookAtIKTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_LOOKATIKTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
