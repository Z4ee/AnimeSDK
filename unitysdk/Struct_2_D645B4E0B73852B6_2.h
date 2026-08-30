#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_D645B4E0B73852B6_2_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3AA4710)
#define STRUCT_2_D645B4E0B73852B6_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AAF000)
#define STRUCT_2_D645B4E0B73852B6_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AAEFA0)
#define STRUCT_2_D645B4E0B73852B6_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AAEF90)
#define STRUCT_2_D645B4E0B73852B6_2_GET_ID_OFFSET UNITYSDK_OFFSET(0x19050)
#define STRUCT_2_D645B4E0B73852B6_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x178284F0)
#define STRUCT_2_D645B4E0B73852B6_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x178284D0)
#define STRUCT_2_D645B4E0B73852B6_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3AAEF20)
#define STRUCT_2_D645B4E0B73852B6_2_SET_ID_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define STRUCT_2_D645B4E0B73852B6_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AAEF10)
#define STRUCT_2_D645B4E0B73852B6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

inline static constexpr unsigned int Struct_2_D645B4E0B73852B6_2_TypeDefinitionIndex = 52251;

struct alignas(4) Struct_2_D645B4E0B73852B6_2
{
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_D645B4E0B73852B6_2 a1, ::Struct_2_D645B4E0B73852B6_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_2, ::Struct_2_D645B4E0B73852B6_2))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_D645B4E0B73852B6_2 a1, ::Struct_2_D645B4E0B73852B6_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6_2, ::Struct_2_D645B4E0B73852B6_2))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_D645B4E0B73852B6_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_2))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_2_DECONSTRUCT_OFFSET))(this, a1);
	}
};
