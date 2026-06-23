#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define NPCCROWD_ANIMATION_JOB_APPLYEXPORTGPUREADBACKGPUBONEUPDATESJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6A6890)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int ApplyExportGPUReadBackGPUBoneUpdatesJob_TypeDefinitionIndex = 73129;

	struct alignas(8) ApplyExportGPUReadBackGPUBoneUpdatesJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> exportBoneTransformArray; // 0x10
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> boneTransformArray; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bindPoses; // 0x30
		::Unity::Collections::NativeArray_1<::System::Int32> boneUpdateFilter; // 0x40
		::System::Int32 instanceCount; // 0x50

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_APPLYEXPORTGPUREADBACKGPUBONEUPDATESJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
