#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/AttractorMoveToTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"

namespace StateTreeCore { class StateTreeLinker; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x12D0BE80)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x12D0BF40)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_LINK_OFFSET UNITYSDK_OFFSET(0x12D0BE10)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_TICK_OFFSET UNITYSDK_OFFSET(0x12D0C000)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_AttractorMoveToTask_TypeDefinitionIndex = 56197;

	class VirtualFunctionExtensions_AttractorMoveToTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_LINK_OFFSET))(self, linker);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::AttractorMoveToTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorMoveToTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORMOVETOTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
