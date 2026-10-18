#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Graphic; }

#define STRUCT_2_3E46F205C42BD67F_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2E82E40)
#define STRUCT_2_3E46F205C42BD67F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E82E10)
#define STRUCT_2_3E46F205C42BD67F_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E82DA0)
#define STRUCT_2_3E46F205C42BD67F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E82D90)
#define STRUCT_2_3E46F205C42BD67F_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1642C9A0)
#define STRUCT_2_3E46F205C42BD67F_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1642C960)
#define STRUCT_2_3E46F205C42BD67F_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E82D70)
#define STRUCT_2_3E46F205C42BD67F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E82D60)
#define STRUCT_2_3E46F205C42BD67F__CTOR_OFFSET UNITYSDK_OFFSET(0x2E82D40)

inline static constexpr unsigned int Struct_2_3E46F205C42BD67F_TypeDefinitionIndex = 49754;

struct alignas(8) Struct_2_3E46F205C42BD67F
{
	::UnityEngine::UI::Graphic* CEEGIDBAPJO; // 0x10
	::System::Single ICGKFDEILKA; // 0x18
	::System::Single OLCHHDKKPLI; // 0x1C
	::System::Single IEHPFADHJFD; // 0x20

	::System::Void _ctor(::UnityEngine::UI::Graphic* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_3E46F205C42BD67F a1, ::Struct_2_3E46F205C42BD67F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_3E46F205C42BD67F, ::Struct_2_3E46F205C42BD67F))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_3E46F205C42BD67F a1, ::Struct_2_3E46F205C42BD67F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_3E46F205C42BD67F, ::Struct_2_3E46F205C42BD67F))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_3E46F205C42BD67F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3E46F205C42BD67F))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::UnityEngine::UI::Graphic*& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + STRUCT_2_3E46F205C42BD67F_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4);
	}
};
