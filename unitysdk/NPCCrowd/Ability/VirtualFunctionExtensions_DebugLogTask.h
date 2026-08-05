#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/DebugLogTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x10C92F90)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x10C92F00)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGTASK_LINK_OFFSET UNITYSDK_OFFSET(0x10C92E90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_DebugLogTask_TypeDefinitionIndex = 43315;

	class VirtualFunctionExtensions_DebugLogTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::DebugLogTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::DebugLogTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::DebugLogTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::DebugLogTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::DebugLogTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::DebugLogTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_DEBUGLOGTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}
	};
}
