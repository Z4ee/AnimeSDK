#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x1192D830)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x1192D840)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int IdleAnimationTask_StructOpsTypeTraits_TypeDefinitionIndex = 41936;

	class IdleAnimationTask_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
