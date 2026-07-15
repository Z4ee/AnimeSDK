#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/GroupEvent.h"
#include "unitysdk/System/ValueType.h"

namespace Entitas { template <typename T> class IMatcher_1; }

namespace Entitas
{
	inline static constexpr unsigned int TriggerOnEvent_1_TypeDefinitionIndex = 9647;

	template <typename TEntity>
	struct TriggerOnEvent_1
	{
		::Entitas::IMatcher_1<TEntity>* matcher; // 0x0
		::Entitas::GroupEvent groupEvent; // 0x0
	};
}
