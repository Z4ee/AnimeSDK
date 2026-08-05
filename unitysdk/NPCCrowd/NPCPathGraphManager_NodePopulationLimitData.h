#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager_PopulationLimitEntry.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCPATHGRAPHMANAGER_NODEPOPULATIONLIMITDATA_CLEARCALCULATED_OFFSET UNITYSDK_OFFSET(0x6F4E10)
#define NPCCROWD_NPCPATHGRAPHMANAGER_NODEPOPULATIONLIMITDATA_ENSUREINIT_OFFSET UNITYSDK_OFFSET(0x6F4E00)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_NodePopulationLimitData_TypeDefinitionIndex = 51828;

	struct alignas(8) NPCPathGraphManager_NodePopulationLimitData
	{
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCPathGraphManager_PopulationLimitEntry>* PopulationLimits; // 0x10
		::System::Int32 NodePopulationMax; // 0x18
		::System::Int32 NodeLoadMax; // 0x1C
		::System::Single NodeLoadMaxFactor; // 0x20

		::System::Void EnsureInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_NODEPOPULATIONLIMITDATA_ENSUREINIT_OFFSET))(this);
		}

		::System::Void ClearCalculated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_NODEPOPULATIONLIMITDATA_CLEARCALCULATED_OFFSET))(this);
		}
	};
}
