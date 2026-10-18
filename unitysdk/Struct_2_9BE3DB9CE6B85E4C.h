#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_9BE3DB9CE6B85E4C_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C52650)
#define STRUCT_2_9BE3DB9CE6B85E4C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C533B0)
#define STRUCT_2_9BE3DB9CE6B85E4C_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C53350)
#define STRUCT_2_9BE3DB9CE6B85E4C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C53340)
#define STRUCT_2_9BE3DB9CE6B85E4C_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC5A260)
#define STRUCT_2_9BE3DB9CE6B85E4C_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC5A240)
#define STRUCT_2_9BE3DB9CE6B85E4C_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C53260)
#define STRUCT_2_9BE3DB9CE6B85E4C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C53250)
#define STRUCT_2_9BE3DB9CE6B85E4C__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)

inline static constexpr unsigned int Struct_2_9BE3DB9CE6B85E4C_TypeDefinitionIndex = 44221;

struct alignas(8) Struct_2_9BE3DB9CE6B85E4C
{
	::System::Action* IMDLGFPMPEK; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_9BE3DB9CE6B85E4C a1, ::Struct_2_9BE3DB9CE6B85E4C a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9BE3DB9CE6B85E4C, ::Struct_2_9BE3DB9CE6B85E4C))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_9BE3DB9CE6B85E4C a1, ::Struct_2_9BE3DB9CE6B85E4C a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9BE3DB9CE6B85E4C, ::Struct_2_9BE3DB9CE6B85E4C))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_9BE3DB9CE6B85E4C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9BE3DB9CE6B85E4C))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::Action*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + STRUCT_2_9BE3DB9CE6B85E4C_DECONSTRUCT_OFFSET))(this, a1);
	}
};
