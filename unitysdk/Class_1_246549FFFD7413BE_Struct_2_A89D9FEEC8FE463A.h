#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_246549FFFD7413BE_STRUCT_2_A89D9FEEC8FE463A__CTOR_OFFSET UNITYSDK_OFFSET(0x62DB40)

inline static constexpr unsigned int Class_1_246549FFFD7413BE_Struct_2_A89D9FEEC8FE463A_TypeDefinitionIndex = 43860;

struct alignas(4) Class_1_246549FFFD7413BE_Struct_2_A89D9FEEC8FE463A
{
	::System::Single Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x14

	::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_246549FFFD7413BE_STRUCT_2_A89D9FEEC8FE463A__CTOR_OFFSET))(this, a1, a2);
	}
};
