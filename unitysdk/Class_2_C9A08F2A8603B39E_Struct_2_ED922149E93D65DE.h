#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_ED922149E93D65DE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8845B0)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_ED922149E93D65DE_EQUALS_OFFSET UNITYSDK_OFFSET(0x884450)
#define CLASS_2_C9A08F2A8603B39E_STRUCT_2_ED922149E93D65DE_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x8845C0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE_TypeDefinitionIndex = 74890;

struct alignas(4) Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE
{
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x20

	::System::Boolean Equals(::Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C9A08F2A8603B39E_Struct_2_ED922149E93D65DE))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_ED922149E93D65DE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_ED922149E93D65DE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_STRUCT_2_ED922149E93D65DE_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
