#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIAnimatorStateSync_StatePair_TypeDefinitionIndex = 65898;

	struct alignas(8) MonoUIAnimatorStateSync_StatePair
	{
		::System::String* SourceStateName; // 0x10
		::System::String* TargetStateName; // 0x18
	};
}
