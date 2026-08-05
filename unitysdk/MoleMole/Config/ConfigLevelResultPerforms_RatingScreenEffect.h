#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_RatingScreenEffect_TypeDefinitionIndex = 73017;

	struct alignas(8) ConfigLevelResultPerforms_RatingScreenEffect
	{
		::MoleMole::Config::ScreenEffectType ScreenEffectType; // 0x10
		::Il2CppArray<::System::String*>* ScreenEffectKeys; // 0x18
	};
}
