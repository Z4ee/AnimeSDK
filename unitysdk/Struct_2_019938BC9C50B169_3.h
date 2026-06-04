#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_019938BC9C50B169_3_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x79FE0)
#define STRUCT_2_019938BC9C50B169_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79F50)
#define STRUCT_2_019938BC9C50B169_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCDE60)
#define STRUCT_2_019938BC9C50B169_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79EB0)
#define STRUCT_2_019938BC9C50B169_3_GET_ID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_019938BC9C50B169_3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x144D8F50)
#define STRUCT_2_019938BC9C50B169_3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x144D8EC0)
#define STRUCT_2_019938BC9C50B169_3_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2BCDDF0)
#define STRUCT_2_019938BC9C50B169_3_SET_ID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_019938BC9C50B169_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BCDDE0)
#define STRUCT_2_019938BC9C50B169_3__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_3_TypeDefinitionIndex = 48580;

struct alignas(4) Struct_2_019938BC9C50B169_3
{
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_019938BC9C50B169_3 a1, ::Struct_2_019938BC9C50B169_3 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_3, ::Struct_2_019938BC9C50B169_3))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_019938BC9C50B169_3 a1, ::Struct_2_019938BC9C50B169_3 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_3, ::Struct_2_019938BC9C50B169_3))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_019938BC9C50B169_3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_3))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_3_DECONSTRUCT_OFFSET))(this, a1);
	}
};
