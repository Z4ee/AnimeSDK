#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_LOOKATIKTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0xF854F90)
#define NPCCROWD_ABILITY_LOOKATIKTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0xF854FA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int LookAtIKTask_StructOpsTypeTraits_TypeDefinitionIndex = 56652;

	class LookAtIKTask_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_LOOKATIKTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
