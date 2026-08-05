#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0xF5FD7B0)
#define NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0xF5FD7C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int IdleAnimationTaskInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 64866;

	class IdleAnimationTaskInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_IDLEANIMATIONTASKINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
