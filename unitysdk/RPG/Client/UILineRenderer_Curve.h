#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UILineRenderer_Curve_TypeDefinitionIndex = 66976;

	struct alignas(4) UILineRenderer_Curve
	{
		::UnityEngine::Vector2 startPoint; // 0x10
		::UnityEngine::Vector2 endPoint; // 0x18
		::UnityEngine::Vector2 startTangentLength; // 0x20
		::UnityEngine::Vector2 endTangentLength; // 0x28
		::System::Int32 segments; // 0x30
		::System::Int32 startIndex; // 0x34
	};
}
