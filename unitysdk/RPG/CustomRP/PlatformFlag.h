#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PlatformFlag_TypeDefinitionIndex = 36107;

	enum class PlatformFlag : ::System::UInt64
	{
		None = 0x0,
		ForceDisableOC = 0x1,
		DisableSRPBatcher = 0x2,
		DummyOpaqueDepthDraw = 0x4,
		BuggyCpuSkinning = 0x8,
		SSBODynamicIndex = 0x10,
		DisableInputAttachmentDecal = 0x20,
		VulkanStencilTest = 0x40,
		RenderPassSplitInMaliVulkan = 0x80,
		BufferGLESUpdateTrick = 0x100,
		GLESBuggleDrawBeforeIndirectDraw = 0x200,
		VulkanRBAConfigFile = 0x400,
		SharedVariableTrickGLES = 0x800,
		DisableInputAttachmentDecalUseDepth = 0x1000,
		DisableVKStaticUBO = 0x2000,
		DisableDepthInputAttachmentForSoftParticles = 0x4000,
		DisableGrassGPUDriven = 0x8000,
		ForceShaderQualityLow = 0x10000,
		VulkanDynamicVertexStateConfigFile = 0x20000,
		DisableTexSDF = 0x40000,
		ForceEnableRenderPassSplitInMaliVulkanFollowQuality = 0x80000,
		DisableDepthTexCopy = 0x100000,
		DisableVulkanIndirectDrawCount = 0x200000,
		MaxSkinnedMeshCountGlobal = 0x400000,
		CloseVkPreTransform = 0x800000,
		DisableNewComputeSkinning = 0x1000000,
		ForceAdaUseTexture = 0x2000000,
		DisablePerDraw = 0x4000000,
		CloseVKShaderModuleCache = 0x8000000,
		CharAndroidLowQualityForMediumQuality = 0x10000000,
		DisableSkipDrawWhenLoading = 0x20000000,
		IndirectDrawVertexIDOffset = 0x40000000,
		ForceForwardCharEmiss = 0x80000000,
		AndroidVKTangent1BarrierPre = 0x100000000,
		VulkanEnableDynamicRendering = 0x200000000,
		VulkanDisableClearUIAttachmentOpt = 0x400000000,
	};
}
