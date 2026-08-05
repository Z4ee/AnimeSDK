#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickCollector_1_NodeLink.h"
#include "unitysdk/Foundation/TickCollector_1_TimeHeaderLink.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickCollector_1_TimeListHeader_TypeDefinitionIndex = 8842;

	template <typename TTickingGroup>
	struct TickCollector_1_TimeListHeader
	{
		::System::Int64 Key; // 0x0
		::System::Double Time; // 0x0
		::Foundation::TickCollector_1_NodeLink<TTickingGroup> _First_k__BackingField; // 0x0
		::Foundation::TickCollector_1_TimeHeaderLink<TTickingGroup> _Next_k__BackingField; // 0x0
	};
}
