#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Camera; }

#define STRUCT_2_7AAFF9DFD3D41721__CTOR_OFFSET UNITYSDK_OFFSET(0x10400)

inline static constexpr unsigned int Struct_2_7AAFF9DFD3D41721_TypeDefinitionIndex = 73053;

struct alignas(8) Struct_2_7AAFF9DFD3D41721
{
	::UnityEngine::Vector2 GBBBEOMKBPN; // 0x10
	::UnityEngine::Camera* ODPDOBEGCOE; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + STRUCT_2_7AAFF9DFD3D41721__CTOR_OFFSET))(this, a1, a2);
	}
};
