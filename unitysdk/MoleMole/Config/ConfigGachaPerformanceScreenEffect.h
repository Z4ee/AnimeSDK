#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceScreenEffect_TypeDefinitionIndex = 73183;

	struct alignas(8) ConfigGachaPerformanceScreenEffect
	{
		::MoleMole::Config::ScreenEffectType ScreenEffType; // 0x10
		::System::String* ScreenEffKey; // 0x18
	};
}
