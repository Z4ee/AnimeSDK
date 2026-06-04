#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_BC950E36747FB4C9_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7DFB0)
#define STRUCT_2_BC950E36747FB4C9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BC3470)
#define STRUCT_2_BC950E36747FB4C9_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BC3460)
#define STRUCT_2_BC950E36747FB4C9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BC3350)
#define STRUCT_2_BC950E36747FB4C9_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1E110)
#define STRUCT_2_BC950E36747FB4C9_GET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define STRUCT_2_BC950E36747FB4C9_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13960430)
#define STRUCT_2_BC950E36747FB4C9_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13960310)
#define STRUCT_2_BC950E36747FB4C9_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2BC3330)
#define STRUCT_2_BC950E36747FB4C9_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x21F0)
#define STRUCT_2_BC950E36747FB4C9_SET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_BC950E36747FB4C9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC3320)
#define STRUCT_2_BC950E36747FB4C9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7BBE0)
#define STRUCT_2_BC950E36747FB4C9__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

inline static constexpr unsigned int Struct_2_BC950E36747FB4C9_TypeDefinitionIndex = 48591;

struct alignas(4) Struct_2_BC950E36747FB4C9
{
	::Struct_2_019938BC9C50B169_2 _SpecificPathIdentifier_k__BackingField; // 0x10
	::System::UInt32 _EnhancedID_k__BackingField; // 0x14

	::System::Void _ctor(::Struct_2_019938BC9C50B169_2 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_019938BC9C50B169_2 get_SpecificPathIdentifier()
	{
		return ((::Struct_2_019938BC9C50B169_2(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GET_SPECIFICPATHIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_SpecificPathIdentifier(::Struct_2_019938BC9C50B169_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_SET_SPECIFICPATHIDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_EnhancedID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GET_ENHANCEDID_OFFSET))(this);
	}

	::System::Void set_EnhancedID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_SET_ENHANCEDID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_BC950E36747FB4C9 a1, ::Struct_2_BC950E36747FB4C9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BC950E36747FB4C9, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_BC950E36747FB4C9 a1, ::Struct_2_BC950E36747FB4C9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BC950E36747FB4C9, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::Struct_2_019938BC9C50B169_2& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
