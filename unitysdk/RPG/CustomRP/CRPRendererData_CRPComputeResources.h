#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }

#define RPG_CUSTOMRP_CRPRENDERERDATA_CRPCOMPUTERESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB810)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRendererData_CRPComputeResources_TypeDefinitionIndex = 35536;

	class CRPRendererData_CRPComputeResources : public ::System::Object
	{
	public:
		::UnityEngine::ComputeShader* HiZCS; // 0x10
		::UnityEngine::ComputeShader* SSAOCS; // 0x18
		::UnityEngine::ComputeShader* LightCullingCS; // 0x20
		::UnityEngine::ComputeShader* UAVReadValidationCS; // 0x28
		::UnityEngine::ComputeShader* GPUSceneCS; // 0x30
		::UnityEngine::ComputeShader* ShadowFilterCS; // 0x38
		::UnityEngine::ComputeShader* ShadowmapDeCompress; // 0x40
		::UnityEngine::ComputeShader* CapsuleAOShader; // 0x48
		::UnityEngine::ComputeShader* VolumetricFogCS; // 0x50
		::UnityEngine::ComputeShader* GrassGPUDrivenCS; // 0x58
		::UnityEngine::ComputeShader* FluidSimulation2DCS; // 0x60
		::UnityEngine::ComputeShader* AdaptiveTessellationCS; // 0x68
		::UnityEngine::ComputeShader* DeformationCS; // 0x70
		::UnityEngine::ComputeShader* FrameCapturePPCS; // 0x78
		::UnityEngine::ComputeShader* InstancedItemCullCS; // 0x80
		::UnityEngine::ComputeShader* InstancedItemCullClusterCS; // 0x88
		::UnityEngine::ComputeShader* GlobalSDFUpdateCS; // 0x90
		::UnityEngine::ComputeShader* GPUSceneUpdateCS; // 0x98
		::UnityEngine::ComputeShader* SSGICS; // 0xA0
		::UnityEngine::ComputeShader* GPUParticlesManagementCS; // 0xA8
		::UnityEngine::ComputeShader* BatchSkinningCS; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_CRPCOMPUTERESOURCES__CTOR_OFFSET))(this);
		}
	};
}
