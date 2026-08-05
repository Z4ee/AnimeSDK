#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_NodeLink_TypeDefinitionIndex = 8729;

	template <typename TTickingGroup>
	struct TickSequencer_1_Scheduler_NodeLink
	{
		::System::Int32 _index; // 0x0
		static ::Foundation::TickSequencer_1_Scheduler_NodeLink<TTickingGroup>* StaticGet_Null()
		{
			return (::Foundation::TickSequencer_1_Scheduler_NodeLink<TTickingGroup>*)Il2CppClass::FromTypeDefinitionIndex(TickSequencer_1_Scheduler_NodeLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
