#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/WaitingSlotFindTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTFINDTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x11504440)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTFINDTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x115043B0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTFINDTASK_LINK_OFFSET UNITYSDK_OFFSET(0x11504360)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_WaitingSlotFindTask_TypeDefinitionIndex = 51167;

	class VirtualFunctionExtensions_WaitingSlotFindTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::WaitingSlotFindTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::WaitingSlotFindTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTFINDTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::WaitingSlotFindTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::WaitingSlotFindTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTFINDTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::WaitingSlotFindTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::WaitingSlotFindTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTFINDTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
	};
}
