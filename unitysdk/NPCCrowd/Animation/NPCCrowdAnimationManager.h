#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace NPCCrowd { class CrowdTickControlInstance; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ADDANIMATOR_OFFSET UNITYSDK_OFFSET(0xF87BE00)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISABLEANIMATOR_OFFSET UNITYSDK_OFFSET(0xF87C0D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHANIMATORKERNEL_OFFSET UNITYSDK_OFFSET(0xF87AB30)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHBONEKERNEL_OFFSET UNITYSDK_OFFSET(0xF87ACC0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHTWOPASSBONEKERNEL_OFFSET UNITYSDK_OFFSET(0xF87B4A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_EARLYUPDATE_OFFSET UNITYSDK_OFFSET(0xF879770)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ENABLEANIMATOR_OFFSET UNITYSDK_OFFSET(0xF87C080)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0xF87BD10)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTLOCALPRS_1_OFFSET UNITYSDK_OFFSET(0xF87C870)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTLOCALPRS_OFFSET UNITYSDK_OFFSET(0xF87C290)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTTRANSFORMINDEX_OFFSET UNITYSDK_OFFSET(0xF87C5B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xF877E60)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xF879440)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF879FA0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF87CA70)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xF8782B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xF877FE0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_REMOVEANIMATOR_OFFSET UNITYSDK_OFFSET(0xF87C120)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xF879680)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_TRYCOMPLETEBONEREADBACKJOB_OFFSET UNITYSDK_OFFSET(0xF8797D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATEANIMATORSDATA_OFFSET UNITYSDK_OFFSET(0xF87A1A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATEARGUMENTSFORUBERSHADER_OFFSET UNITYSDK_OFFSET(0xF87A7C0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATECOMMONBUFFER_OFFSET UNITYSDK_OFFSET(0xF87A650)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF879A70)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF87CD70)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xF87CD60)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_EARLYUPDATE_OFFSET UNITYSDK_OFFSET(0xF87CDF0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xF87CE90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF87CF20)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF87CFC0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xF87D050)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xF87D0E0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xF87D170)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationManager_TypeDefinitionIndex = 42133;

	class NPCCrowdAnimationManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_skinnedMeshAnimateComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x40FC0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_crowdAnimatorUberComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x40FE0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_crowdAnimatorComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x41000);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_asyncBoneUpdateComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x41020);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x41040);
		}
		static ::System::Single* StaticGet_transitionFrequency()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0xF260);
		}
		::UnityEngine::ComputeShader* asyncBoneUpdateComputeShaderCur; // 0x18
		::NPCCrowd::CrowdTickControlInstance* LateUpdateControl; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* boneReadBackJobDataList; // 0x28
		::UnityEngine::ComputeShader* crowdAnimatorComputeShader; // 0x30
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimator*>*>* registeredPrefabsRuntimeData; // 0x38
		::UnityEngine::ComputeShader* crowdAnimatorUberComputeShader; // 0x40
		::UnityEngine::ComputeShader* skinnedMeshAnimateComputeShaderCur; // 0x48
		::UnityEngine::ComputeShader* skinnedMeshAnimateComputeShader; // 0x50
		::UnityEngine::ComputeShader* crowdAnimatorComputeShaderCur; // 0x58
		::UnityEngine::ComputeShader* asyncBoneUpdateComputeShader; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* runtimeDataList; // 0x68
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* runtimeDataDictionary; // 0x70
		::System::Int32 animateBonesLerpedKernelID; // 0x78
		::System::Int32 crowdAnimatorKernelIDCur; // 0x7C
		::System::Int32 fixWeightsKernelID; // 0x80
		::System::Int32 asyncBoneUpdateKernelID; // 0x84
		::System::Int32 crowdAnimatorBonesUberLerpedKernelID; // 0x88
		::System::Int32 applyCrossLayerCorrectionKernelID; // 0x8C
		::System::Int32 asyncBoneUpdateKernelIDCur; // 0x90
		::System::Single lastAnimateTime; // 0x94
		::System::Int32 computeLayerMatricesKernelID; // 0x98
		::System::Single lastRootMotionUpdateTime; // 0x9C
		::System::Int32 crowdAnimatorUberKernelID; // 0xA0
		::System::Single lastTransitionUpdateTime; // 0xA4
		::System::Int32 crowdAnimatorBonesUberKernelID; // 0xA8
		::System::Int32 skinnedMeshAnimateKernelIDCur; // 0xAC
		::System::Int32 fixWeightsKernelIDCur; // 0xB0
		::System::Int32 animateBonesKernelID; // 0xB4
		::System::Int32 crowdAnimatorKernelID; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Animation::NPCCrowdAnimationManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCCrowdAnimationManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GET_OFFSET))();
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void EarlyUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_EARLYUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void TryCompleteBoneReadBackJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_TRYCOMPLETEBONEREADBACKJOB_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateAnimatorsData(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATEANIMATORSDATA_OFFSET))(this, runtimeData);
		}

		::System::Void DispatchBoneKernel(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::NPCCrowd::Animation::NPCCrowdAnimationData* prototype)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHBONEKERNEL_OFFSET))(this, runtimeData, prototype);
		}

		::System::Void DispatchTwoPassBoneKernel(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::NPCCrowd::Animation::NPCCrowdAnimationData* prototype)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHTWOPASSBONEKERNEL_OFFSET))(this, runtimeData, prototype);
		}

		::System::Void DispatchAnimatorKernel(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHANIMATORKERNEL_OFFSET))(this, runtimeData);
		}

		::System::Void UpdateArgumentsForUberShader(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData, ::NPCCrowd::Animation::NPCCrowdAnimationData* prototype)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATEARGUMENTSFORUBERSHADER_OFFSET))(this, runtimeData, prototype);
		}

		::System::Void UpdateCommonBuffer(::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATECOMMONBUFFER_OFFSET))(this, runtimeData);
		}

		::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData* GetRuntimeData(::NPCCrowd::Animation::NPCCrowdAnimationData* prototype, ::System::Boolean logError)
		{
			return ((::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETRUNTIMEDATA_OFFSET))(this, prototype, logError);
		}

		::NPCCrowd::Animation::NPCCrowdAnimator* AddAnimator(::NPCCrowd::Animation::NPCCrowdAnimationData* crowdAnimData, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationData)
		{
			return ((::NPCCrowd::Animation::NPCCrowdAnimator*(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCPUAnimationGraphDataset*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ADDANIMATOR_OFFSET))(this, crowdAnimData, animationData);
		}

		::System::Void EnableAnimator(::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ENABLEANIMATOR_OFFSET))(this, gpuAnimator);
		}

		::System::Void DisableAnimator(::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISABLEANIMATOR_OFFSET))(this, gpuAnimator);
		}

		::System::Void RemoveAnimator(::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_REMOVEANIMATOR_OFFSET))(this, gpuAnimator);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotLocalPRS(::NPCCrowd::Animation::NPCCrowdAnimator* anim, ::System::String* boneTransformName)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTLOCALPRS_OFFSET))(this, anim, boneTransformName);
		}

		::System::Int32 GetSlotTransformIndex(::NPCCrowd::Animation::NPCCrowdAnimator* anim, ::System::String* boneTransformName)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTTRANSFORMINDEX_OFFSET))(this, anim, boneTransformName);
		}

		::NPCCrowd::Ability::FTransformFragment GetSlotLocalPRS_1(::NPCCrowd::Animation::NPCCrowdAnimator* animator, ::System::Int32 transformIndex)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimator*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTLOCALPRS_1_OFFSET))(this, animator, transformIndex);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_EarlyUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_EARLYUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
