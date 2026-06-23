#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_D1EFB72CF64C82FB__CTOR_OFFSET UNITYSDK_OFFSET(0x81EA70)

inline static constexpr unsigned int Struct_2_D1EFB72CF64C82FB_TypeDefinitionIndex = 65842;

struct alignas(4) Struct_2_D1EFB72CF64C82FB
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D1EFB72CF64C82FB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
