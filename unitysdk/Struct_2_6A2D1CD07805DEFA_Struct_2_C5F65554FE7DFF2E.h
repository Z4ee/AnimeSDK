#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_6A2D1CD07805DEFA_STRUCT_2_C5F65554FE7DFF2E__CTOR_OFFSET UNITYSDK_OFFSET(0x7729F0)

inline static constexpr unsigned int Struct_2_6A2D1CD07805DEFA_Struct_2_C5F65554FE7DFF2E_TypeDefinitionIndex = 40652;

struct alignas(4) Struct_2_6A2D1CD07805DEFA_Struct_2_C5F65554FE7DFF2E
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::Boolean Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_6A2D1CD07805DEFA_STRUCT_2_C5F65554FE7DFF2E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
