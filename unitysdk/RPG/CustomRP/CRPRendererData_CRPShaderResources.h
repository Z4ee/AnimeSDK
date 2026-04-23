#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CRPRENDERERDATA_CRPSHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x18118460)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRendererData_CRPShaderResources_TypeDefinitionIndex = 35235;

	class CRPRendererData_CRPShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* blitPS; // 0x10
		::UnityEngine::Shader* samplingPS; // 0x18
		::UnityEngine::Shader* HiZOCShader2; // 0x20
		::UnityEngine::Shader* SSAOShader; // 0x28
		::UnityEngine::Shader* ReflectionProbeShader; // 0x30
		::UnityEngine::Shader* AmbientTexShader; // 0x38
		::UnityEngine::Shader* screenSpaceReflectionShader; // 0x40
		::UnityEngine::Shader* unlitShader; // 0x48
		::UnityEngine::Shader* lightingShader; // 0x50
		::UnityEngine::Shader* stencilLightingShader; // 0x58
		::UnityEngine::Shader* areaLightingShader; // 0x60
		::UnityEngine::Shader* depthCopyShader; // 0x68
		::UnityEngine::Shader* clearBackgroundDepth; // 0x70
		::UnityEngine::Shader* GLESDummyDepth; // 0x78
		::UnityEngine::Shader* uiDefaultShader; // 0x80
		::UnityEngine::Shader* EmptyDefaultShader; // 0x88
		::UnityEngine::Shader* cameraMotionVectorsShader; // 0x90
		::UnityEngine::Shader* objectMotionVectorsShader; // 0x98
		::UnityEngine::Shader* pipelineValidation; // 0xA0
		::UnityEngine::Shader* depthOnlyShader; // 0xA8
		::UnityEngine::Shader* customShadowShader; // 0xB0
		::UnityEngine::Shader* perObjectShadowProbeShader; // 0xB8
		::UnityEngine::Shader* customShadowPCSSShader; // 0xC0
		::UnityEngine::Shader* ShadowmapDeCompressPS; // 0xC8
		::UnityEngine::Shader* GeometryShadowShader; // 0xD0
		::UnityEngine::Shader* OcclusionQueryShader; // 0xD8
		::UnityEngine::Shader* VolumetricCloudShader; // 0xE0
		::UnityEngine::Shader* VolumetricCloudSphereCombineShader; // 0xE8
		::UnityEngine::Shader* VolumetricLightShader; // 0xF0
		::UnityEngine::Shader* VolumetricFogShadowLightingShader; // 0xF8
		::UnityEngine::Shader* FogEmissionBakeVolumeInjectShader; // 0x100
		::UnityEngine::Shader* frameBlendingShader; // 0x108
		::UnityEngine::Shader* viewportMaskShader; // 0x110
		::UnityEngine::Shader* OuterGlowShader; // 0x118
		::UnityEngine::Shader* FluidForceSourceRenderShader; // 0x120
		::UnityEngine::Shader* DeformationShader; // 0x128
		::UnityEngine::Shader* DeformationTessShader; // 0x130
		::UnityEngine::Shader* InstancedDecalShader; // 0x138
		::UnityEngine::Shader* IrradianceCacheShader; // 0x140
		::UnityEngine::Shader* SSGIShader; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_CRPSHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
