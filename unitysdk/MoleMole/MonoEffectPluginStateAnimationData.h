#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginStateAnimationData_TypeDefinitionIndex = 71589;

	struct alignas(8) MonoEffectPluginStateAnimationData
	{
		::System::String* keyState; // 0x10
		::System::String* keyAnimation; // 0x18
	};
}
