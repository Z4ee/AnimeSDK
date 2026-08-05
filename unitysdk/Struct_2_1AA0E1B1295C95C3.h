#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74C6EE564641CFF8.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_DD81183BF1438207;

#define STRUCT_2_1AA0E1B1295C95C3_METHOD_2_3F46115C5FCBBA4C_OFFSET UNITYSDK_OFFSET(0x14085880)
#define STRUCT_2_1AA0E1B1295C95C3__CTOR_OFFSET UNITYSDK_OFFSET(0x7F1E10)

inline static constexpr unsigned int Struct_2_1AA0E1B1295C95C3_TypeDefinitionIndex = 60484;

struct alignas(4) Struct_2_1AA0E1B1295C95C3
{
	::System::Boolean Field_2_2; // 0x10
	::Struct_2_984AA94FB23486F9_2 Field_2_1; // 0x14
	::Struct_2_74C6EE564641CFF8 Field_2_0; // 0x24

	::System::Void _ctor(::System::Boolean a1, ::Struct_2_984AA94FB23486F9_2 a2, ::Struct_2_74C6EE564641CFF8 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_984AA94FB23486F9_2, ::Struct_2_74C6EE564641CFF8))((::PBYTE)hIl2Cpp + STRUCT_2_1AA0E1B1295C95C3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_3F46115C5FCBBA4C(::Class_3_DD81183BF1438207* a1, ::Class_3_DD81183BF1438207* a2, ::Struct_2_1AA0E1B1295C95C3& a3)
	{
		return ((::System::Boolean(*)(::Class_3_DD81183BF1438207*, ::Class_3_DD81183BF1438207*, ::Struct_2_1AA0E1B1295C95C3&))((::PBYTE)hIl2Cpp + STRUCT_2_1AA0E1B1295C95C3_METHOD_2_3F46115C5FCBBA4C_OFFSET))(a1, a2, a3);
	}
};
