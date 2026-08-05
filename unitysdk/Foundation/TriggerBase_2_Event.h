#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int TriggerBase_2_Event_TypeDefinitionIndex = 8188;

	template <typename Key, typename Action>
	class TriggerBase_2_Event : public ::System::Object
	{
	public:
		// static const ::System::Int32 kOnceMaxInvokeCount = 0x50; // 0x0
		::System::Int32 onceInvokeCount_; // 0x0
		Action Trigger; // 0x0
	};
}
