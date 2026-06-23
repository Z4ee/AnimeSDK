#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FAnimationClipInfo.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_GPUIANIMATIONCLIPDATA_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x4122B0)
#define NPCCROWD_ANIMATION_GPUIANIMATIONCLIPDATA_ISCLIPLOOPING_OFFSET UNITYSDK_OFFSET(0x412350)
#define NPCCROWD_ANIMATION_GPUIANIMATIONCLIPDATA_ISLOOPDISABLED_OFFSET UNITYSDK_OFFSET(0x412300)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUIAnimationClipData_TypeDefinitionIndex = 50323;

	struct alignas(8) GPUIAnimationClipData
	{
		::System::Int32 clipIndex; // 0x10
		::System::Int32 clipStartFrame; // 0x14
		::System::Int32 clipFrameCount; // 0x18
		::System::Int32 hasRootMotion; // 0x1C
		::System::Single length; // 0x20
		::System::Int32 isLoopDisabled; // 0x24
		::System::Int32 isClipLooping; // 0x28
		::NPCCrowd::Animation::FAnimationClipInfo clipInfo; // 0x30
		::System::Int32 clipTextureWidth; // 0x40
		::System::Int32 clipTextureHeight; // 0x44

		::System::Boolean HasRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIANIMATIONCLIPDATA_HASROOTMOTION_OFFSET))(this);
		}

		::System::Boolean IsLoopDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIANIMATIONCLIPDATA_ISLOOPDISABLED_OFFSET))(this);
		}

		::System::Boolean IsClipLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUIANIMATIONCLIPDATA_ISCLIPLOOPING_OFFSET))(this);
		}
	};
}
