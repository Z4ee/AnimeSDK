#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_019938BC9C50B169_2_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x79FE0)
#define STRUCT_2_019938BC9C50B169_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79F50)
#define STRUCT_2_019938BC9C50B169_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x88A60)
#define STRUCT_2_019938BC9C50B169_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79EB0)
#define STRUCT_2_019938BC9C50B169_2_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_019938BC9C50B169_2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xABDB850)
#define STRUCT_2_019938BC9C50B169_2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xABDB7C0)
#define STRUCT_2_019938BC9C50B169_2_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x889F0)
#define STRUCT_2_019938BC9C50B169_2_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_019938BC9C50B169_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x889E0)
#define STRUCT_2_019938BC9C50B169_2__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_2_TypeDefinitionIndex = 48519;

struct alignas(4) Struct_2_019938BC9C50B169_2
{
	::System::UInt32 _AvatarID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_019938BC9C50B169_2 a1, ::Struct_2_019938BC9C50B169_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_2, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_019938BC9C50B169_2 a1, ::Struct_2_019938BC9C50B169_2 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_2, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_019938BC9C50B169_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_2_DECONSTRUCT_OFFSET))(this, a1);
	}
};
