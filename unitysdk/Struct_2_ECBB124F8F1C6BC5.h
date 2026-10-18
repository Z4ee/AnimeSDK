#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_ECBB124F8F1C6BC5_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF2A80)
#define STRUCT_2_ECBB124F8F1C6BC5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF2A50)
#define STRUCT_2_ECBB124F8F1C6BC5_EQUALS_OFFSET UNITYSDK_OFFSET(0xF29E0)
#define STRUCT_2_ECBB124F8F1C6BC5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF29D0)
#define STRUCT_2_ECBB124F8F1C6BC5_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE221D10)
#define STRUCT_2_ECBB124F8F1C6BC5_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE221CD0)
#define STRUCT_2_ECBB124F8F1C6BC5_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xF29B0)
#define STRUCT_2_ECBB124F8F1C6BC5_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF29A0)
#define STRUCT_2_ECBB124F8F1C6BC5__CTOR_OFFSET UNITYSDK_OFFSET(0xB310)

inline static constexpr unsigned int Struct_2_ECBB124F8F1C6BC5_TypeDefinitionIndex = 49752;

struct alignas(8) Struct_2_ECBB124F8F1C6BC5
{
	::System::String* BDACPPLKLGL; // 0x10
	::UnityEngine::Transform* MCLLALGABAB; // 0x18
	::UnityEngine::Transform* BNLCCCCMABF; // 0x20

	::System::Void _ctor(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_ECBB124F8F1C6BC5 a1, ::Struct_2_ECBB124F8F1C6BC5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_ECBB124F8F1C6BC5, ::Struct_2_ECBB124F8F1C6BC5))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_ECBB124F8F1C6BC5 a1, ::Struct_2_ECBB124F8F1C6BC5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_ECBB124F8F1C6BC5, ::Struct_2_ECBB124F8F1C6BC5))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_ECBB124F8F1C6BC5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_ECBB124F8F1C6BC5))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::String*& a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Transform*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + STRUCT_2_ECBB124F8F1C6BC5_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
	}
};
