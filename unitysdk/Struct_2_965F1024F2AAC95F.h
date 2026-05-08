#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_2_167BB37617B940E3;

#define STRUCT_2_965F1024F2AAC95F_METHOD_2_0F5C26B47A1CD3DF_OFFSET UNITYSDK_OFFSET(0x74E4A0)
#define STRUCT_2_965F1024F2AAC95F__CTOR_OFFSET UNITYSDK_OFFSET(0x74E490)

inline static constexpr unsigned int Struct_2_965F1024F2AAC95F_TypeDefinitionIndex = 46486;

struct alignas(8) Struct_2_965F1024F2AAC95F
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x20

	::System::Void _ctor(::Class_2_167BB37617B940E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + STRUCT_2_965F1024F2AAC95F__CTOR_OFFSET))(this, a1);
	}

	::Class_2_167BB37617B940E3* Method_2_0F5C26B47A1CD3DF()
	{
		return ((::Class_2_167BB37617B940E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_965F1024F2AAC95F_METHOD_2_0F5C26B47A1CD3DF_OFFSET))(this);
	}
};
