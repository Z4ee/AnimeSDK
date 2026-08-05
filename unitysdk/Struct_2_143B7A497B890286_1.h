#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }

#define STRUCT_2_143B7A497B890286_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7B9BE0)
#define STRUCT_2_143B7A497B890286_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B9B40)
#define STRUCT_2_143B7A497B890286_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B9BF0)
#define STRUCT_2_143B7A497B890286_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7B9CB0)
#define STRUCT_2_143B7A497B890286_1_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7B9D20)
#define STRUCT_2_143B7A497B890286_1__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

inline static constexpr unsigned int Struct_2_143B7A497B890286_1_TypeDefinitionIndex = 90516;

struct alignas(4) Struct_2_143B7A497B890286_1
{
	::UnityEngine::Vector2 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_7; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_143B7A497B890286_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_143B7A497B890286_1))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_143B7A497B890286_1_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
