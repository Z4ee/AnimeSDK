#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_55B49D592F843701_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C53010)
#define STRUCT_2_55B49D592F843701_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C53000)
#define STRUCT_2_55B49D592F843701_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C52FA0)
#define STRUCT_2_55B49D592F843701_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C52F90)
#define STRUCT_2_55B49D592F843701_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC42010)
#define STRUCT_2_55B49D592F843701_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC41FF0)
#define STRUCT_2_55B49D592F843701_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C52F10)
#define STRUCT_2_55B49D592F843701_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C52F00)
#define STRUCT_2_55B49D592F843701__CTOR_OFFSET UNITYSDK_OFFSET(0x14E00)

inline static constexpr unsigned int Struct_2_55B49D592F843701_TypeDefinitionIndex = 44192;

struct alignas(4) Struct_2_55B49D592F843701
{
	::System::Single IEHPFADHJFD; // 0x10

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_55B49D592F843701 a1, ::Struct_2_55B49D592F843701 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_55B49D592F843701, ::Struct_2_55B49D592F843701))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_55B49D592F843701 a1, ::Struct_2_55B49D592F843701 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_55B49D592F843701, ::Struct_2_55B49D592F843701))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_55B49D592F843701 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_55B49D592F843701))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::Single& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + STRUCT_2_55B49D592F843701_DECONSTRUCT_OFFSET))(this, a1);
	}
};
