#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define MONONPCCROWDPLATMODELCOMPONENT_ACQUIRECLIPTEXTUREIFNEEDED_OFFSET UNITYSDK_OFFSET(0x139E6D60)
#define MONONPCCROWDPLATMODELCOMPONENT_GET_CACHEMATERIALPROPBLOCK_OFFSET UNITYSDK_OFFSET(0x139E5830)
#define MONONPCCROWDPLATMODELCOMPONENT_GET_GPUMESHRENDER_OFFSET UNITYSDK_OFFSET(0x139E5820)
#define MONONPCCROWDPLATMODELCOMPONENT_INITMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x139E58D0)
#define MONONPCCROWDPLATMODELCOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x139E6D20)
#define MONONPCCROWDPLATMODELCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x139E6A20)
#define MONONPCCROWDPLATMODELCOMPONENT_ONFRAMEINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0x139E76F0)
#define MONONPCCROWDPLATMODELCOMPONENT_RELEASECLIPTEXTUREIFNEEDED_OFFSET UNITYSDK_OFFSET(0x139E71D0)
#define MONONPCCROWDPLATMODELCOMPONENT_TRIGGERDITHER_OFFSET UNITYSDK_OFFSET(0x139E73A0)
#define MONONPCCROWDPLATMODELCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x139E7A10)

inline static constexpr unsigned int MonoNPCCrowdPlatModelComponent_TypeDefinitionIndex = 75174;

class MonoNPCCrowdPlatModelComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Material*>* gpuMaterials; // 0x18
	::Il2CppArray<::UnityEngine::Material*>* gpuDitherMaterials; // 0x20
	::UnityEngine::Texture2D* animationTexture; // 0x28
	::System::Int32 textureSizeX; // 0x30
	::System::Int32 textureSizeY; // 0x34
	::System::Int32 totalBoneCount; // 0x38
	::System::Int32 playStartFrame; // 0x3C
	::System::Int32 maxFrameCount; // 0x40
	::System::Single frameIndex; // 0x44
	::System::Int32 lastFrameIndex; // 0x48
	::System::Int32 frameRate; // 0x4C
	::System::Single randomFrame; // 0x50
	::NPCCrowd::Animation::NPCCrowdAnimationData* animationData; // 0x58
	::System::Int32 targetClipIndex; // 0x60
	::UnityEngine::Texture2D* _clipTexture; // 0x68
	::Foundation::AssetRequestHandle _clipTextureHandle; // 0x70
	::System::Int32 _clipFrameCount; // 0x90
	::UnityEngine::MeshFilter* gpuMeshFilter; // 0x98
	::UnityEngine::MeshRenderer* gpuMeshRender; // 0xA0
	::System::Boolean isGpuMeshRenderValid; // 0xA8
	::System::Int32 subMaterialCount; // 0xAC
	::UnityEngine::MaterialPropertyBlock* cacheMatPropBlock; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT__CTOR_OFFSET))(this);
	}

	::UnityEngine::MeshRenderer* get_GPUMeshRender()
	{
		return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_GET_GPUMESHRENDER_OFFSET))(this);
	}

	::UnityEngine::MaterialPropertyBlock* get_CacheMaterialPropBlock()
	{
		return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_GET_CACHEMATERIALPROPBLOCK_OFFSET))(this);
	}

	::System::Void InitMaterialParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_INITMATERIALPARAMS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_ONDISABLE_OFFSET))(this);
	}

	::System::Void AcquireClipTextureIfNeeded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_ACQUIRECLIPTEXTUREIFNEEDED_OFFSET))(this);
	}

	::System::Void ReleaseClipTextureIfNeeded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_RELEASECLIPTEXTUREIFNEEDED_OFFSET))(this);
	}

	::System::Void TriggerDither(::System::Boolean bEnableDither)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_TRIGGERDITHER_OFFSET))(this, bEnableDither);
	}

	::System::Void OnFrameIndexChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONONPCCROWDPLATMODELCOMPONENT_ONFRAMEINDEXCHANGED_OFFSET))(this);
	}
};
