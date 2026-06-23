#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Animation/ClipAtlasOffsetData.h"
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
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_ADDANIMATORINSTANCE_OFFSET UNITYSDK_OFFSET(0x117A1F90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_BONEDATAREADBACKFLUSHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x117A1F30)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_BONEDATAREQUESTCOMPELETED_OFFSET UNITYSDK_OFFSET(0x117A1B30)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COLLECTACTIVECLIPINDICESFROMANIMATOR_OFFSET UNITYSDK_OFFSET(0x117A2AA0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COLLECTACTIVECLIPINDICES_OFFSET UNITYSDK_OFFSET(0x117A2980)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COMPLETEASYNCBONEDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x117A19C0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_ENSUREINTERMEDIATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1179E620)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_FINDCLIPINDEXBYSTARTFRAME_OFFSET UNITYSDK_OFFSET(0x117A2DC0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETGPUBONEMASK_OFFSET UNITYSDK_OFFSET(0x1179F250)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0x1179E870)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GETLOD_OFFSET UNITYSDK_OFFSET(0x1179E990)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GET_BUSECLIPGRANULARLOADING_OFFSET UNITYSDK_OFFSET(0x1179E3E0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_HASMULTILAYERACTIVE_OFFSET UNITYSDK_OFFSET(0x1179E5A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_INITIALIZECLIPATLASOFFSETSBUFFER_OFFSET UNITYSDK_OFFSET(0x1179F9A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1179F560)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_MAKEBONEDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x117A15C0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_READBAKEDBONEDATAFROMTEXTURE_OFFSET UNITYSDK_OFFSET(0x117A1280)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_RELEASEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1179FCD0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATAMANUALLY_OFFSET UNITYSDK_OFFSET(0x117A2250)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONBAKEBUFFER_OFFSET UNITYSDK_OFFSET(0x117A0930)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONDATABUFFER_OFFSET UNITYSDK_OFFSET(0x117A0460)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_ANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x117A02B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_APPLYBONEUPDATES_OFFSET UNITYSDK_OFFSET(0x117A0CF0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_CROWDANIMATORCONTROLLERBUFFER_OFFSET UNITYSDK_OFFSET(0x117A0A80)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_CROWDLAYERFLAGBUFFER_OFFSET UNITYSDK_OFFSET(0x117A05B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_DEBUGBUFFER_OFFSET UNITYSDK_OFFSET(0x117A01A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x1179F5B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0x1179E920)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_SWITCHANDREMOVEANIMATORINSTANCE_OFFSET UNITYSDK_OFFSET(0x117A2080)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_UPDATECLIPATLASOFFSETS_OFFSET UNITYSDK_OFFSET(0x117A2500)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x117A2F80)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1179E9D0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex = 77182;

	class NPCCrowdAnimationInstancerRuntimeData : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CompleteAsyncBoneDataRequestWait()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0x38440);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_MakeBoneDataRequestWaitJob()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0x38448);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GPUReadBackGPUBoneUpdateJobHandleComplete()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0x38450);
		}
		static ::UnityEngine::Vector4* StaticGet_SingleWeight()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0xDD50);
		}
		static ::System::Int32* StaticGet__gpuReadBackCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData_TypeDefinitionIndex)->GetStaticField(0xDD60);
		}
		// static const ::System::Int32 MaxTransitionCount = 0x4; // 0x0
		::UnityEngine::ComputeBuffer* asyncBoneUpdateDataBuffer; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* LODTickBatchCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::GPUIAnimationClipData>* animationClipDataDict; // 0x20
		::UnityEngine::ComputeBuffer* intermediateValidBuffer; // 0x28
		::UnityEngine::ComputeBuffer* crowdAnimatorControllerBuffer; // 0x30
		::UnityEngine::ComputeBuffer* animationDataBuffer; // 0x38
		::UnityEngine::ComputeBuffer* crowdBoneParentBuffer; // 0x40
		::UnityEngine::ComputeBuffer* debugBuffer; // 0x48
		::UnityEngine::ComputeBuffer* intermediateMatricesBuffer; // 0x50
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimator*>* allNpcCrowdAnimators; // 0x58
		::UnityEngine::ComputeBuffer* crowdLayerMaskBuffer; // 0x60
		::System::Collections::Generic::HashSet_1<::System::Int32>* activeClipIndices; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimator*>* transitioningAnimators; // 0x70
		::UnityEngine::ComputeBuffer* crowdLayerFlagBuffer; // 0x78
		::UnityEngine::ComputeBuffer* asyncBoneUpdateFilterBuffer; // 0x80
		::UnityEngine::ComputeBuffer* clipAtlasOffsetsBuffer; // 0x88
		::NPCCrowd::Animation::NPCCrowdAnimationData* prototype; // 0x90
		::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* boneDataRequestCallback; // 0x98
		::UnityEngine::ComputeBuffer* animationBakeBuffer; // 0xA0
		::System::Boolean bIsWaitingBoneDataRequest; // 0xA8
		::System::Boolean bIsAnimationDataModified; // 0xA9
		::System::Boolean bIsDisableFrameLerp; // 0xAA
		::System::Int32 boneGPUMemeoryDataRequestFrame; // 0xAC
		::Unity::Collections::NativeArray_1<::System::UInt32> animationLayerMask; // 0xB0
		::System::Int32 instanceCount; // 0xC0
		::System::Int32 _lastSyncedAtlasVersion; // 0xC4
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> crowdAnimatorControllerData; // 0xC8
		::Unity::Collections::NativeArray_1<::System::Int32> bonepParentData; // 0xD8
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bindPoses; // 0xE8
		::System::Int32 maxInstanceCount; // 0xF8
		::System::Boolean bIsTransformDataModified; // 0xFC
		::System::Boolean bIsCrowdAnimatorDataModified; // 0xFD
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> exportBoneTransformArrayBakeUp; // 0x100
		::Unity::Jobs::JobHandle GPUReadBackGPUBoneUpdateJobHandle; // 0x110
		::Unity::Collections::NativeArray_1<::System::UInt32> animationLayerFlags; // 0x120
		::Unity::Collections::NativeArray_1<::System::Int32> exposedBoneIndexesArray; // 0x130
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> exportBoneTransformArray; // 0x140
		::UnityEngine::Rendering::AsyncGPUReadbackRequest boneGPUMemeoryDataRequest; // 0x150
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> animationData; // 0x160
		::Unity::Jobs::JobHandle dependentJob; // 0x170
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::ClipAtlasOffsetData> clipAtlasOffsetsData; // 0x180
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> bakedAnimationData; // 0x190

		::System::Void _ctor(::NPCCrowd::Animation::NPCCrowdAnimationData* inPrototype, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CTOR_OFFSET))(this, inPrototype, animationData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_bUseClipGranularLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_GET_BUSECLIPGRANULARLOADING_OFFSET))(this);
		}

		::System::Boolean HasMultiLayerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_HASMULTILAYERACTIVE_OFFSET))(this);
		}

		::System::Void EnsureIntermediateBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_ENSUREINTERMEDIATEBUFFERS_OFFSET))(this);
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

		::System::Void BoneDataReadBackFlushComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_BONEDATAREADBACKFLUSHCOMPLETE_OFFSET))(this);
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

		::System::Void InitializeClipAtlasOffsetsBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_INITIALIZECLIPATLASOFFSETSBUFFER_OFFSET))(this);
		}

		::System::Void UpdateClipAtlasOffsets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_UPDATECLIPATLASOFFSETS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* CollectActiveClipIndices()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COLLECTACTIVECLIPINDICES_OFFSET))(this);
		}

		::System::Void CollectActiveClipIndicesFromAnimator(::NPCCrowd::Animation::NPCCrowdAnimator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_COLLECTACTIVECLIPINDICESFROMANIMATOR_OFFSET))(this, animator);
		}

		::System::Int32 FindClipIndexByStartFrame(::System::Int32 startFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA_FINDCLIPINDEXBYSTARTFRAME_OFFSET))(this, startFrame);
		}
	};
}
