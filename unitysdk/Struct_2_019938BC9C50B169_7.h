#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_019938BC9C50B169_7_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x79FE0)
#define STRUCT_2_019938BC9C50B169_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x79F50)
#define STRUCT_2_019938BC9C50B169_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x2B85A80)
#define STRUCT_2_019938BC9C50B169_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x79EB0)
#define STRUCT_2_019938BC9C50B169_7_GET_ID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_019938BC9C50B169_7_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12AAE870)
#define STRUCT_2_019938BC9C50B169_7_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12AAE7E0)
#define STRUCT_2_019938BC9C50B169_7_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2B85A10)
#define STRUCT_2_019938BC9C50B169_7_SET_ID_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_019938BC9C50B169_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2B85A00)
#define STRUCT_2_019938BC9C50B169_7__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)

inline static constexpr unsigned int Struct_2_019938BC9C50B169_7_TypeDefinitionIndex = 48605;

struct alignas(4) Struct_2_019938BC9C50B169_7
{
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_SET_ID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_019938BC9C50B169_7 a1, ::Struct_2_019938BC9C50B169_7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_7, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_019938BC9C50B169_7 a1, ::Struct_2_019938BC9C50B169_7 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_019938BC9C50B169_7, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_019938BC9C50B169_7 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_7))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_019938BC9C50B169_7_DECONSTRUCT_OFFSET))(this, a1);
	}
};
