#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D3F97394EEAB34D6;

#define STRUCT_2_92498A83ED43B07F_METHOD_2_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x22B41A0)
#define STRUCT_2_92498A83ED43B07F__CTOR_OFFSET UNITYSDK_OFFSET(0x22B4140)

inline static constexpr unsigned int Struct_2_92498A83ED43B07F_TypeDefinitionIndex = 39343;

struct alignas(4) Struct_2_92498A83ED43B07F
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C

	::System::Void _ctor(::Class_1_D3F97394EEAB34D6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3F97394EEAB34D6*))((::PBYTE)hIl2Cpp + STRUCT_2_92498A83ED43B07F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4418D0C08F01D8CD(::Class_1_D3F97394EEAB34D6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D3F97394EEAB34D6*))((::PBYTE)hIl2Cpp + STRUCT_2_92498A83ED43B07F_METHOD_2_4418D0C08F01D8CD_OFFSET))(this, a1);
	}
};
