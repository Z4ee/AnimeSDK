#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DEA03B4D83AE9E3.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RenderTexture; }

#define STRUCT_2_472A43027E5B9162__CTOR_OFFSET UNITYSDK_OFFSET(0x3EB8A0)

inline static constexpr unsigned int Struct_2_472A43027E5B9162_TypeDefinitionIndex = 63595;

struct alignas(8) Struct_2_472A43027E5B9162
{
	::Enum_3_3DEA03B4D83AE9E3 Field_2_0; // 0x10
	::UnityEngine::RenderTexture* Field_2_1; // 0x18

	::System::Void _ctor(::UnityEngine::RenderTexture* a1, ::Enum_3_3DEA03B4D83AE9E3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::Enum_3_3DEA03B4D83AE9E3))((::PBYTE)hIl2Cpp + STRUCT_2_472A43027E5B9162__CTOR_OFFSET))(this, a1, a2);
	}
};
