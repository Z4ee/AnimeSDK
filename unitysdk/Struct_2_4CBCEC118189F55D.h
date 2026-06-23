#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_DB267E245CF41057;

#define STRUCT_2_4CBCEC118189F55D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A1050)
#define STRUCT_2_4CBCEC118189F55D__CTOR_OFFSET UNITYSDK_OFFSET(0x7A1030)

inline static constexpr unsigned int Struct_2_4CBCEC118189F55D_TypeDefinitionIndex = 82763;

struct alignas(8) Struct_2_4CBCEC118189F55D
{
	::Class_3_DB267E245CF41057* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::Class_3_DB267E245CF41057* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB267E245CF41057*))((::PBYTE)hIl2Cpp + STRUCT_2_4CBCEC118189F55D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4CBCEC118189F55D_DISPOSE_OFFSET))(this);
	}
};
