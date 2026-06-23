#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityConfig_TypeDefinitionIndex = 62887;

	struct alignas(8) BangbooAbilityConfig
	{
		::System::String* abilityName; // 0x10
		::MoleMole::Config::InputType inputType; // 0x18
	};
}
