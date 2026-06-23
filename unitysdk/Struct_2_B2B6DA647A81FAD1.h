#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

inline static constexpr unsigned int Struct_2_B2B6DA647A81FAD1_TypeDefinitionIndex = 69134;

struct alignas(8) Struct_2_B2B6DA647A81FAD1
{
	::System::String* Field_2_0; // 0x10
	::MoleMole::EntityHandle Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x29
	::UnityEngine::Vector3 Field_2_4; // 0x2C
	::UnityEngine::Quaternion Field_2_5; // 0x38
};
