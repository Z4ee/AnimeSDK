#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_EBACA96C31DAB7D8;
namespace UnityEngine { class Material; }

#define STRUCT_2_0896984AE113E8C5_METHOD_2_6A99B7B83C9A643A_OFFSET UNITYSDK_OFFSET(0x6B38F0)
#define STRUCT_2_0896984AE113E8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x3DD440)

inline static constexpr unsigned int Struct_2_0896984AE113E8C5_TypeDefinitionIndex = 83770;

struct alignas(8) Struct_2_0896984AE113E8C5
{
	::Class_1_EBACA96C31DAB7D8* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_EBACA96C31DAB7D8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBACA96C31DAB7D8*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_0896984AE113E8C5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6A99B7B83C9A643A(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + STRUCT_2_0896984AE113E8C5_METHOD_2_6A99B7B83C9A643A_OFFSET))(this, a1);
	}
};
