#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_276321B6B122C69C_6_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7DD00)
#define STRUCT_2_276321B6B122C69C_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x82EF0)
#define STRUCT_2_276321B6B122C69C_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x82E90)
#define STRUCT_2_276321B6B122C69C_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x82E80)
#define STRUCT_2_276321B6B122C69C_6_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_276321B6B122C69C_6_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x1E120)
#define STRUCT_2_276321B6B122C69C_6_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB854340)
#define STRUCT_2_276321B6B122C69C_6_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB854320)
#define STRUCT_2_276321B6B122C69C_6_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x82E60)
#define STRUCT_2_276321B6B122C69C_6_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x2E950)
#define STRUCT_2_276321B6B122C69C_6_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x2200)
#define STRUCT_2_276321B6B122C69C_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82E50)
#define STRUCT_2_276321B6B122C69C_6__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_6_TypeDefinitionIndex = 68087;

struct alignas(4) Struct_2_276321B6B122C69C_6
{
	::System::UInt32 _AvatarID_k__BackingField; // 0x10
	::System::UInt32 _TeamID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TeamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_GET_TEAMID_OFFSET))(this);
	}

	::System::Void set_TeamID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_SET_TEAMID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_276321B6B122C69C_6 a1, ::Struct_2_276321B6B122C69C_6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_276321B6B122C69C_6, ::Struct_2_276321B6B122C69C_6))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_276321B6B122C69C_6 a1, ::Struct_2_276321B6B122C69C_6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_276321B6B122C69C_6, ::Struct_2_276321B6B122C69C_6))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_276321B6B122C69C_6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_276321B6B122C69C_6))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_6_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
