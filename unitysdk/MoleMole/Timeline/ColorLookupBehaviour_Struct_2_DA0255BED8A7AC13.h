#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Texture; }

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorLookupBehaviour_Struct_2_DA0255BED8A7AC13_TypeDefinitionIndex = 77109;

	struct alignas(8) ColorLookupBehaviour_Struct_2_DA0255BED8A7AC13
	{
		::System::Boolean Field_2_0; // 0x10
		::UnityEngine::Texture* Field_2_1; // 0x18
		::System::Boolean Field_2_2; // 0x20
		::System::Boolean Field_2_3; // 0x21
		::System::Single Field_2_4; // 0x24
		::System::Boolean Field_2_5; // 0x28
		::System::Boolean Field_2_6; // 0x29
	};
}
