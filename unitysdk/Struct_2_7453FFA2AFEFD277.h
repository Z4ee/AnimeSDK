#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_7453FFA2AFEFD277_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C52650)
#define STRUCT_2_7453FFA2AFEFD277_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C52B20)
#define STRUCT_2_7453FFA2AFEFD277_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52AC0)
#define STRUCT_2_7453FFA2AFEFD277_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52AB0)
#define STRUCT_2_7453FFA2AFEFD277_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC39E40)
#define STRUCT_2_7453FFA2AFEFD277_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC39E20)
#define STRUCT_2_7453FFA2AFEFD277_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C529D0)
#define STRUCT_2_7453FFA2AFEFD277_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C529C0)
#define STRUCT_2_7453FFA2AFEFD277__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

inline static constexpr unsigned int Struct_2_7453FFA2AFEFD277_TypeDefinitionIndex = 44194;

struct alignas(8) Struct_2_7453FFA2AFEFD277
{
	::System::String* ELEPDOMDAGA; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_7453FFA2AFEFD277 a1, ::Struct_2_7453FFA2AFEFD277 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_7453FFA2AFEFD277, ::Struct_2_7453FFA2AFEFD277))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_7453FFA2AFEFD277 a1, ::Struct_2_7453FFA2AFEFD277 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_7453FFA2AFEFD277, ::Struct_2_7453FFA2AFEFD277))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_7453FFA2AFEFD277 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7453FFA2AFEFD277))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + STRUCT_2_7453FFA2AFEFD277_DECONSTRUCT_OFFSET))(this, a1);
	}
};
