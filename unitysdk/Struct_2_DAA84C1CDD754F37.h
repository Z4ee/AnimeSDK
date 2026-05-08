#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_DAA84C1CDD754F37_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6FDAE0)
#define STRUCT_2_DAA84C1CDD754F37_EQUALS_OFFSET UNITYSDK_OFFSET(0x6FD9D0)
#define STRUCT_2_DAA84C1CDD754F37_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6FDB30)
#define STRUCT_2_DAA84C1CDD754F37_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6FDBD0)
#define STRUCT_2_DAA84C1CDD754F37_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x6FDB40)
#define STRUCT_2_DAA84C1CDD754F37_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x6FDC70)
#define STRUCT_2_DAA84C1CDD754F37_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6FD9C0)
#define STRUCT_2_DAA84C1CDD754F37__CTOR_OFFSET UNITYSDK_OFFSET(0x6FD980)

inline static constexpr unsigned int Struct_2_DAA84C1CDD754F37_TypeDefinitionIndex = 47627;

struct alignas(8) Struct_2_DAA84C1CDD754F37
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Int64 Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::String* Field_2_6; // 0x40
	::System::String* Field_2_7; // 0x48
	::System::String* Field_2_8; // 0x50

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int64 a4, ::System::String* a5, ::System::Boolean a6, ::System::String* a7, ::System::String* a8, ::System::String* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_DAA84C1CDD754F37 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DAA84C1CDD754F37_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
