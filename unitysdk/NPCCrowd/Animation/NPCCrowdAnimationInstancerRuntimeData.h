#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Animation/GPUIAnimationClipData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_ADDANIMATORINSTANCE_OFFSET UNITYSDK_OFFSET(0xF06DC20)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_BONEDATAREQUESTCOMPELETED_OFFSET UNITYSDK_OFFSET(0xF06D9D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COMPLETEASYNCBONEDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xF06D860)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETGPUBONEMASK_OFFSET UNITYSDK_OFFSET(0xF06B5C0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0xD0DDF80)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETLOD_OFFSET UNITYSDK_OFFSET(0xD0DE0A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0xF06B8D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_MAKEBONEDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xF06D510)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_READBAKEDBONEDATAFROMTEXTURE_OFFSET UNITYSDK_OFFSET(0xF06D1D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_RELEASEBUFFERS_OFFSET UNITYSDK_OFFSET(0xF06BD90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATAMANUALLY_OFFSET UNITYSDK_OFFSET(0xF06DED0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONBAKEBUFFER_OFFSET UNITYSDK_OFFSET(0xF06C900)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONDATABUFFER_OFFSET UNITYSDK_OFFSET(0xF06C430)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0xF06C280)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_APPLYBONEUPDATES_OFFSET UNITYSDK_OFFSET(0xF06CCB0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_CROWDANIMATORCONTROLLERBUFFER_OFFSET UNITYSDK_OFFSET(0xF06CA40)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_CROWDLAYERFLAGBUFFER_OFFSET UNITYSDK_OFFSET(0xF06C580)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_DEBUGBUFFER_OFFSET UNITYSDK_OFFSET(0xF06C170)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0xF06B920)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0xD0DE030)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SWITCHANDREMOVEANIMATORINSTANCE_OFFSET UNITYSDK_OFFSET(0xF06DD10)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF06E170)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0DE0E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex = 47999;

	class NPCCrowdAnimationInstancerRuntimeData : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_MakeBoneDataRequestWaitJob()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0x359E0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GPUReadBackGPUBoneUpdateJobHandleComplete()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0x359E8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CompleteAsyncBoneDataRequestWait()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0x359F0);
		}
		static ::UnityEngine::Vector4* StaticGet_SingleWeight()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0xD1D0);
		}
		// static const ::System::Int32 MaxTransitionCount = 0x4; // 0x0
		::UnityEngine::ComputeBuffer* debugBuffer; // 0x10
		::UnityEngine::ComputeBuffer* asyncBoneUpdateFilterBuffer; // 0x18
		::UnityEngine::ComputeBuffer* crowdAnimatorControllerBuffer; // 0x20
		::UnityEngine::ComputeBuffer* crowdLayerFlagBuffer; // 0x28
		::UnityEngine::ComputeBuffer* asyncBoneUpdateDataBuffer; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::GPUIAnimationClipData>* animationClipDataDict; // 0x38
		::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* boneDataRequestCallback; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* LODTickBatchCount; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimator*>* allNpcCrowdAnimators; // 0x50
		::UnityEngine::ComputeBuffer* animationDataBuffer; // 0x58
		::UnityEngine::ComputeBuffer* crowdLayerMaskBuffer; // 0x60
		::UnityEngine::ComputeBuffer* crowdBoneParentBuffer; // 0x68
		::UnityEngine::ComputeBuffer* animationBakeBuffer; // 0x70
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimator*>* transitioningAnimators; // 0x78
		::NPCCrowd::Animation::NPCCrowdAnimationData* prototype; // 0x80
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> crowdAnimatorControllerData; // 0x88
		::Unity::Collections::NativeArray_1<::System::Int32> bonepParentData; // 0x98
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> exportBoneTransformArray; // 0xA8
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bindPoses; // 0xB8
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bakedAnimationData; // 0xC8
		::Unity::Jobs::JobHandle GPUReadBackGPUBoneUpdateJobHandle; // 0xD8
		::System::Int32 boneGPUMemeoryDataRequestFrame; // 0xE8
		::Unity::Collections::NativeArray_1<::System::UInt32> animationLayerMask; // 0xF0
		::System::Boolean bIsAnimationDataModified; // 0x100
		::System::Boolean bIsCrowdAnimatorDataModified; // 0x101
		::System::Boolean bIsDisableFrameLerp; // 0x102
		::System::Boolean bIsWaitingBoneDataRequest; // 0x103
		::System::Boolean bIsTransformDataModified; // 0x104
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> exportBoneTransformArrayBakeUp; // 0x108
		::Unity::Jobs::JobHandle dependentJob; // 0x118
		::Unity::Collections::NativeArray_1<::System::Int32> exposedBoneIndexesArray; // 0x128
		::Unity::Collections::NativeArray_1<::System::UInt32> animationLayerFlags; // 0x138
		::UnityEngine::Rendering::AsyncGPUReadbackRequest boneGPUMemeoryDataRequest; // 0x148
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> animationData; // 0x158
		::System::Int32 instanceCount; // 0x168
		::System::Int32 maxInstanceCount; // 0x16C

		::System::Void _ctor(::NPCCrowd::Animation::NPCCrowdAnimationData* inPrototype, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CTOR_OFFSET))(this, inPrototype, animationData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CCTOR_OFFSET))();
		}

		::System::Boolean GetLODTickBatch(::System::Int32 handler, ::System::UInt32& batch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETLODTICKBATCH_OFFSET))(this, handler, batch);
		}

		::System::Void SetLODTickBatch(::System::Int32 handler, ::System::UInt32 LODTickBatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETLODTICKBATCH_OFFSET))(this, handler, LODTickBatch);
		}

		::System::Int32 GetLOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETLOD_OFFSET))(this);
		}

		static ::System::UInt32 GetGpuBoneMask(::UnityEngine::AvatarMask* mask, ::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationData, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* boneName2Idx)
		{
			return ((::System::UInt32(*)(::UnityEngine::AvatarMask*, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETGPUBONEMASK_OFFSET))(mask, data, animationData, boneName2Idx);
		}

		::System::Void InitializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_INITIALIZEDATA_OFFSET))(this);
		}

		::System::Void ReleaseBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_RELEASEBUFFERS_OFFSET))(this);
		}

		::System::Void SetAnimationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_OFFSET))(this);
		}

		static ::System::Void SetAnimationData_applyBoneUpdates(::NPCCrowd::Animation::NPCCrowdAnimationData* prototype, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_APPLYBONEUPDATES_OFFSET))(prototype, runtimeData);
		}

		static ::System::Void SetAnimationData_CrowdAnimatorControllerBuffer(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_CROWDANIMATORCONTROLLERBUFFER_OFFSET))(runtimeData);
		}

		static ::System::Void SetAnimationData_AnimationBakeBuffer(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::NPCCrowd::Animation::NPCCrowdAnimationData* prototype)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONBAKEBUFFER_OFFSET))(runtimeData, prototype);
		}

		static ::System::Void SetAnimationData_AnimationDataBuffer(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONDATABUFFER_OFFSET))(runtimeData);
		}

		static ::System::Void SetAnimationData_CrowdLayerFlagBuffer(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_CROWDLAYERFLAGBUFFER_OFFSET))(runtimeData);
		}

		static ::System::Void SetAnimationData_DebugBuffer(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_DEBUGBUFFER_OFFSET))(runtimeData);
		}

		static ::System::Void SetAnimationData_AnimationData(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONDATA_OFFSET))(runtimeData);
		}

		static ::System::Void ReadBakedBoneDataFromTexture(::NPCCrowd::Animation::NPCCrowdAnimationData* prototype, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_READBAKEDBONEDATAFROMTEXTURE_OFFSET))(prototype, runtimeData);
		}

		::System::Void MakeBoneDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_MAKEBONEDATAREQUEST_OFFSET))(this);
		}

		::System::Boolean CompleteAsyncBoneDataRequest(::System::Boolean forceComplete, ::System::Int32 asyncBoneUpdateMaxLatency)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COMPLETEASYNCBONEDATAREQUEST_OFFSET))(this, forceComplete, asyncBoneUpdateMaxLatency);
		}

		::System::Void BoneDataRequestCompeleted(::UnityEngine::Rendering::AsyncGPUReadbackRequest obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_BONEDATAREQUESTCOMPELETED_OFFSET))(this, obj);
		}

		::NPCCrowd::Animation::NPCCrowdAnimator* AddAnimatorInstance()
		{
			return ((::NPCCrowd::Animation::NPCCrowdAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_ADDANIMATORINSTANCE_OFFSET))(this);
		}

		::System::Void SwitchAndRemoveAnimatorInstance(::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SWITCHANDREMOVEANIMATORINSTANCE_OFFSET))(this, gpuAnimator);
		}

		::System::Void SetAnimationDataManually(::System::Int32 index, ::NPCCrowd::Animation::GPUIAnimationClipData data, ::System::Single normalizedTime, ::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::GPUIAnimationClipData, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATAMANUALLY_OFFSET))(this, index, data, normalizedTime, layerIdx);
		}
	};
}
