#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/AttractorClaimTask.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x13DE81A0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x13DE8240)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x13DE8110)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_LINK_OFFSET UNITYSDK_OFFSET(0x13DE80A0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_TICK_OFFSET UNITYSDK_OFFSET(0x13DE82E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_AttractorClaimTask_TypeDefinitionIndex = 74795;

	class VirtualFunctionExtensions_AttractorClaimTask : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorClaimTask& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorClaimTask&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorClaimTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorClaimTask&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::NPCCrowd::Ability::AttractorClaimTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorClaimTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::NPCCrowd::Ability::AttractorClaimTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::AttractorClaimTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::NPCCrowd::Ability::AttractorClaimTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::NPCCrowd::Ability::AttractorClaimTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCLAIMTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
