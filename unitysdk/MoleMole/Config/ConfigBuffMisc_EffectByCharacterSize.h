#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_EffectByCharacterSize_TypeDefinitionIndex = 71676;

	struct alignas(8) ConfigBuffMisc_EffectByCharacterSize
	{
		::System::String* SmallEffectName; // 0x10
		::System::String* MiddleEffectName; // 0x18
		::System::String* LargeEffectName; // 0x20
	};
}
