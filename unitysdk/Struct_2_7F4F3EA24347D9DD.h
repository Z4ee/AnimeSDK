#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CAB3EC81D84469DF.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_7F4F3EA24347D9DD__CTOR_OFFSET UNITYSDK_OFFSET(0x9AF6C0)

inline static constexpr unsigned int Struct_2_7F4F3EA24347D9DD_TypeDefinitionIndex = 26255;

struct alignas(8) Struct_2_7F4F3EA24347D9DD
{
	::System::Collections::Generic::List_1<::Struct_2_CAB3EC81D84469DF>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7F4F3EA24347D9DD__CTOR_OFFSET))(this, a1);
	}
};
