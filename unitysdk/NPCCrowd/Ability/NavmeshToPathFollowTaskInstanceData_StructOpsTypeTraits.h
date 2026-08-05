#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0xF600E60)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0xF600E70)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowTaskInstanceData_StructOpsTypeTraits_TypeDefinitionIndex = 48515;

	class NavmeshToPathFollowTaskInstanceData_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASKINSTANCEDATA_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
