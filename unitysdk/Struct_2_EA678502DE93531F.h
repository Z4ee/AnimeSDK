#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_382;

#define STRUCT_2_EA678502DE93531F__CTOR_OFFSET UNITYSDK_OFFSET(0x7015F0)

inline static constexpr unsigned int Struct_2_EA678502DE93531F_TypeDefinitionIndex = 69338;

struct alignas(4) Struct_2_EA678502DE93531F
{
	::System::Boolean Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x24
	::System::UInt32 Field_2_4; // 0x28
	::System::UInt32 Field_2_5; // 0x2C

	::System::Void _ctor(::Class_2_208CC9941471731A_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_382*))((::PBYTE)hIl2Cpp + STRUCT_2_EA678502DE93531F__CTOR_OFFSET))(this, a1);
	}
};
