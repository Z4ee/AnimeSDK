#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GPUPrefab/MonoNPCCrowdGPUGroupController_EAvatarDitherPhase.h"
#include "unitysdk/NPCCrowd/GPUPrefab/MonoNPCCrowdGPUGroupController_EGPULodState.h"
#include "unitysdk/NPCCrowd/GPUPrefab/MonoNPCCrowdGPUGroupController_RendererMaterialPair.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_NPCChildData_TypeDefinitionIndex = 47433;

	struct alignas(8) MonoNPCCrowdGPUGroupController_NPCChildData
	{
		::UnityEngine::Transform* npcRoot; // 0x10
		::UnityEngine::GameObject* lodDetailGO; // 0x18
		::Il2CppArray<::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair>* detailRenderers; // 0x20
		::UnityEngine::GameObject* lodSimpleGO; // 0x28
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_RendererMaterialPair simpleRenderer; // 0x30
		::System::Single randomFrame; // 0x48
		::System::Single totalBoneCount; // 0x4C
		::System::Single clipAtlasOffsetX; // 0x50
		::System::Single clipAtlasOffsetY; // 0x54
		::System::Single clipStartFrame; // 0x58
		::System::Single clipFrameCount; // 0x5C
		::System::Single useClipGranular; // 0x60
		::System::Single frameIndex; // 0x64
		::System::Single startFrame; // 0x68
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState currentLod; // 0x6C
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState targetLod; // 0x6D
		::System::Single crossfadeProgress; // 0x70
		::System::Boolean bIsTransitioning; // 0x74
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EGPULodState transitionFromLod; // 0x75
		::System::Single avatarDitherAlpha; // 0x78
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController_EAvatarDitherPhase avatarDitherPhase; // 0x7C
		::System::Single avatarPrepareTimer; // 0x80
		::System::Boolean bNeedDitherMaterial; // 0x84
		::UnityEngine::Matrix4x4 prevWorldMatrix; // 0x88
		::System::Boolean bPrevMatrixInitialized; // 0xC8
	};
}
