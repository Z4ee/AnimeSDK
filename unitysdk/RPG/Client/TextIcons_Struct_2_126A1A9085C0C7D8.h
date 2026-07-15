#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/SpriteElement.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_Struct_2_126A1A9085C0C7D8_TypeDefinitionIndex = 69391;

	struct alignas(8) TextIcons_Struct_2_126A1A9085C0C7D8
	{
		::UnityEngine::UI::SpriteElement Field_2_0; // 0x10
		::System::Int32 Field_2_1; // 0x20
		::UnityEngine::Texture* Field_2_2; // 0x28
		::UnityEngine::Sprite* Field_2_3; // 0x30
	};
}
