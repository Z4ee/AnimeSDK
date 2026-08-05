#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/GameplayTagContainerMatchCondition.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0xF8607C0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF860930)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xF860890)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xF8609C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_GameplayTagContainerMatchCondition_TypeDefinitionIndex = 61036;

	class VirtualFunctionExtensions_GameplayTagContainerMatchCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::GameplayTagContainerMatchCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::GameplayTagContainerMatchCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_GAMEPLAYTAGCONTAINERMATCHCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
