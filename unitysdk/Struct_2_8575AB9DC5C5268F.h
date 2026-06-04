#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A3B9FD0FE703FDC;

#define STRUCT_2_8575AB9DC5C5268F_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x38484D0)
#define STRUCT_2_8575AB9DC5C5268F__CTOR_OFFSET UNITYSDK_OFFSET(0x3848470)

inline static constexpr unsigned int Struct_2_8575AB9DC5C5268F_TypeDefinitionIndex = 40114;

struct alignas(4) Struct_2_8575AB9DC5C5268F
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C

	::System::Void _ctor(::Class_1_0A3B9FD0FE703FDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A3B9FD0FE703FDC*))((::PBYTE)hIl2Cpp + STRUCT_2_8575AB9DC5C5268F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_0A3B9FD0FE703FDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A3B9FD0FE703FDC*))((::PBYTE)hIl2Cpp + STRUCT_2_8575AB9DC5C5268F_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}
};
