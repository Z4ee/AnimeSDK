#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define STRUCT_2_DB26017D92737DC1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7F4DD0)
#define STRUCT_2_DB26017D92737DC1__CTOR_OFFSET UNITYSDK_OFFSET(0x4973D0)

inline static constexpr unsigned int Struct_2_DB26017D92737DC1_TypeDefinitionIndex = 72055;

struct alignas(8) Struct_2_DB26017D92737DC1
{
	::UnityEngine::Camera* Field_2_0; // 0x10
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20

	::System::Void _ctor(::UnityEngine::Camera* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + STRUCT_2_DB26017D92737DC1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DB26017D92737DC1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
