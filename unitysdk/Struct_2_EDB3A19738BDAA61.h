#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A46BC8D6BCF88736.h"
#include "unitysdk/Struct_2_0F81F9590CE45FB6.h"
#include "unitysdk/Struct_2_255C416975F3EED8.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FD31E4216DD30F97;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_EDB3A19738BDAA61_METHOD_2_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x634D00)
#define STRUCT_2_EDB3A19738BDAA61_METHOD_2_144F4E668E2BFC34_OFFSET UNITYSDK_OFFSET(0x634D40)
#define STRUCT_2_EDB3A19738BDAA61_METHOD_2_5C3FF0B49C55F5F0_OFFSET UNITYSDK_OFFSET(0x634D20)
#define STRUCT_2_EDB3A19738BDAA61_METHOD_2_C49A0783C08EF162_OFFSET UNITYSDK_OFFSET(0x634D10)

inline static constexpr unsigned int Struct_2_EDB3A19738BDAA61_TypeDefinitionIndex = 40852;

struct alignas(8) Struct_2_EDB3A19738BDAA61
{
	::Il2CppArray<::System::Collections::Generic::List_1<::Struct_2_0F81F9590CE45FB6>*>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_255C416975F3EED8>* Field_2_0; // 0x18

	::System::Void Method_2_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EDB3A19738BDAA61_METHOD_2_0BA114B592B3A582_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_0F81F9590CE45FB6>* Method_2_C49A0783C08EF162(::Enum_3_A46BC8D6BCF88736 a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_0F81F9590CE45FB6>*(*)(::PVOID, ::Enum_3_A46BC8D6BCF88736))((::PBYTE)hIl2Cpp + STRUCT_2_EDB3A19738BDAA61_METHOD_2_C49A0783C08EF162_OFFSET))(this, a1);
	}

	::Struct_2_255C416975F3EED8 Method_2_5C3FF0B49C55F5F0(::Class_1_FD31E4216DD30F97* a1)
	{
		return ((::Struct_2_255C416975F3EED8(*)(::PVOID, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + STRUCT_2_EDB3A19738BDAA61_METHOD_2_5C3FF0B49C55F5F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_255C416975F3EED8>* Method_2_144F4E668E2BFC34()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_255C416975F3EED8>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EDB3A19738BDAA61_METHOD_2_144F4E668E2BFC34_OFFSET))(this);
	}
};
