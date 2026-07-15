#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_BC950E36747FB4C9_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38E4A80)
#define STRUCT_2_BC950E36747FB4C9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38F2540)
#define STRUCT_2_BC950E36747FB4C9_EQUALS_OFFSET UNITYSDK_OFFSET(0x38F2510)
#define STRUCT_2_BC950E36747FB4C9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38F2500)
#define STRUCT_2_BC950E36747FB4C9_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define STRUCT_2_BC950E36747FB4C9_GET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x167710)
#define STRUCT_2_BC950E36747FB4C9_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x158B7F10)
#define STRUCT_2_BC950E36747FB4C9_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x158B7EF0)
#define STRUCT_2_BC950E36747FB4C9_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x38F24E0)
#define STRUCT_2_BC950E36747FB4C9_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xA4B350)
#define STRUCT_2_BC950E36747FB4C9_SET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x167520)
#define STRUCT_2_BC950E36747FB4C9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38F24D0)
#define STRUCT_2_BC950E36747FB4C9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6E5720)
#define STRUCT_2_BC950E36747FB4C9__CTOR_OFFSET UNITYSDK_OFFSET(0x6E5720)

inline static constexpr unsigned int Struct_2_BC950E36747FB4C9_TypeDefinitionIndex = 49604;

struct alignas(4) Struct_2_BC950E36747FB4C9
{
	::Struct_2_D645B4E0B73852B6_1 _SpecificPathIdentifier_k__BackingField; // 0x10
	::System::UInt32 _EnhancedID_k__BackingField; // 0x14

	::System::Void _ctor(::Struct_2_D645B4E0B73852B6_1 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_D645B4E0B73852B6_1 get_SpecificPathIdentifier()
	{
		return ((::Struct_2_D645B4E0B73852B6_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_GET_SPECIFICPATHIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_SpecificPathIdentifier(::Struct_2_D645B4E0B73852B6_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_SET_SPECIFICPATHIDENTIFIER_OFFSET))(this, a1);
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

	::System::Void Deconstruct(::Struct_2_D645B4E0B73852B6_1& a1, ::System::UInt32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_BC950E36747FB4C9_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
