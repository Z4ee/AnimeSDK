#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_HeaderLink_TypeDefinitionIndex = 8599;

	template <typename TTickingGroup>
	struct TickSequencer_1_Scheduler_HeaderLink
	{
		::System::Int32 _index; // 0x0
		static ::Foundation::TickSequencer_1_Scheduler_HeaderLink<TTickingGroup>* StaticGet_Null()
		{
			return (::Foundation::TickSequencer_1_Scheduler_HeaderLink<TTickingGroup>*)Il2CppClass::FromTypeDefinitionIndex(TickSequencer_1_Scheduler_HeaderLink_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
