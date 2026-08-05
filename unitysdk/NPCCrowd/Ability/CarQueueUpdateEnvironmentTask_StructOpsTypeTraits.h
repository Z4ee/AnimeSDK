#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0x13DE5B00)
#define NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE5A70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CarQueueUpdateEnvironmentTask_StructOpsTypeTraits_TypeDefinitionIndex = 61875;

	class CarQueueUpdateEnvironmentTask_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CARQUEUEUPDATEENVIRONMENTTASK_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
