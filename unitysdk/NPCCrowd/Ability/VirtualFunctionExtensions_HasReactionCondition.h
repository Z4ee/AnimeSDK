#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/HasReactionCondition.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0xF4ED0D0)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xF4ED200)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_LINK_OFFSET UNITYSDK_OFFSET(0xF4ED190)
#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xF4ED290)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_HasReactionCondition_TypeDefinitionIndex = 73260;

	class VirtualFunctionExtensions_HasReactionCondition : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::HasReactionCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::HasReactionCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::System::Boolean Link(::NPCCrowd::Ability::HasReactionCondition& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::HasReactionCondition&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_LINK_OFFSET))(self, linker);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::HasReactionCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::HasReactionCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::System::Boolean TestCondition(::NPCCrowd::Ability::HasReactionCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::HasReactionCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_HASREACTIONCONDITION_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
