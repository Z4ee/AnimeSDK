#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_8BC17172057B321A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x829900)
#define STRUCT_2_8BC17172057B321A_EQUALS_OFFSET UNITYSDK_OFFSET(0x829850)
#define STRUCT_2_8BC17172057B321A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x829910)
#define STRUCT_2_8BC17172057B321A_METHOD_2_51F682894989510C_1_OFFSET UNITYSDK_OFFSET(0x158E08F0)
#define STRUCT_2_8BC17172057B321A_METHOD_2_51F682894989510C_OFFSET UNITYSDK_OFFSET(0x158E0800)
#define STRUCT_2_8BC17172057B321A_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x8299F0)
#define STRUCT_2_8BC17172057B321A_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x829A60)

inline static constexpr unsigned int Struct_2_8BC17172057B321A_TypeDefinitionIndex = 87726;

struct alignas(8) Struct_2_8BC17172057B321A
{
	::System::String* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Boolean Equals(::Struct_2_8BC17172057B321A a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8BC17172057B321A))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_51F682894989510C(::Struct_2_8BC17172057B321A a1, ::Struct_2_8BC17172057B321A a2)
	{
		return ((::System::Boolean(*)(::Struct_2_8BC17172057B321A, ::Struct_2_8BC17172057B321A))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_METHOD_2_51F682894989510C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_51F682894989510C_1(::Struct_2_8BC17172057B321A a1, ::Struct_2_8BC17172057B321A a2)
	{
		return ((::System::Boolean(*)(::Struct_2_8BC17172057B321A, ::Struct_2_8BC17172057B321A))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_METHOD_2_51F682894989510C_1_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8BC17172057B321A_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
