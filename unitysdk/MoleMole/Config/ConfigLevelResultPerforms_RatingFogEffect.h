#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_RatingFogEffect_TypeDefinitionIndex = 70818;

	struct alignas(8) ConfigLevelResultPerforms_RatingFogEffect
	{
		::MoleMole::Config::ShaderCustomType FogEffectType; // 0x10
		::Il2CppArray<::System::String*>* FogEffects; // 0x18
	};
}
