#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/NPCAccessoryAnimatorManager_SampleData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_BUILDREQUESTS_OFFSET UNITYSDK_OFFSET(0x410E00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x410E60)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x410DF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_REMOVEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x410E40)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_SamplePoseJob_TypeDefinitionIndex = 86449;

	struct alignas(8) NPCAccessoryAnimatorManager_SamplePoseJob
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> Bones; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SampleData> Samples; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> Roots; // 0x30
		::System::Int32 BoneCount; // 0x40
		::System::Int32 InstanceId; // 0x44
		::System::Int32 RootBoneIndex; // 0x48

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_EXECUTE_OFFSET))(this);
		}

		/*
		::System::Void BuildRequests(::Unity::Collections::NativeArray_1<::UnityEngine::NapAnimator_SampleAnimationJobRequest> requests, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SampleData> sampleDatas, ::Unity::Collections::NativeArray_1<::System::Single> rootMotions)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::NapAnimator_SampleAnimationJobRequest>, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_SampleData>, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_BUILDREQUESTS_OFFSET))(this, requests, sampleDatas, rootMotions);
		}
		*/

		/*
		::System::Void RemoveRootMotion(::Unity::Collections::NativeArray_1<::UnityEngine::NapAnimator_SampleAnimationJobRequest> requests)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::NapAnimator_SampleAnimationJobRequest>))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_REMOVEROOTMOTION_OFFSET))(this, requests);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_DISPOSE_OFFSET))(this);
		}
	};
}
