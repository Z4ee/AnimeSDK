#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x125FF770)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x125FF780)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateConditionInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 81153;

	class AttractorCandidateConditionInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
