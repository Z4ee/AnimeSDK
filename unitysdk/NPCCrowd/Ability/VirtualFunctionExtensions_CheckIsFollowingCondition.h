#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/CheckIsFollowingCondition.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CHECKISFOLLOWINGCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF9A6900)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CHECKISFOLLOWINGCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xF9A6890)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CHECKISFOLLOWINGCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xF9A6990)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_CheckIsFollowingCondition_TypeDefinitionIndex = 71911;

	class VirtualFunctionExtensions_CheckIsFollowingCondition : public ::System::Object
	{
	public:
		static ::System::Boolean Link(::NPCCrowd::Ability::CheckIsFollowingCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CheckIsFollowingCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CHECKISFOLLOWINGCONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::CheckIsFollowingCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::CheckIsFollowingCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CHECKISFOLLOWINGCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::CheckIsFollowingCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::CheckIsFollowingCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_CHECKISFOLLOWINGCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
