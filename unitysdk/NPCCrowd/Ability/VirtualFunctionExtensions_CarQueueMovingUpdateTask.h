#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CarQueueMovingUpdateTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEMOVINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x11B196F0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEMOVINGUPDATETASK_LINK_OFFSET UNITYSDK_OFFSET(0x11B19680)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEMOVINGUPDATETASK_TICK_OFFSET UNITYSDK_OFFSET(0x11B19780)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_CarQueueMovingUpdateTask_TypeDefinitionIndex = 57946;

	class VirtualFunctionExtensions_CarQueueMovingUpdateTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::CarQueueMovingUpdateTask& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CarQueueMovingUpdateTask&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEMOVINGUPDATETASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CarQueueMovingUpdateTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CarQueueMovingUpdateTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEMOVINGUPDATETASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::CarQueueMovingUpdateTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::CarQueueMovingUpdateTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEMOVINGUPDATETASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
