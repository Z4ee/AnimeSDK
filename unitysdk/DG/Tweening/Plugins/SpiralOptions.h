#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/SpiralMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace DG::Tweening::Plugins
{
	inline static constexpr unsigned int SpiralOptions_TypeDefinitionIndex = 34484;

	struct alignas(4) SpiralOptions
	{
		::System::Single depth; // 0x10
		::System::Single frequency; // 0x14
		::System::Single speed; // 0x18
		::DG::Tweening::SpiralMode mode; // 0x1C
		::System::Boolean snapping; // 0x20
		::System::Single unit; // 0x24
		::UnityEngine::Quaternion axisQ; // 0x28
	};
}
