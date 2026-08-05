#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_D7E802D2192B688B_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x86EF60)
#define STRUCT_2_D7E802D2192B688B_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x86EF10)
#define STRUCT_2_D7E802D2192B688B_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x86EF70)
#define STRUCT_2_D7E802D2192B688B_2_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x86F020)
#define STRUCT_2_D7E802D2192B688B_2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x86EFC0)
#define STRUCT_2_D7E802D2192B688B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_D7E802D2192B688B_2_TypeDefinitionIndex = 90831;

struct alignas(4) Struct_2_D7E802D2192B688B_2
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D7E802D2192B688B_2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_D7E802D2192B688B_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D7E802D2192B688B_2))((::PBYTE)hIl2Cpp + STRUCT_2_D7E802D2192B688B_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D7E802D2192B688B_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D7E802D2192B688B_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D7E802D2192B688B_2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D7E802D2192B688B_2_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
