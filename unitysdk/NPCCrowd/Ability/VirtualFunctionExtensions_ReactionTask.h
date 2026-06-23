#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ReactionTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_REACTIONTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xFFAE060)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_REACTIONTASK_LINK_OFFSET UNITYSDK_OFFSET(0xFFADFF0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_REACTIONTASK_TICK_OFFSET UNITYSDK_OFFSET(0xFFAE0F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_ReactionTask_TypeDefinitionIndex = 66924;

	class VirtualFunctionExtensions_ReactionTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::ReactionTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::ReactionTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_REACTIONTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::ReactionTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::ReactionTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_REACTIONTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::ReactionTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::ReactionTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_REACTIONTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
