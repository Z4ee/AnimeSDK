#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageRawData.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageClipData_TypeDefinitionIndex = 66925;

	struct alignas(4) MontageClipData
	{
		::NPCCrowd::Animation::MontageRawData rawData; // 0x10
		::System::Single length; // 0x2C
		::NPCCrowd::Animation::NPCAnimationLib_AnimationId sampleID; // 0x30
	};
}
