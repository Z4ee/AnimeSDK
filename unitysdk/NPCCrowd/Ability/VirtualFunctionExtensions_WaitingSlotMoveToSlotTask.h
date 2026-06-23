#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/WaitingSlotMoveToSlotTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0xD5C4E60)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xD5C4F00)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD5C4DD0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_LINK_OFFSET UNITYSDK_OFFSET(0xD5C4D60)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_TICK_OFFSET UNITYSDK_OFFSET(0xD5C4FA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_WaitingSlotMoveToSlotTask_TypeDefinitionIndex = 40641;

	class VirtualFunctionExtensions_WaitingSlotMoveToSlotTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::WaitingSlotMoveToSlotTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTMOVETOSLOTTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
