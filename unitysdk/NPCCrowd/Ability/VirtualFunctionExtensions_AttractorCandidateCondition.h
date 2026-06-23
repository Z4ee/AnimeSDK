#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/AttractorCandidateCondition.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace StateTreeCore { class StateTreeLinker; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0xD5C44D0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xD5C4610)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xD5C45A0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xD5C46A0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_AttractorCandidateCondition_TypeDefinitionIndex = 49143;

	class VirtualFunctionExtensions_AttractorCandidateCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeLinker*& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeLinker*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorCandidateCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_ATTRACTORCANDIDATECONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
