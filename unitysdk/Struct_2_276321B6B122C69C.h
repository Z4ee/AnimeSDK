#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_276321B6B122C69C_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13AA0)
#define STRUCT_2_276321B6B122C69C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E82620)
#define STRUCT_2_276321B6B122C69C_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E825F0)
#define STRUCT_2_276321B6B122C69C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E825E0)
#define STRUCT_2_276321B6B122C69C_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define STRUCT_2_276321B6B122C69C_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFDF0)
#define STRUCT_2_276321B6B122C69C_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x163E7870)
#define STRUCT_2_276321B6B122C69C_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x163E7850)
#define STRUCT_2_276321B6B122C69C_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E825C0)
#define STRUCT_2_276321B6B122C69C_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define STRUCT_2_276321B6B122C69C_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFE00)
#define STRUCT_2_276321B6B122C69C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E825B0)
#define STRUCT_2_276321B6B122C69C__CTOR_OFFSET UNITYSDK_OFFSET(0x11150)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_TypeDefinitionIndex = 51935;

struct alignas(4) Struct_2_276321B6B122C69C
{
	::System::UInt32 _ID_k__BackingField; // 0x10
	::System::UInt32 _Level_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_276321B6B122C69C a1, ::Struct_2_276321B6B122C69C a2)
	{
		return ((::System::Boolean(*)(::Struct_2_276321B6B122C69C, ::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_276321B6B122C69C a1, ::Struct_2_276321B6B122C69C a2)
	{
		return ((::System::Boolean(*)(::Struct_2_276321B6B122C69C, ::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_276321B6B122C69C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
