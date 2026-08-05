#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0xD8812D0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0xD8812E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityPathFollowFragmentV2_StructOpsTypeTraits_TypeDefinitionIndex = 47696;

	class FNPCAbilityPathFollowFragmentV2_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
