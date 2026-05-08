#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeProcessorSchema_ExternalDataCollector_1_TypeDefinitionIndex = 62798;

	template <typename TJob>
	struct StateTreeProcessorSchema_ExternalDataCollector_1
	{
		::System::Int32 _index; // 0x0
		::UnrealTypes::RawPtr_1<TJob> _job; // 0x0
	};
}
