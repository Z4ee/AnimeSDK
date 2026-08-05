#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_6F28FFD006F2B451;

#define STRUCT_2_4CF63955B882D379_METHOD_2_BB29F1265C06494E_OFFSET UNITYSDK_OFFSET(0xA00950)
#define STRUCT_2_4CF63955B882D379__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_4CF63955B882D379_TypeDefinitionIndex = 92049;

struct alignas(4) Struct_2_4CF63955B882D379
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4CF63955B882D379__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BB29F1265C06494E(::Class_3_6F28FFD006F2B451* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_6F28FFD006F2B451*))((::PBYTE)hIl2Cpp + STRUCT_2_4CF63955B882D379_METHOD_2_BB29F1265C06494E_OFFSET))(this, a1);
	}
};
