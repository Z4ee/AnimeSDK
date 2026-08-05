#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneCollection_1.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONBLENDINGUTILS_ENSURE01_OFFSET UNITYSDK_OFFSET(0xD88D990)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONBLENDINGUTILS_GETLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0xD88D9F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationBlendingUtils_TypeDefinitionIndex = 88287;

	class AnimationSubManager_AnimationBlendingUtils : public ::System::Object
	{
	public:
		// static const ::System::Single MinTotalRatio; // 0x0

		static ::System::Single Ensure01(::System::Double value, ::System::Boolean loop)
		{
			return ((::System::Single(*)(::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONBLENDINGUTILS_ENSURE01_OFFSET))(value, loop);
		}

		static ::System::Int32 GetLoopCount(::System::Double from, ::System::Double to, ::System::Boolean loop)
		{
			return ((::System::Int32(*)(::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONBLENDINGUTILS_GETLOOPCOUNT_OFFSET))(from, to, loop);
		}
	};
}
