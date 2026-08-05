#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x952C8A0)
#define NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x952C8B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int PathFollowIgnoreBlockConditionInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 54979;

	class PathFollowIgnoreBlockConditionInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_PATHFOLLOWIGNOREBLOCKCONDITIONINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
