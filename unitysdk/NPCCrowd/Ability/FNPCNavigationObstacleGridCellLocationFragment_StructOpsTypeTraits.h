#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/StructOpsTraitsBase.h"

#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET UNITYSDK_OFFSET(0xBDD41B0)
#define NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_STRUCTOPSTYPETRAITS__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD41C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCNavigationObstacleGridCellLocationFragment_StructOpsTypeTraits_TypeDefinitionIndex = 50592;

	class FNPCNavigationObstacleGridCellLocationFragment_StructOpsTypeTraits : public ::UnrealTypes::StructOpsTraitsBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_STRUCTOPSTYPETRAITS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlainOldData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCNAVIGATIONOBSTACLEGRIDCELLLOCATIONFRAGMENT_STRUCTOPSTYPETRAITS_GET_ISPLAINOLDDATA_OFFSET))(this);
		}
	};
}
