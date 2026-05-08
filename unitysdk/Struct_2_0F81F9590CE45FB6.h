#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FD31E4216DD30F97;

#define STRUCT_2_0F81F9590CE45FB6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A28D0)
#define STRUCT_2_0F81F9590CE45FB6__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2FED90)
#define STRUCT_2_0F81F9590CE45FB6__CTOR_OFFSET UNITYSDK_OFFSET(0x469CD0)

inline static constexpr unsigned int Struct_2_0F81F9590CE45FB6_TypeDefinitionIndex = 52621;

struct alignas(8) Struct_2_0F81F9590CE45FB6
{
	::Class_1_FD31E4216DD30F97* Field_2_0; // 0x10
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_FD31E4216DD30F97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + STRUCT_2_0F81F9590CE45FB6__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_FD31E4216DD30F97* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD31E4216DD30F97*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_0F81F9590CE45FB6__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::Class_1_FD31E4216DD30F97* a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD31E4216DD30F97*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + STRUCT_2_0F81F9590CE45FB6__CTOR_2_OFFSET))(this, a1, a2);
	}
};
