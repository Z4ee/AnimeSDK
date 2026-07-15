#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LittleGameEntityPreset; }

inline static constexpr unsigned int Struct_2_842EEDFBF72D5ED5_TypeDefinitionIndex = 40887;

struct alignas(8) Struct_2_842EEDFBF72D5ED5
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::UnityEngine::Vector3 Field_2_2; // 0x14
	::RPG::GameCore::LittleGameEntityPreset* Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x29
	::System::Single Field_2_6; // 0x2C
	::System::Single Field_2_7; // 0x30
};
