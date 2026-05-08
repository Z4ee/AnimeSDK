#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/TickSequencer_1_Unit.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class TickFunction_1; }
namespace Foundation { template <typename T> class TickSequencer_1_Scheduler; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_TypeDefinitionIndex = 8857;

	template <typename TTickingGroup>
	class TickSequencer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::TickSequencer_1_Unit<TTickingGroup>>* _tickingList; // 0x0
		::Foundation::TickSequencer_1_Scheduler<TTickingGroup>* _scheduler; // 0x0
	};
}
