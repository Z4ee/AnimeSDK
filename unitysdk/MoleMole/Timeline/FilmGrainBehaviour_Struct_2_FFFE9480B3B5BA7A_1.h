#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace UnityEngine { class Texture; }

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FilmGrainBehaviour_Struct_2_FFFE9480B3B5BA7A_1_TypeDefinitionIndex = 81765;

	struct alignas(8) FilmGrainBehaviour_Struct_2_FFFE9480B3B5BA7A_1
	{
		::System::Boolean Field_2_3; // 0x10
		::UnityEngine::Rendering::Universal::FilmGrainLookup Field_2_2; // 0x14
		::System::Boolean Field_2_1; // 0x18
		::System::Boolean Field_2_0; // 0x19
		::System::Single Field_2_7; // 0x1C
		::System::Boolean Field_2_6; // 0x20
		::System::Boolean Field_2_5; // 0x21
		::System::Single Field_2_4; // 0x24
		::System::Boolean Field_2_11; // 0x28
		::System::Boolean Field_2_10; // 0x29
		::UnityEngine::Texture* Field_2_9; // 0x30
		::System::Boolean Field_2_8; // 0x38
		::System::Boolean Field_2_15; // 0x39
	};
}
