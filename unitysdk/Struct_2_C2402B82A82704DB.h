#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_C2402B82A82704DB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20DEC80)
#define STRUCT_2_C2402B82A82704DB__CTOR_OFFSET UNITYSDK_OFFSET(0x20DEC20)

inline static constexpr unsigned int Struct_2_C2402B82A82704DB_TypeDefinitionIndex = 28666;

struct alignas(8) Struct_2_C2402B82A82704DB
{
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C2402B82A82704DB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + STRUCT_2_C2402B82A82704DB__CTOR_1_OFFSET))(this, a1);
	}
};
