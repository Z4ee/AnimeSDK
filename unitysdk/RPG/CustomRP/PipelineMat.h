#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PipelineMat_TypeDefinitionIndex = 36315;

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
		kColorGradingMaskMat = 16,
		kAOMat = 17,
		kUIPostProcessMat = 18,
		kViewportMaskMat = 19,
		kHizMat = 20,
		kPerObjectShadowProbeMat = 21,
		kSSRMat = 22,
		kVolumetricCloudSphereCombineMat = 23,
		kBackgroundMat = 24,
		kVolumetricFogShadowLightingMat = 25,
		kFogEmissionBakeVolumeInjectMat = 26,
		kDecalMat = 27,
		kVolumetricLightMat = 28,
		kHairDummyMaterial = 29,
		kIrradianceCacheMaterial = 30,
		kGeometryShadowMat = 31,
		kPipelineValidationMat = 32,
		kOcclusionQueryMat = 33,
		kScreenSpaceShadowPCSSMat = 34,
		kVolumetricCloudMat = 35,
		kDeformationMat = 36,
		kFluidForceSourceRenderMat = 37,
		kSSGIMaterial = 38,
		kMatNum = 39,
	};
}
