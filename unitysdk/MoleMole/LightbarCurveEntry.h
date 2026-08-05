#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Gradient; }

namespace MoleMole
{
	inline static constexpr unsigned int LightbarCurveEntry_TypeDefinitionIndex = 82284;

	struct alignas(8) LightbarCurveEntry
	{
		::UnityEngine::Gradient* gradient; // 0x10
		::System::Single duration; // 0x18
		::System::Int32 loopCount; // 0x1C
		::System::Boolean setThemeColorOnEnd; // 0x20
		::UnityEngine::Color endThemeColor; // 0x24
	};
}
