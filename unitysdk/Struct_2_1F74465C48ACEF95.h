#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_1F74465C48ACEF95_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x195A0)
#define STRUCT_2_1F74465C48ACEF95_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19570)
#define STRUCT_2_1F74465C48ACEF95_EQUALS_OFFSET UNITYSDK_OFFSET(0x19500)
#define STRUCT_2_1F74465C48ACEF95_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194F0)
#define STRUCT_2_1F74465C48ACEF95_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB6ADEB0)
#define STRUCT_2_1F74465C48ACEF95_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB6ADE70)
#define STRUCT_2_1F74465C48ACEF95_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x194D0)
#define STRUCT_2_1F74465C48ACEF95_TOSTRING_OFFSET UNITYSDK_OFFSET(0x194C0)
#define STRUCT_2_1F74465C48ACEF95__CTOR_OFFSET UNITYSDK_OFFSET(0x194B0)

inline static constexpr unsigned int Struct_2_1F74465C48ACEF95_TypeDefinitionIndex = 49761;

struct alignas(8) Struct_2_1F74465C48ACEF95
{
	::UnityEngine::Transform* ICGKFDEILKA; // 0x10
	::UnityEngine::Transform* OLCHHDKKPLI; // 0x18
	::System::Single IEHPFADHJFD; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_1F74465C48ACEF95 a1, ::Struct_2_1F74465C48ACEF95 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1F74465C48ACEF95, ::Struct_2_1F74465C48ACEF95))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_1F74465C48ACEF95 a1, ::Struct_2_1F74465C48ACEF95 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1F74465C48ACEF95, ::Struct_2_1F74465C48ACEF95))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_1F74465C48ACEF95 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1F74465C48ACEF95))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::UnityEngine::Transform*& a1, ::UnityEngine::Transform*& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::System::Single&))((::PBYTE)hIl2Cpp + STRUCT_2_1F74465C48ACEF95_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
	}
};
