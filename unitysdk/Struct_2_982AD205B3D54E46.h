#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_982AD205B3D54E46_EQUALS_OFFSET UNITYSDK_OFFSET(0x7E1530)

inline static constexpr unsigned int Struct_2_982AD205B3D54E46_TypeDefinitionIndex = 68346;

struct alignas(4) Struct_2_982AD205B3D54E46
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14
	::UnityEngine::Vector2 Field_2_2; // 0x1C
	::System::Int32 Field_2_3; // 0x24
	::System::Int32 Field_2_4; // 0x28
	::System::Int32 Field_2_5; // 0x2C

	::System::Boolean Equals(::Struct_2_982AD205B3D54E46 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_982AD205B3D54E46))((::PBYTE)hIl2Cpp + STRUCT_2_982AD205B3D54E46_EQUALS_OFFSET))(this, a1);
	}
};
