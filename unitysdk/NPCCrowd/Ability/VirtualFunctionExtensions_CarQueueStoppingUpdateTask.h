#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CarQueueStoppingUpdateTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUESTOPPINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x12D0C1B0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUESTOPPINGUPDATETASK_LINK_OFFSET UNITYSDK_OFFSET(0x12D0C0D0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUESTOPPINGUPDATETASK_TICK_OFFSET UNITYSDK_OFFSET(0x12D0C2A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_CarQueueStoppingUpdateTask_TypeDefinitionIndex = 80672;

	class VirtualFunctionExtensions_CarQueueStoppingUpdateTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CarQueueStoppingUpdateTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUESTOPPINGUPDATETASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CarQueueStoppingUpdateTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUESTOPPINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::CarQueueStoppingUpdateTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::CarQueueStoppingUpdateTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUESTOPPINGUPDATETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
