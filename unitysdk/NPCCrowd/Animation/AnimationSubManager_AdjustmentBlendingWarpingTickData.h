#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGTICKDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xD41BB30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingWarpingTickData_TypeDefinitionIndex = 57442;

	struct alignas(4) AnimationSubManager_AdjustmentBlendingWarpingTickData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingWarpingTickData_TypeDefinitionIndex)->GetStaticField(0xBA40);
		}
		::System::Boolean PreviousIsTicking; // 0x10
		::System::Boolean CurrentIsTicking; // 0x11
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData PreviousRootSampleData; // 0x14
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData CurrentRootSampleData; // 0x54

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGTICKDATA__CCTOR_OFFSET))();
		}
	};
}
