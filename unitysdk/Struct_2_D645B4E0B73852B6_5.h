#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_D645B4E0B73852B6_5_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38F1090)
#define STRUCT_2_D645B4E0B73852B6_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38F1080)
#define STRUCT_2_D645B4E0B73852B6_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x38F1060)
#define STRUCT_2_D645B4E0B73852B6_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38F1050)
#define STRUCT_2_D645B4E0B73852B6_5_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x167710)
#define STRUCT_2_D645B4E0B73852B6_5_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1565F200)
#define STRUCT_2_D645B4E0B73852B6_5_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1565F1E0)
#define STRUCT_2_D645B4E0B73852B6_5_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x38F0FE0)
#define STRUCT_2_D645B4E0B73852B6_5_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x167520)
#define STRUCT_2_D645B4E0B73852B6_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38F0FD0)
#define STRUCT_2_D645B4E0B73852B6_5__CTOR_OFFSET UNITYSDK_OFFSET(0x167520)

inline static constexpr unsigned int Struct_2_D645B4E0B73852B6_5_TypeDefinitionIndex = 49616;

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
