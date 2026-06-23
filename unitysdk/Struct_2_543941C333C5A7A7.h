#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_543941C333C5A7A7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x96FE10)
#define STRUCT_2_543941C333C5A7A7_EQUALS_OFFSET UNITYSDK_OFFSET(0x96FDC0)
#define STRUCT_2_543941C333C5A7A7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96FE20)
#define STRUCT_2_543941C333C5A7A7_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x96FED0)
#define STRUCT_2_543941C333C5A7A7_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x96FE70)
#define STRUCT_2_543941C333C5A7A7__CTOR_OFFSET UNITYSDK_OFFSET(0x2ACBF0)

inline static constexpr unsigned int Struct_2_543941C333C5A7A7_TypeDefinitionIndex = 87882;

struct alignas(1) Struct_2_543941C333C5A7A7
{
	::System::Boolean Field_2_0; // 0x10

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_543941C333C5A7A7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_543941C333C5A7A7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_543941C333C5A7A7))((::PBYTE)hIl2Cpp + STRUCT_2_543941C333C5A7A7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_543941C333C5A7A7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_543941C333C5A7A7_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_543941C333C5A7A7_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_543941C333C5A7A7_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
