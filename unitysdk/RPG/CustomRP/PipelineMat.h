#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PipelineMat_TypeDefinitionIndex = 35233;

	enum class PipelineMat : ::System::Int32
	{
		kDepthCopyMat = 0,
		kDeferLightingMat = 1,
		kStencilLightingMat = 2,
		kAreaLightingMat = 3,
		kBlitMat = 4,
		kShadowDepthMat = 5,
		kScreenSpaceShadowsMat = 6,
		kReflectionProbeMat = 7,
		kAmbientTexMat = 8,
		kSamplingMat = 9,
		kCameraMVMat = 10,
		kObjectMVMat = 11,
		kFrameBlendingMat = 12,
		kTAAMat = 13,
		kSMAAMat = 14,
		kOuterGlowMat = 15,
		kAOMat = 16,
		kUIPostProcessMat = 17,
		kViewportMaskMat = 18,
		kHizMat = 19,
		kPerObjectShadowProbeMat = 20,
		kSSRMat = 21,
		kVolumetricCloudSphereCombineMat = 22,
		kBackgroundMat = 23,
		kVolumetricFogShadowLightingMat = 24,
		kFogEmissionBakeVolumeInjectMat = 25,
		kDecalMat = 26,
		kVolumetricLightMat = 27,
		kHairDummyMaterial = 28,
		kIrradianceCacheMaterial = 29,
		kGeometryShadowMat = 30,
		kPipelineValidationMat = 31,
		kOcclusionQueryMat = 32,
		kScreenSpaceShadowPCSSMat = 33,
		kVolumetricCloudMat = 34,
		kDeformationMat = 35,
		kDeformationTessMat = 36,
		kFluidForceSourceRenderMat = 37,
		kSSGIMaterial = 38,
		kMatNum = 39,
	};
}
