#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPMath_TransformBoundsTmp_TypeDefinitionIndex = 36340;

	struct alignas(4) RPMath_TransformBoundsTmp
	{
		::UnityEngine::Vector3 right; // 0x10
		::UnityEngine::Vector3 up; // 0x1C
		::UnityEngine::Vector3 forward; // 0x28
		::UnityEngine::Vector3 pos; // 0x34
		::UnityEngine::Vector3 xa; // 0x40
		::UnityEngine::Vector3 xb; // 0x4C
		::UnityEngine::Vector3 ya; // 0x58
		::UnityEngine::Vector3 yb; // 0x64
		::UnityEngine::Vector3 za; // 0x70
		::UnityEngine::Vector3 zb; // 0x7C
		::UnityEngine::Vector3 min; // 0x88
		::UnityEngine::Vector3 max; // 0x94
	};
}
