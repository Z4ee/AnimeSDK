#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideEquipmentData_RelicInfo_TypeDefinitionIndex = 62697;

	struct alignas(8) HandbookGrowthGuideEquipmentData_RelicInfo
	{
		::System::Collections::Generic::List_1<::System::UInt32>* SetIDs; // 0x10
		::System::Single Percentage; // 0x18
	};
}
