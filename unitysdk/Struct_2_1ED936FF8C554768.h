#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_1ED936FF8C554768_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x265BB0)
#define STRUCT_2_1ED936FF8C554768_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x265A80)
#define STRUCT_2_1ED936FF8C554768_EQUALS_OFFSET UNITYSDK_OFFSET(0x265A70)
#define STRUCT_2_1ED936FF8C554768_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x265960)
#define STRUCT_2_1ED936FF8C554768_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define STRUCT_2_1ED936FF8C554768_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define STRUCT_2_1ED936FF8C554768_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB2874C0)
#define STRUCT_2_1ED936FF8C554768_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB2873A0)
#define STRUCT_2_1ED936FF8C554768_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x265940)
#define STRUCT_2_1ED936FF8C554768_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x29130)
#define STRUCT_2_1ED936FF8C554768_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x1D50)
#define STRUCT_2_1ED936FF8C554768_TOSTRING_OFFSET UNITYSDK_OFFSET(0x265930)
#define STRUCT_2_1ED936FF8C554768__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)
#define STRUCT_2_1ED936FF8C554768___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x265BC0)

inline static constexpr unsigned int Struct_2_1ED936FF8C554768_TypeDefinitionIndex = 55581;

struct alignas(4) Struct_2_1ED936FF8C554768
{
	::System::UInt32 _AvatarID_k__BackingField; // 0x10
	::System::UInt32 _TeamID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_SET_AVATARID_OFFSET))(this, value);
	}

	::System::UInt32 get_TeamID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_GET_TEAMID_OFFSET))(this);
	}

	::System::Void set_TeamID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_SET_TEAMID_OFFSET))(this, value);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* builder)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_PRINTMEMBERS_OFFSET))(this, builder);
	}

	static ::System::Boolean op_Inequality(::Struct_2_1ED936FF8C554768 left, ::Struct_2_1ED936FF8C554768 right)
	{
		return ((::System::Boolean(*)(::Struct_2_1ED936FF8C554768, ::Struct_2_1ED936FF8C554768))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_OP_INEQUALITY_OFFSET))(left, right);
	}

	static ::System::Boolean op_Equality(::Struct_2_1ED936FF8C554768 left, ::Struct_2_1ED936FF8C554768 right)
	{
		return ((::System::Boolean(*)(::Struct_2_1ED936FF8C554768, ::Struct_2_1ED936FF8C554768))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_OP_EQUALITY_OFFSET))(left, right);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* obj)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_EQUALS_OFFSET))(this, obj);
	}

	::System::Boolean Equals_1(::Struct_2_1ED936FF8C554768 other)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1ED936FF8C554768))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_EQUALS_1_OFFSET))(this, other);
	}

	::System::Void Deconstruct(::System::UInt32& AvatarID, ::System::UInt32& TeamID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768_DECONSTRUCT_OFFSET))(this, AvatarID, TeamID);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1ED936FF8C554768___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
