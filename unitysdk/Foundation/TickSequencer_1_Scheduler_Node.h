#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler_HeaderLink.h"
#include "unitysdk/Foundation/TickSequencer_1_Scheduler_NodeLink.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_Node_TypeDefinitionIndex = 8861;

	template <typename TTickingGroup>
	struct TickSequencer_1_Scheduler_Node
	{
		::Foundation::TickSequencer_1_Scheduler_HeaderLink<TTickingGroup> Index; // 0x0
		::Foundation::TickSequencer_1_Scheduler_NodeLink<TTickingGroup> Next; // 0x0
	};
}
