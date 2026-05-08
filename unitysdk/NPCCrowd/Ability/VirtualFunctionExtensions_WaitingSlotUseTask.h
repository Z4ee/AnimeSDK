#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/WaitingSlotUseTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0xF4ED420)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF4ED390)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_LINK_OFFSET UNITYSDK_OFFSET(0xF4ED320)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_TICK_OFFSET UNITYSDK_OFFSET(0xF4ED4C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_WaitingSlotUseTask_TypeDefinitionIndex = 56292;

	class VirtualFunctionExtensions_WaitingSlotUseTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::WaitingSlotUseTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::WaitingSlotUseTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::WaitingSlotUseTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::WaitingSlotUseTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::WaitingSlotUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::WaitingSlotUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::WaitingSlotUseTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::WaitingSlotUseTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_WAITINGSLOTUSETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
