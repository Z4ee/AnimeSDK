#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }

inline static constexpr unsigned int Struct_2_810B5A2BD7106829_TypeDefinitionIndex = 62004;

struct alignas(8) Struct_2_810B5A2BD7106829
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x20
	::Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8 Field_2_2; // 0x24
	::MoleMole::Config::ConfigMovement* Field_2_3; // 0x28
	::MoleMole::Config::ConfigRotation* Field_2_4; // 0x30
};
