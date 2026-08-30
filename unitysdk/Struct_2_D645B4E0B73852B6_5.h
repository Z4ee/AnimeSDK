#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_D645B4E0B73852B6_5_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3AA4710)
#define STRUCT_2_D645B4E0B73852B6_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AB54C0)
#define STRUCT_2_D645B4E0B73852B6_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AB54A0)
#define STRUCT_2_D645B4E0B73852B6_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AB5490)
#define STRUCT_2_D645B4E0B73852B6_5_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x19050)
#define STRUCT_2_D645B4E0B73852B6_5_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17CD86E0)
#define STRUCT_2_D645B4E0B73852B6_5_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17CD86C0)
#define STRUCT_2_D645B4E0B73852B6_5_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3AB5420)
#define STRUCT_2_D645B4E0B73852B6_5_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define STRUCT_2_D645B4E0B73852B6_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AB5410)
#define STRUCT_2_D645B4E0B73852B6_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

inline static constexpr unsigned int Struct_2_D645B4E0B73852B6_5_TypeDefinitionIndex = 52274;

struct alignas(4) Struct_2_D645B4E0B73852B6_5
{
	::System::UInt32 _WorldLevel_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_WorldLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_GET_WORLDLEVEL_OFFSET))(this);
	}

	::System::Void set_WorldLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_SET_WORLDLEVEL_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_D645B4E0B73852B6_5 a1, ::Struct_2_D645B4E0B73852B6_5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_5, ::Struct_2_D645B4E0B73852B6_5))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_D645B4E0B73852B6_5 a1, ::Struct_2_D645B4E0B73852B6_5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_5, ::Struct_2_D645B4E0B73852B6_5))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_D645B4E0B73852B6_5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_5_DECONSTRUCT_OFFSET))(this, a1);
	}
};
