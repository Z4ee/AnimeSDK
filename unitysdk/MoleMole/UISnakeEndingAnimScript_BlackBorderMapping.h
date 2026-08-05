#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_Enum_3_E950BFCC4FF152A7.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RectTransform; }

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeEndingAnimScript_BlackBorderMapping_TypeDefinitionIndex = 94916;

	struct alignas(8) UISnakeEndingAnimScript_BlackBorderMapping
	{
		// static const ::System::Single PosXOffset; // 0x0
		::UnityEngine::RectTransform* rectSource; // 0x10
		::UnityEngine::RectTransform* rectBlackBorder; // 0x18
		::System::Single offset; // 0x20
		::MoleMole::UISnakeEndingAnimScript_Enum_3_E950BFCC4FF152A7 type; // 0x24
	};
}
