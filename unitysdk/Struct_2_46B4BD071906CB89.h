#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A3B9FD0FE703FDC;

#define STRUCT_2_46B4BD071906CB89_METHOD_2_4EF1C1799390414B_OFFSET UNITYSDK_OFFSET(0x3A1FCC0)
#define STRUCT_2_46B4BD071906CB89__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1FC60)

inline static constexpr unsigned int Struct_2_46B4BD071906CB89_TypeDefinitionIndex = 40927;

struct alignas(4) Struct_2_46B4BD071906CB89
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C

	::System::Void _ctor(::Class_1_0A3B9FD0FE703FDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A3B9FD0FE703FDC*))((::PBYTE)hIl2Cpp + STRUCT_2_46B4BD071906CB89__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EF1C1799390414B(::Class_1_0A3B9FD0FE703FDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A3B9FD0FE703FDC*))((::PBYTE)hIl2Cpp + STRUCT_2_46B4BD071906CB89_METHOD_2_4EF1C1799390414B_OFFSET))(this, a1);
	}
};
