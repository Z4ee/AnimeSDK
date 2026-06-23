#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/FBehaviorInstanceTime.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class BehaviorInstance_1; }

namespace Foundation
{
	inline static constexpr unsigned int BehaviorManager_1_FSlot___c__DisplayClass16_0_TypeDefinitionIndex = 8416;

	template <typename TData>
	class BehaviorManager_1_FSlot___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Foundation::FBehaviorInstanceTime time; // 0x0
		::Foundation::Variable_2<TData, ::System::Double> data; // 0x0
	};
}
