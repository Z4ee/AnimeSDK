#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Animation; }

#define STRUCT_2_96E2F7F1BD99D592_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2309020)
#define STRUCT_2_96E2F7F1BD99D592_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2309000)
#define STRUCT_2_96E2F7F1BD99D592_EQUALS_OFFSET UNITYSDK_OFFSET(0x2308F90)
#define STRUCT_2_96E2F7F1BD99D592_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2308F80)
#define STRUCT_2_96E2F7F1BD99D592_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12CC6B10)
#define STRUCT_2_96E2F7F1BD99D592_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12CC6AE0)
#define STRUCT_2_96E2F7F1BD99D592_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2308DF0)
#define STRUCT_2_96E2F7F1BD99D592_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2308DE0)
#define STRUCT_2_96E2F7F1BD99D592__CTOR_OFFSET UNITYSDK_OFFSET(0x10400)

inline static constexpr unsigned int Struct_2_96E2F7F1BD99D592_TypeDefinitionIndex = 49758;

struct alignas(8) Struct_2_96E2F7F1BD99D592
{
	::UnityEngine::Animation* IJPHJEDPHGN; // 0x10
	::System::String* OBKONNDLKDL; // 0x18

	::System::Void _ctor(::UnityEngine::Animation* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_96E2F7F1BD99D592 a1, ::Struct_2_96E2F7F1BD99D592 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_96E2F7F1BD99D592, ::Struct_2_96E2F7F1BD99D592))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_96E2F7F1BD99D592 a1, ::Struct_2_96E2F7F1BD99D592 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_96E2F7F1BD99D592, ::Struct_2_96E2F7F1BD99D592))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_96E2F7F1BD99D592 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_96E2F7F1BD99D592))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::UnityEngine::Animation*& a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*&, ::System::String*&))((::PBYTE)hIl2Cpp + STRUCT_2_96E2F7F1BD99D592_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
