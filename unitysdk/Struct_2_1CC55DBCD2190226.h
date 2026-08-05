#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }

inline static constexpr unsigned int Struct_2_1CC55DBCD2190226_TypeDefinitionIndex = 87314;

struct alignas(8) Struct_2_1CC55DBCD2190226
{
	::System::Boolean Field_2_1; // 0x10
	::MoleMole::Cameras::ScopedOverShoulderCamera* Field_2_0; // 0x18
	::System::Single Field_2_7; // 0x20
	::UnityEngine::Quaternion Field_2_6; // 0x24
};
