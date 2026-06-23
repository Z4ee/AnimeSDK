#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define NPCCROWD_ANIMATION_JOB_APPLYEXPORTCPUREADGPUBONEUPDATESJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6C8810)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int ApplyExportCPUReadGPUBoneUpdatesJob_TypeDefinitionIndex = 58598;

	struct alignas(8) ApplyExportCPUReadGPUBoneUpdatesJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> exportBoneTransformArray; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bindPoses; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> exposedBoneIndexes; // 0x30
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> animationData; // 0x40
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> crowdAnimatorControllerData; // 0x50
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bakedAnimationData; // 0x60
		::System::Single currentTime; // 0x70
		::System::Int32 frameRate; // 0x74

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_APPLYEXPORTCPUREADGPUBONEUPDATESJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
