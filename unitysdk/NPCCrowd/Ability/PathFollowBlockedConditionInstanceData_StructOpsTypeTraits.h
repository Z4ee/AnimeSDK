#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x106411F0)
#define NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x10641190)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowBlockedConditionInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 87352;

	class PathFollowBlockedConditionInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWBLOCKEDCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
