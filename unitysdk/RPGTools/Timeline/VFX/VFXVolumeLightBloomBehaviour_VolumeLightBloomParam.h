#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXVolumeLightBloomBehaviour_VolumeLightBloomParam_TypeDefinitionIndex = 46903;

	struct alignas(4) VFXVolumeLightBloomBehaviour_VolumeLightBloomParam
	{
		::System::Single LightRadius; // 0x10
		::UnityEngine::Color ScatterColor; // 0x14
		::System::Single ScatterIntensity; // 0x24
		::System::Single FalloffPower; // 0x28
	};
}
