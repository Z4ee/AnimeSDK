#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTickLayerData_TypeDefinitionIndex = 84090;

	struct alignas(4) MontageTickLayerData
	{
		::System::Single time; // 0x10
		::System::Single length; // 0x14
		::System::Single playSpeed; // 0x18
		::System::Boolean isLoop; // 0x1C
		::NPCCrowd::Animation::MontageTickData dataLayer1; // 0x20
		::NPCCrowd::Animation::MontageTickData dataLayer2; // 0x48
		::NPCCrowd::Animation::MontageTickData dataLayer3; // 0x70
		::NPCCrowd::Animation::MontageTickData dataLayer4; // 0x98
		::System::Boolean needBlend; // 0xC0
		::System::Single blendTime; // 0xC4
	};
}
