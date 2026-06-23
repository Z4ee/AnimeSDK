#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSDOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TAAQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TransparentMatQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterGenQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterInteractQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/RTXAOQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricCloudV2Quality.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x141A1430)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_TypeDefinitionIndex = 77166;

	class PerformanceSettingProfile : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_MaxLayers = 0x20; // 0x0
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x10
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Vo_EntityCreate; // 0x18
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0x38
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x40
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x48
		::System::Single SceneFurLayerCountScale; // 0x50
		::System::Single taauScale; // 0x54
		::MoleMole::InLevelNPCCrowdLevel InLevelNPCCrowd; // 0x58
		::System::UInt32 PLSAtlasResolution; // 0x5C
		::System::Boolean DisableGbufferCB; // 0x60
		::System::Boolean LightLoopInitOpt; // 0x61
		::System::Boolean WaterGenPFScene; // 0x62
		::System::Boolean LodGroupDisableCulled; // 0x63
		::System::Boolean PLSEnable; // 0x64
		::System::Boolean ShadowHizCulling; // 0x65
		::System::Boolean DitherOpt; // 0x66
		::System::Boolean disableParallaxMapForDecal; // 0x67
		::System::Single gpuGrassDistanceCullingBias; // 0x68
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0x6C
		::System::UInt32 PLSMaxStaticUpdatesPerFrame; // 0x70
		::System::Int32 StreamingTextureMaster; // 0x74
		::System::Single RTXGIResolutionScale; // 0x78
		::UnityEngine::Vector2 RecommendRenderResolution; // 0x7C
		::System::Int32 RTXGIQualityPresetPFScene; // 0x84
		::System::Single materialLODDistCharacterSimplifyTransition; // 0x88
		::System::Boolean DisableDOF; // 0x8C
		::System::Boolean WaterGenBeforeGbuffer; // 0x8D
		::System::Boolean EnableForwardGBufferPFScene; // 0x8E
		::System::Boolean disableDecalHeightMap; // 0x8F
		::System::Int32 RTXGIQualityPreset; // 0x90
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQuality; // 0x94
		::System::UInt32 PLSSkipUpdateFrames; // 0x98
		::System::Boolean napDeferredOpt; // 0x9C
		::System::Boolean DisableMotionBlur; // 0x9D
		::System::Boolean DisableSceneGlare; // 0x9E
		::System::Boolean DisableCapsuleAOInBattle; // 0x9F
		::System::Single CapsuleAORenderScale; // 0xA0
		::System::Single decalFadeDistanceBias; // 0xA4
		::System::Single RTXGIRayBudgetPFScene; // 0xA8
		::System::Int32 cpuQualityLevel; // 0xAC
		::System::Single PLSDynamicUpdateDistance; // 0xB0
		::System::Int32 gpuGrassMeshLodBias; // 0xB4
		::UnityEngine::NAPRenderPipeline0::TAAQuality TAAQuality; // 0xB8
		::System::Single EffectNoTickDistance; // 0xBC
		::System::Boolean UsePerobjectShadowProxy; // 0xC0
		::System::Boolean EnableRefactorLayout; // 0xC1
		::System::Boolean enableParticleLightCountOptimize; // 0xC2
		::System::Boolean WaterGen; // 0xC3
		::System::Single FrontFaceCullingToleranceBias; // 0xC4
		::UnityEngine::Vector4 SceneSampleTextureBias; // 0xC8
		::System::Single RainDropCountScale; // 0xD8
		::System::Boolean ShadowAfterGBuffer; // 0xDC
		::System::Boolean UseSceneExtraSimpleMesh; // 0xDD
		::System::Boolean SeparateAfterGbufferPass; // 0xDE
		::System::Boolean useBakedDecal; // 0xDF
		::System::Single PowerCostThreshhold; // 0xE0
		::System::UInt32 PLSMaxShadowedLightCount; // 0xE4
		::System::Boolean LightLoopOpt; // 0xE8
		::System::Boolean DisableDistortion; // 0xE9
		::System::Boolean EnableLoopSubdivision; // 0xEA
		::System::Boolean DisableStreamingMipmapsUseVisibility; // 0xEB
		::System::Int32 MaxAnisotropicSamplingLevel; // 0xEC
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality NAPShaderQuality; // 0xF0
		::System::Single FrontFaceCullingBias; // 0xF4
		::System::Single LODBias; // 0xF8
		::System::Single SceneMechanismCullDistanceBias; // 0xFC
		::UnityEngine::Rendering::Universal::GpuGrassShadowType gpuGrassShadowType; // 0x100
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality NapGIQuality; // 0x104
		::System::UInt32 PLSMaxDynamicUpdatesPerFrame; // 0x108
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x10C
		::System::Int32 perObjectShadowMaxCount; // 0x110
		::System::Single materialLODDistCharacterSimplify; // 0x114
		::System::Boolean HideSceneSmallObject; // 0x118
		::System::Boolean UseExtraSimpleMesh; // 0x119
		::System::Boolean LightLoopAfterGbuffer; // 0x11A
		::System::Boolean forceUseBakedDecalForSpecialScene; // 0x11B
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQualityPFScene; // 0x11C
		::MoleMole::FrameRateInterpolateType FrameRateInterpolate; // 0x120
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0x124
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality VolumetricCloudV2Quality; // 0x128
		::UnityEngine::Rendering::Universal::RTXAOQuality rtxAOQuality; // 0x12C
		::System::Single materialLODDistMirrorReflection; // 0x130
		::System::Int32 StreamingReduceLevel; // 0x134
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQualityPFScene; // 0x138
		::System::Single DiffuseOnlyDistance; // 0x13C
		::System::Int32 perObjectShadowResolution; // 0x140
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQuality; // 0x144
		::System::Single RTXGIResolutionScalePFScene; // 0x148
		::System::Single StreamingKeepDistance; // 0x14C
		::UnityEngine::NAPRenderPipeline0::SSDOQuality ssdoQuality; // 0x150
		::System::Boolean enableInteractiveLeaves; // 0x154
		::System::Boolean napPassOpt2; // 0x155
		::System::Boolean napSubpassOptMore; // 0x156
		::System::Boolean oneLightPerPassOpt; // 0x157
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudQuality; // 0x158
		::System::Single materialLODDistRatio; // 0x15C
		::System::Single LightFadeLodBias; // 0x160
		::System::Single LightLoopLogBase; // 0x164
		::UnityEngine::NAPRenderPipeline0::TransparentMatQuality TransparentMatQuality; // 0x168
		::UnityEngine::Vector4 HizCullingParams; // 0x16C
		::System::Single EffectHalfTickDistance; // 0x17C
		::System::Int32 LightLoopLog2ClusterNum; // 0x180
		::System::Single materialLODDistOutline; // 0x184
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoMaxQuality; // 0x188
		::UnityEngine::Vector4 HizShadowCullingParams; // 0x18C
		::System::Single RTXGIRayBudget; // 0x19C
		::System::Int32 SceneMaxFurLayer; // 0x1A0
		::System::Int32 ShadowSampleCount; // 0x1A4
		::System::Single materialLODDistShadow; // 0x1A8
		::UnityEngine::Rendering::Universal::LightLodQuality LightLodQuality; // 0x1AC
		::System::Int32 LightLoopThreadNum; // 0x1B0
		::System::Single CharacterSampleTextureBias; // 0x1B4
		::System::Single ScreenLengthCullingBias; // 0x1B8
		::System::Single PLSNoSkipDistance; // 0x1BC
		::System::Single SceneEtherEffectObjectFadeDistance; // 0x1C0
		::System::Single PLSLocalLightCastShadowDistance; // 0x1C4
		::System::Boolean EnableForwardGBuffer; // 0x1C8
		::System::Boolean NapPassOpt; // 0x1C9
		::System::Boolean napSubpassOpt; // 0x1CA
		::System::Boolean needExtraDownSampleForFrostedGlass; // 0x1CB
		::System::Boolean EnableAdaptiveStrategies; // 0x1CC
		::System::Boolean StreamingMipmapsActive; // 0x1CD
		::System::Boolean enableSceneV2RainRipple; // 0x1CE
		::System::Boolean SampleIBLOpt; // 0x1CF
		::System::Boolean OffScreenParticlesMSAA; // 0x1D0
		::System::Boolean EnableSceneCrowd; // 0x1D1
		::System::Boolean GbufferPreZOpt; // 0x1D2
		::System::Boolean useFPTLLightCulling; // 0x1D3
		::System::Single StreamingBudget; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
