#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int StateMachineTransitionConfig_TypeDefinitionIndex = 79056;

	struct alignas(8) StateMachineTransitionConfig
	{
		::System::Single DefaultTransitionTime; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* TransitionDict; // 0x18
	};
}
