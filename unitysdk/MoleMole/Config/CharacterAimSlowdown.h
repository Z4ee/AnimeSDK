#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAimSlowType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimSlowdown_TypeDefinitionIndex = 75965;

	struct alignas(8) CharacterAimSlowdown
	{
		::System::Boolean enabled; // 0x10
		::MoleMole::Config::CharacterAimSlowType type; // 0x14
		::System::Single range; // 0x18
		::System::Single speedScaleX; // 0x1C
		::System::Single speedScaleY; // 0x20
		::System::String* slowDownCurve; // 0x28
	};
}
