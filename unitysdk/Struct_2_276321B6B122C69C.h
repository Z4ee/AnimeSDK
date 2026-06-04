#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_276321B6B122C69C_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7DFB0)
#define STRUCT_2_276321B6B122C69C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7DE80)
#define STRUCT_2_276321B6B122C69C_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BC6FF0)
#define STRUCT_2_276321B6B122C69C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DD60)
#define STRUCT_2_276321B6B122C69C_GET_ID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_276321B6B122C69C_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E110)
#define STRUCT_2_276321B6B122C69C_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x14132050)
#define STRUCT_2_276321B6B122C69C_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x14131F30)
#define STRUCT_2_276321B6B122C69C_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2BC6FD0)
#define STRUCT_2_276321B6B122C69C_SET_ID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_276321B6B122C69C_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x21F0)
#define STRUCT_2_276321B6B122C69C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC6FC0)
#define STRUCT_2_276321B6B122C69C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_TypeDefinitionIndex = 48558;

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
