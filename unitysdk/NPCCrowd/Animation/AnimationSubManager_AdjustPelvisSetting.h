#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustPelvisSetting_TypeDefinitionIndex = 70515;

	struct alignas(4) AnimationSubManager_AdjustPelvisSetting
	{
		::Struct_2_6402D4A3EAB8BDC8 LeftFoot; // 0x10
		::Struct_2_6402D4A3EAB8BDC8 RightFoot; // 0x14
		::Struct_2_6402D4A3EAB8BDC8 Pelvis; // 0x18
		::System::Single StartAdjustLegRatio; // 0x1C
	};
}
