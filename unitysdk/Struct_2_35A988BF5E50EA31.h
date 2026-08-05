#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_35A988BF5E50EA31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x880860)
#define STRUCT_2_35A988BF5E50EA31_EQUALS_OFFSET UNITYSDK_OFFSET(0x880780)
#define STRUCT_2_35A988BF5E50EA31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x880870)
#define STRUCT_2_35A988BF5E50EA31_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x880A40)
#define STRUCT_2_35A988BF5E50EA31_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x880960)
#define STRUCT_2_35A988BF5E50EA31_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8809D0)
#define STRUCT_2_35A988BF5E50EA31_METHOD_2_A3905E3CDA25E403_1_OFFSET UNITYSDK_OFFSET(0x1860D3E0)
#define STRUCT_2_35A988BF5E50EA31_METHOD_2_A3905E3CDA25E403_OFFSET UNITYSDK_OFFSET(0x1860D2A0)
#define STRUCT_2_35A988BF5E50EA31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x880950)

inline static constexpr unsigned int Struct_2_35A988BF5E50EA31_TypeDefinitionIndex = 86965;

struct alignas(8) Struct_2_35A988BF5E50EA31
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18
	::System::Int32 Field_2_5; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::String* Field_2_11; // 0x28

	::System::Boolean Equals(::Struct_2_35A988BF5E50EA31 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_35A988BF5E50EA31))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::System::Boolean Method_2_A3905E3CDA25E403(::Struct_2_35A988BF5E50EA31 a1, ::Struct_2_35A988BF5E50EA31 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_35A988BF5E50EA31, ::Struct_2_35A988BF5E50EA31))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_METHOD_2_A3905E3CDA25E403_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_A3905E3CDA25E403_1(::Struct_2_35A988BF5E50EA31 a1, ::Struct_2_35A988BF5E50EA31 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_35A988BF5E50EA31, ::Struct_2_35A988BF5E50EA31))((::PBYTE)hIl2Cpp + STRUCT_2_35A988BF5E50EA31_METHOD_2_A3905E3CDA25E403_1_OFFSET))(a1, a2);
	}
};
