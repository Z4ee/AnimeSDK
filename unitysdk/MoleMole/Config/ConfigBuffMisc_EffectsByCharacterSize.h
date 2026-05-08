#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_EffectsByCharacterSize_TypeDefinitionIndex = 57130;

	struct alignas(8) ConfigBuffMisc_EffectsByCharacterSize
	{
		::Il2CppArray<::System::String*>* SmallEffectNames; // 0x10
		::Il2CppArray<::System::String*>* MiddleEffectNames; // 0x18
		::Il2CppArray<::System::String*>* LargeEffectNames; // 0x20
	};
}
