#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CarQueueUpdateEnvironmentTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEUPDATEENVIRONMENTTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x10C92D60)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEUPDATEENVIRONMENTTASK_LINK_OFFSET UNITYSDK_OFFSET(0x10C92CF0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEUPDATEENVIRONMENTTASK_TICK_OFFSET UNITYSDK_OFFSET(0x10C92DF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_CarQueueUpdateEnvironmentTask_TypeDefinitionIndex = 62626;

	class VirtualFunctionExtensions_CarQueueUpdateEnvironmentTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEUPDATEENVIRONMENTTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEUPDATEENVIRONMENTTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::CarQueueUpdateEnvironmentTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CARQUEUEUPDATEENVIRONMENTTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
