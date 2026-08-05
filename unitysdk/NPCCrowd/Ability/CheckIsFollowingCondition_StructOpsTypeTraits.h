#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x11278630)
#define NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x11278640)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CheckIsFollowingCondition_StructOpsTypeTraits_TypeDefinitionIndex = 63600;

	class CheckIsFollowingCondition_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CHECKISFOLLOWINGCONDITION_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
