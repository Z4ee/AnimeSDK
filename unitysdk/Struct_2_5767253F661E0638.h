#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_178;

#define STRUCT_2_5767253F661E0638_METHOD_2_945B051637078558_OFFSET UNITYSDK_OFFSET(0x7BEDE0)
#define STRUCT_2_5767253F661E0638_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define STRUCT_2_5767253F661E0638_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_5767253F661E0638__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_5767253F661E0638_TypeDefinitionIndex = 82251;

struct alignas(4) Struct_2_5767253F661E0638
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5767253F661E0638__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_945B051637078558(::Class_0_16E4307DCC419505_178* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_178*))((::PBYTE)hIl2Cpp + STRUCT_2_5767253F661E0638_METHOD_2_945B051637078558_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5767253F661E0638_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5767253F661E0638_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
