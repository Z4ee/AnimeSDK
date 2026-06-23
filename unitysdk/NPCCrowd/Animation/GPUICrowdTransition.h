#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NPCCROWD_ANIMATION_GPUICROWDTRANSITION_SETDATA_OFFSET UNITYSDK_OFFSET(0xD5CD400)
#define NPCCROWD_ANIMATION_GPUICROWDTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xD5CD510)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUICrowdTransition_TypeDefinitionIndex = 45276;

	class GPUICrowdTransition : public ::System::Object
	{
	public:
		::System::Int32 layerIdx; // 0x10
		::System::Single totalTime; // 0x14
		::System::Single startTime; // 0x18
		::UnityEngine::Vector4 startWeights; // 0x1C
		::UnityEngine::Vector4 endWeights; // 0x2C
		::System::Int32 endActiveClipCount; // 0x3C
		::System::Int32 arrayIndex; // 0x40
		::System::Int32 transitioningClipCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUICROWDTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void SetData(::System::Int32 arrayIndex, ::System::Single startTime, ::System::Single totalTime, ::System::Int32 transitioningClipCount, ::UnityEngine::Vector4 startWeights, ::UnityEngine::Vector4 endWeights, ::System::Int32 endActiveClipCount, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_GPUICROWDTRANSITION_SETDATA_OFFSET))(this, arrayIndex, startTime, totalTime, transitioningClipCount, startWeights, endWeights, endActiveClipCount, layerIdx);
		}
	};
}
