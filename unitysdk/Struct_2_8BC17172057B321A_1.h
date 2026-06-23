#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_8BC17172057B321A_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7881B0)
#define STRUCT_2_8BC17172057B321A_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x788100)
#define STRUCT_2_8BC17172057B321A_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7881C0)
#define STRUCT_2_8BC17172057B321A_1_METHOD_2_51F682894989510C_1_OFFSET UNITYSDK_OFFSET(0x123E2BC0)
#define STRUCT_2_8BC17172057B321A_1_METHOD_2_51F682894989510C_OFFSET UNITYSDK_OFFSET(0x123E2A10)
#define STRUCT_2_8BC17172057B321A_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7882F0)
#define STRUCT_2_8BC17172057B321A_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x788290)

inline static constexpr unsigned int Struct_2_8BC17172057B321A_1_TypeDefinitionIndex = 56561;

struct alignas(8) Struct_2_8BC17172057B321A_1
{
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Boolean Equals(::Struct_2_8BC17172057B321A_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8BC17172057B321A_1))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_51F682894989510C(::Struct_2_8BC17172057B321A_1 a1, ::Struct_2_8BC17172057B321A_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_8BC17172057B321A_1, ::Struct_2_8BC17172057B321A_1))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_METHOD_2_51F682894989510C_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_51F682894989510C_1(::Struct_2_8BC17172057B321A_1 a1, ::Struct_2_8BC17172057B321A_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_8BC17172057B321A_1, ::Struct_2_8BC17172057B321A_1))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_1_METHOD_2_51F682894989510C_1_OFFSET))(a1, a2);
	}
};
