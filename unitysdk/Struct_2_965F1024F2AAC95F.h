#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_2_14986121AA61AD99;

#define STRUCT_2_965F1024F2AAC95F_METHOD_2_0F5C26B47A1CD3DF_OFFSET UNITYSDK_OFFSET(0x8549D0)
#define STRUCT_2_965F1024F2AAC95F__CTOR_OFFSET UNITYSDK_OFFSET(0x8549C0)

inline static constexpr unsigned int Struct_2_965F1024F2AAC95F_TypeDefinitionIndex = 79596;

struct alignas(8) Struct_2_965F1024F2AAC95F
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x20

	::System::Void _ctor(::Class_2_14986121AA61AD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + STRUCT_2_965F1024F2AAC95F__CTOR_OFFSET))(this, a1);
	}

	::Class_2_14986121AA61AD99* Method_2_0F5C26B47A1CD3DF()
	{
		return ((::Class_2_14986121AA61AD99*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_965F1024F2AAC95F_METHOD_2_0F5C26B47A1CD3DF_OFFSET))(this);
	}
};
