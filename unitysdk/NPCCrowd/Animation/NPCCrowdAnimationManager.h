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

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ADDANIMATOR_OFFSET UNITYSDK_OFFSET(0xD257320)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISABLEANIMATOR_OFFSET UNITYSDK_OFFSET(0xD2575F0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHANIMATORKERNEL_OFFSET UNITYSDK_OFFSET(0xD256D30)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_DISPATCHBONEKERNEL_OFFSET UNITYSDK_OFFSET(0xD256EB0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ENABLEANIMATOR_OFFSET UNITYSDK_OFFSET(0xD2575A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0xD257230)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTLOCALPRS_1_OFFSET UNITYSDK_OFFSET(0xD257D90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTLOCALPRS_OFFSET UNITYSDK_OFFSET(0xD2577B0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GETSLOTTRANSFORMINDEX_OFFSET UNITYSDK_OFFSET(0xD257AD0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xD2544F0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD255A60)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD256220)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD257F90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD254940)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xD254670)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_REMOVEANIMATOR_OFFSET UNITYSDK_OFFSET(0xD257640)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD255C50)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATEANIMATORSDATA_OFFSET UNITYSDK_OFFSET(0xD256420)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATEARGUMENTSFORUBERSHADER_OFFSET UNITYSDK_OFFSET(0xD256A40)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATECOMMONBUFFER_OFFSET UNITYSDK_OFFSET(0xD2568E0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD255CF0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD258290)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD258280)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD258310)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD2583A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD258440)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD2584D0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD258560)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2585F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationManager_TypeDefinitionIndex = 56701;

	class NPCCrowdAnimationManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_asyncBoneUpdateComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x3D210);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_crowdAnimatorComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x3D230);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_crowdAnimatorUberComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x3D250);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LODTickScaleList()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x3D270);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_skinnedMeshAnimateComputeShaderAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0x3D278);
		}
		static ::System::Single* StaticGet_transitionFrequency()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationManager_TypeDefinitionIndex)->GetStaticField(0xEF10);
		}
		::NPCCrowd::CrowdTickControlInstance* LateUpdateControl; // 0x18
		::UnityEngine::ComputeShader* asyncBoneUpdateComputeShader; // 0x20
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimator*>*>* registeredPrefabsRuntimeData; // 0x28
		::UnityEngine::ComputeShader* skinnedMeshAnimateComputeShader; // 0x30
		::UnityEngine::ComputeShader* crowdAnimatorUberComputeShader; // 0x38
		::UnityEngine::ComputeShader* crowdAnimatorComputeShader; // 0x40
		::UnityEngine::ComputeShader* asyncBoneUpdateComputeShaderCur; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* runtimeDataList; // 0x50
		::UnityEngine::ComputeShader* crowdAnimatorComputeShaderCur; // 0x58
		::UnityEngine::ComputeShader* skinnedMeshAnimateComputeShaderCur; // 0x60
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* runtimeDataDictionary; // 0x68
		::System::Int32 animateBonesKernelID; // 0x70
		::System::Single lastAnimateTime; // 0x74
		::System::Int32 crowdAnimatorUberKernelID; // 0x78
		::System::Int32 fixWeightsKernelID; // 0x7C
		::System::Int32 asyncBoneUpdateKernelID; // 0x80
		::System::Int32 skinnedMeshAnimateKernelIDCur; // 0x84
		::System::Int32 crowdAnimatorKernelID; // 0x88
		::System::Int32 animateBonesLerpedKernelID; // 0x8C
		::System::Single lastTransitionUpdateTime; // 0x90
		::System::Int32 fixWeightsKernelIDCur; // 0x94
		::System::Int32 crowdAnimatorKernelIDCur; // 0x98
		::System::Int32 crowdAnimatorBonesUberKernelID; // 0x9C
		::System::Int32 crowdAnimatorBonesUberLerpedKernelID; // 0xA0
		::System::Int32 asyncBoneUpdateKernelIDCur; // 0xA4
		::System::Single lastRootMotionUpdateTime; // 0xA8

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
