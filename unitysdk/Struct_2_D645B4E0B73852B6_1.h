#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_D645B4E0B73852B6_1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38F1090)
#define STRUCT_2_D645B4E0B73852B6_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3900250)
#define STRUCT_2_D645B4E0B73852B6_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x3900230)
#define STRUCT_2_D645B4E0B73852B6_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3900220)
#define STRUCT_2_D645B4E0B73852B6_1_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x167710)
#define STRUCT_2_D645B4E0B73852B6_1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1645C5B0)
#define STRUCT_2_D645B4E0B73852B6_1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1645C590)
#define STRUCT_2_D645B4E0B73852B6_1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x39001B0)
#define STRUCT_2_D645B4E0B73852B6_1_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x167520)
#define STRUCT_2_D645B4E0B73852B6_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39001A0)
#define STRUCT_2_D645B4E0B73852B6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167520)

inline static constexpr unsigned int Struct_2_D645B4E0B73852B6_1_TypeDefinitionIndex = 49532;

struct alignas(4) Struct_2_D645B4E0B73852B6_1
{
	::System::UInt32 _AvatarID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_D645B4E0B73852B6_1 a1, ::Struct_2_D645B4E0B73852B6_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_1, ::Struct_2_D645B4E0B73852B6_1))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_D645B4E0B73852B6_1 a1, ::Struct_2_D645B4E0B73852B6_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_1, ::Struct_2_D645B4E0B73852B6_1))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_D645B4E0B73852B6_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_1_DECONSTRUCT_OFFSET))(this, a1);
	}
};
