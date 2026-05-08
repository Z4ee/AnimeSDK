#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAnimationStateLevel_TypeDefinitionIndex = 39699;

	struct alignas(8) MonoEffectPluginAnimationStateLevel
	{
		::System::String* keyState; // 0x10
		::System::Int32 stateLevel; // 0x18
	};
}
