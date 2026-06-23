#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_6E84059A56082F8E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9571D0)
#define STRUCT_2_6E84059A56082F8E_EQUALS_OFFSET UNITYSDK_OFFSET(0x9571C0)
#define STRUCT_2_6E84059A56082F8E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9572B0)
#define STRUCT_2_6E84059A56082F8E_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x957320)
#define STRUCT_2_6E84059A56082F8E_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9572C0)
#define STRUCT_2_6E84059A56082F8E__CTOR_OFFSET UNITYSDK_OFFSET(0x55FE60)

inline static constexpr unsigned int Struct_2_6E84059A56082F8E_TypeDefinitionIndex = 88044;

struct alignas(4) Struct_2_6E84059A56082F8E
{
	::System::Single Field_2_0; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_6E84059A56082F8E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6E84059A56082F8E))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
