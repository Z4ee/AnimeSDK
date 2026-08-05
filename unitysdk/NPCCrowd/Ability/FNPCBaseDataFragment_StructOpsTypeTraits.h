#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x10296560)
#define NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x10296570)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCBaseDataFragment_StructOpsTypeTraits_TypeDefinitionIndex = 69890;

	class FNPCBaseDataFragment_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCBASEDATAFRAGMENT_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
