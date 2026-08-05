#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/PathFollowBlockedCondition.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x11931AF0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x11931C30)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x11931BC0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x11931CC0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_PathFollowBlockedCondition_TypeDefinitionIndex = 48985;

	class VirtualFunctionExtensions_PathFollowBlockedCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::PathFollowBlockedCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::PathFollowBlockedCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::PathFollowBlockedCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PathFollowBlockedCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::PathFollowBlockedCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::PathFollowBlockedCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::PathFollowBlockedCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PathFollowBlockedCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWBLOCKEDCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
