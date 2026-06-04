#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_ScreenEffectParameter_TypeDefinitionIndex = 48486;

	struct alignas(8) PPFilterStack_ScreenEffectParameter
	{
		::System::String* ScreenEffectPath; // 0x10
	};
}
