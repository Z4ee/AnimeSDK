#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8.h"
#include "unitysdk/Enum_3_C125CED56C589EEE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }

inline static constexpr unsigned int Struct_2_80A9375E13807899_TypeDefinitionIndex = 56415;

struct alignas(8) Struct_2_80A9375E13807899
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x20
	::Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8 Field_2_6; // 0x24
	::MoleMole::Config::ConfigMovement* Field_2_5; // 0x28
	::MoleMole::Config::ConfigRotation* Field_2_4; // 0x30
	::System::Single Field_2_11; // 0x38
	::System::Single Field_2_10; // 0x3C
	::System::Single Field_2_9; // 0x40
	::Enum_3_C125CED56C589EEE Field_2_8; // 0x44
	::UnityEngine::Vector3 Field_2_15; // 0x48
};
