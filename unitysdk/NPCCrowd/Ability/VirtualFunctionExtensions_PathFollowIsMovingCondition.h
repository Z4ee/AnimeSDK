#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/PathFollowIsMovingCondition.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWISMOVINGCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD888C00)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWISMOVINGCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xD888B90)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWISMOVINGCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xD888C90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_PathFollowIsMovingCondition_TypeDefinitionIndex = 68468;

	class VirtualFunctionExtensions_PathFollowIsMovingCondition : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::PathFollowIsMovingCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PathFollowIsMovingCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWISMOVINGCONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::PathFollowIsMovingCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::PathFollowIsMovingCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWISMOVINGCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::PathFollowIsMovingCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::PathFollowIsMovingCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_PATHFOLLOWISMOVINGCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
