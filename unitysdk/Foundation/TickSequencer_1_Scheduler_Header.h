#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler_HeaderLink.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler_NodeLink.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_Header_TypeDefinitionIndex = 8725;

	template <typename TTickingGroup>
	struct TickSequencer_1_Scheduler_Header
	{
		::System::Int32 _Indegree_k__BackingField; // 0x0
		::Foundation::TickSequencer_1_Scheduler_NodeLink<TTickingGroup> _Subsequent_k__BackingField; // 0x0
		::Foundation::TickSequencer_1_Scheduler_HeaderLink<TTickingGroup> Index; // 0x0
	};
}
