#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSync_AnimatorStateSync_TypeDefinitionIndex = 65478;

	struct alignas(8) MonoAnimatorStateSync_AnimatorStateSync
	{
		::System::String* sourceStateName; // 0x10
		::System::String* targetStateName; // 0x18
		::System::Int32 SourceStateHash; // 0x20
		::System::Int32 TargetStateHash; // 0x24
	};
}
