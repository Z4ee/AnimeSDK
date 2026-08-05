#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_CD17D37138E13AA3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x760940)
#define STRUCT_2_CD17D37138E13AA3_EQUALS_OFFSET UNITYSDK_OFFSET(0x760900)
#define STRUCT_2_CD17D37138E13AA3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x760A40)
#define STRUCT_2_CD17D37138E13AA3_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x760B60)
#define STRUCT_2_CD17D37138E13AA3_METHOD_2_73212BE283E8719D_OFFSET UNITYSDK_OFFSET(0x760AC0)
#define STRUCT_2_CD17D37138E13AA3_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x760A50)
#define STRUCT_2_CD17D37138E13AA3_METHOD_2_DC18FF8EFDFCAAC1_OFFSET UNITYSDK_OFFSET(0x11B53210)

inline static constexpr unsigned int Struct_2_CD17D37138E13AA3_TypeDefinitionIndex = 52151;

struct alignas(8) Struct_2_CD17D37138E13AA3
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::String* Field_2_6; // 0x18
	::System::String* Field_2_5; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::String* Field_2_11; // 0x30
	::System::String* Field_2_10; // 0x38

	::System::Boolean Equals(::Struct_2_CD17D37138E13AA3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CD17D37138E13AA3))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_73212BE283E8719D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_METHOD_2_73212BE283E8719D_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_CD17D37138E13AA3 Method_2_DC18FF8EFDFCAAC1(::Struct_2_CD17D37138E13AA3& a1)
	{
		return ((::Struct_2_CD17D37138E13AA3(*)(::Struct_2_CD17D37138E13AA3&))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_METHOD_2_DC18FF8EFDFCAAC1_OFFSET))(a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_CD17D37138E13AA3_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
