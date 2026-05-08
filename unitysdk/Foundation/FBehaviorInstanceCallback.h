#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

namespace Foundation
{
	inline static constexpr unsigned int FBehaviorInstanceCallback_TypeDefinitionIndex = 8978;

	struct alignas(8) FBehaviorInstanceCallback
	{
		::System::Action* OnBlendIn; // 0x10
		::System::Action* OnBlendedIn; // 0x18
		::System::Action* OnBlendOut; // 0x20
		::System::Action* OnBlendedOut; // 0x28
	};
}
