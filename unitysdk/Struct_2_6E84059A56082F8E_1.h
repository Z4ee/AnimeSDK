#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_6E84059A56082F8E_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x966820)
#define STRUCT_2_6E84059A56082F8E_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x966810)
#define STRUCT_2_6E84059A56082F8E_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x966900)
#define STRUCT_2_6E84059A56082F8E_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x966910)
#define STRUCT_2_6E84059A56082F8E_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x966980)
#define STRUCT_2_6E84059A56082F8E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x324A50)

inline static constexpr unsigned int Struct_2_6E84059A56082F8E_1_TypeDefinitionIndex = 91763;

struct alignas(4) Struct_2_6E84059A56082F8E_1
{
	::System::Single Field_2_0; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_6E84059A56082F8E_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6E84059A56082F8E_1))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6E84059A56082F8E_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
