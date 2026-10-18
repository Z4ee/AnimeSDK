#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_EB9FCCF37933EBF9__CTOR_OFFSET UNITYSDK_OFFSET(0x10480)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Struct_2_EB9FCCF37933EBF9_TypeDefinitionIndex = 48945;

struct alignas(8) Class_1_8903D5CF5E1CFFB8_Struct_2_EB9FCCF37933EBF9
{
	::UnityEngine::Transform* JPDBDLEEHGK; // 0x10
	::UnityEngine::Transform* OGPNODHENKN; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_STRUCT_2_EB9FCCF37933EBF9__CTOR_OFFSET))(this, a1, a2);
	}
};
