#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/AttractorFindTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x10298710)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x10298620)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_LINK_OFFSET UNITYSDK_OFFSET(0x10298540)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_TICK_OFFSET UNITYSDK_OFFSET(0x10298880)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_AttractorFindTask_TypeDefinitionIndex = 78878;

	class VirtualFunctionExtensions_AttractorFindTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorFindTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorFindTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorFindTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorFindTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::AttractorFindTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorFindTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::AttractorFindTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorFindTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORFINDTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
