#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_1FE873E4ECDC93A1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x15490)
#define STRUCT_2_1FE873E4ECDC93A1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15450)
#define STRUCT_2_1FE873E4ECDC93A1_EQUALS_OFFSET UNITYSDK_OFFSET(0x153D0)
#define STRUCT_2_1FE873E4ECDC93A1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x153C0)
#define STRUCT_2_1FE873E4ECDC93A1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB460DF0)
#define STRUCT_2_1FE873E4ECDC93A1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB460DA0)
#define STRUCT_2_1FE873E4ECDC93A1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x153A0)
#define STRUCT_2_1FE873E4ECDC93A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15390)
#define STRUCT_2_1FE873E4ECDC93A1__CTOR_OFFSET UNITYSDK_OFFSET(0x15360)

inline static constexpr unsigned int Struct_2_1FE873E4ECDC93A1_TypeDefinitionIndex = 49756;

struct alignas(8) Struct_2_1FE873E4ECDC93A1
{
	::System::String* BDACPPLKLGL; // 0x10
	::UnityEngine::Transform* ICGKFDEILKA; // 0x18
	::UnityEngine::Transform* OLCHHDKKPLI; // 0x20
	::System::Single IEHPFADHJFD; // 0x28
	::UnityEngine::Transform* BNLCCCCMABF; // 0x30

	::System::Void _ctor(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Single a4, ::UnityEngine::Transform* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_1FE873E4ECDC93A1 a1, ::Struct_2_1FE873E4ECDC93A1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1FE873E4ECDC93A1, ::Struct_2_1FE873E4ECDC93A1))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_1FE873E4ECDC93A1 a1, ::Struct_2_1FE873E4ECDC93A1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_1FE873E4ECDC93A1, ::Struct_2_1FE873E4ECDC93A1))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_1FE873E4ECDC93A1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_1FE873E4ECDC93A1))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::String*& a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Transform*& a3, ::System::Single& a4, ::UnityEngine::Transform*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::System::Single&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + STRUCT_2_1FE873E4ECDC93A1_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
