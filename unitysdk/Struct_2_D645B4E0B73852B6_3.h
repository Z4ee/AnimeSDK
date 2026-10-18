#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_D645B4E0B73852B6_3_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF130)
#define STRUCT_2_D645B4E0B73852B6_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF2BA0)
#define STRUCT_2_D645B4E0B73852B6_3_EQUALS_OFFSET UNITYSDK_OFFSET(0xF2B40)
#define STRUCT_2_D645B4E0B73852B6_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF2B30)
#define STRUCT_2_D645B4E0B73852B6_3_GET_ID_OFFSET UNITYSDK_OFFSET(0xE620)
#define STRUCT_2_D645B4E0B73852B6_3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE249DC0)
#define STRUCT_2_D645B4E0B73852B6_3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE249DA0)
#define STRUCT_2_D645B4E0B73852B6_3_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xF2AC0)
#define STRUCT_2_D645B4E0B73852B6_3_SET_ID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define STRUCT_2_D645B4E0B73852B6_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF2AB0)
#define STRUCT_2_D645B4E0B73852B6_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF2AA0)

inline static constexpr unsigned int Struct_2_D645B4E0B73852B6_3_TypeDefinitionIndex = 51959;

struct alignas(4) Struct_2_D645B4E0B73852B6_3
{
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_D645B4E0B73852B6_3 a1, ::Struct_2_D645B4E0B73852B6_3 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_3, ::Struct_2_D645B4E0B73852B6_3))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_D645B4E0B73852B6_3 a1, ::Struct_2_D645B4E0B73852B6_3 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_3, ::Struct_2_D645B4E0B73852B6_3))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_D645B4E0B73852B6_3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_3))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_3_DECONSTRUCT_OFFSET))(this, a1);
	}
};
