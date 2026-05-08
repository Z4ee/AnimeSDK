#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NPCCROWD_ANIMATION_GPUICROWDTRANSITION_SETDATA_OFFSET UNITYSDK_OFFSET(0xCE61F50)
#define NPCCROWD_ANIMATION_GPUICROWDTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xCE62060)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int GPUICrowdTransition_TypeDefinitionIndex = 61150;

	class GPUICrowdTransition : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 startWeights; // 0x10
		::System::Int32 endActiveClipCount; // 0x20
		::System::Int32 transitioningClipCount; // 0x24
		::System::Int32 arrayIndex; // 0x28
		::System::Int32 layerIdx; // 0x2C
		::System::Single totalTime; // 0x30
		::System::Single startTime; // 0x34
		::UnityEngine::Vector4 endWeights; // 0x38

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
