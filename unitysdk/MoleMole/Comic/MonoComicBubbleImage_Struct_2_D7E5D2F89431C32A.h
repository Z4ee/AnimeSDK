#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Comic { class MonoComicBubbleImage; }

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubbleImage_Struct_2_D7E5D2F89431C32A_TypeDefinitionIndex = 42615;

	struct alignas(8) MonoComicBubbleImage_Struct_2_D7E5D2F89431C32A
	{
		::MoleMole::Comic::MonoComicBubbleImage* Field_2_5; // 0x10
		::UnityEngine::Vector4 Field_2_6; // 0x18
		::System::Single Field_2_3; // 0x28
		::UnityEngine::Vector2 Field_2_4; // 0x2C
		::System::Boolean Field_2_1; // 0x34
		::UnityEngine::Vector2 Field_2_2; // 0x38
		::UnityEngine::Vector2 Field_2_0; // 0x40
	};
}
