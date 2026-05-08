#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C30E0F20DB52137A.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CAB3EC81D84469DF__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6C0)

inline static constexpr unsigned int Struct_2_CAB3EC81D84469DF_TypeDefinitionIndex = 26365;

struct alignas(8) Struct_2_CAB3EC81D84469DF
{
	::System::Int32 Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_C30E0F20DB52137A>* Field_2_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_CAB3EC81D84469DF__CTOR_OFFSET))(this, a1, a2);
	}
};
