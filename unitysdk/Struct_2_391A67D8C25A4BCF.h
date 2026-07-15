#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Struct_2_391A67D8C25A4BCF_TypeDefinitionIndex = 55175;

struct alignas(8) Struct_2_391A67D8C25A4BCF
{
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LockHPStrength Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
};
