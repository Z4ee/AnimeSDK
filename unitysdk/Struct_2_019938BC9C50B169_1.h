#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_019938BC9C50B169_1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x79FE0)
#define STRUCT_2_019938BC9C50B169_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79F50)
#define STRUCT_2_019938BC9C50B169_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x18E0C90)
#define STRUCT_2_019938BC9C50B169_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79EB0)
#define STRUCT_2_019938BC9C50B169_1_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_019938BC9C50B169_1_METHOD_2_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0xFF46850)
#define STRUCT_2_019938BC9C50B169_1_METHOD_2_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x18E0C00)
#define STRUCT_2_019938BC9C50B169_1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFF46990)
#define STRUCT_2_019938BC9C50B169_1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFF46C90)
#define STRUCT_2_019938BC9C50B169_1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x18E0C20)
#define STRUCT_2_019938BC9C50B169_1_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_019938BC9C50B169_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18E0C10)
#define STRUCT_2_019938BC9C50B169_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_1_TypeDefinitionIndex = 48515;

struct alignas(4) Struct_2_019938BC9C50B169_1
{
	::System::UInt32 _RoleID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_RoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_GET_ROLEID_OFFSET))(this);
	}

	::System::Void set_RoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_SET_ROLEID_OFFSET))(this, a1);
	}

	static ::Struct_2_019938BC9C50B169_1 Method_2_187B3E3B8611027E()
	{
		return ((::Struct_2_019938BC9C50B169_1(*)())((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_METHOD_2_187B3E3B8611027E_OFFSET))();
	}

	::System::Boolean Method_2_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_METHOD_2_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_019938BC9C50B169_1 a1, ::Struct_2_019938BC9C50B169_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_1, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_019938BC9C50B169_1 a1, ::Struct_2_019938BC9C50B169_1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_1, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_019938BC9C50B169_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_1_DECONSTRUCT_OFFSET))(this, a1);
	}
};
