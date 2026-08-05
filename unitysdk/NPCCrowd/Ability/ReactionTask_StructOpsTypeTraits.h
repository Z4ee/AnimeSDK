#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_REACTIONTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0xF76A840)
#define NPCCROWD_ABILITY_REACTIONTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0xF76A850)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ReactionTask_StructOpsTypeTraits_TypeDefinitionIndex = 53111;

	class ReactionTask_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REACTIONTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
