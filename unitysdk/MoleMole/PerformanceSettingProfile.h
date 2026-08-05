#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ZKReward.h"
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

#define MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1081E240)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_TypeDefinitionIndex = 56316;

	class PerformanceSettingProfile : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_MaxLayers = 0x20; // 0x0
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x10
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0x18
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Vo_EntityCreate; // 0x20
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x40
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x48
		::System::Single LODBias; // 0x50
		::System::Single RTXGIResolutionScalePFScene; // 0x54
		::System::Single SceneFurLayerCountScale; // 0x58
		::System::Int32 perObjectShadowMaxCount; // 0x5C
		::System::Single RTXGIRayBudgetPFScene; // 0x60
		::System::Single materialLODDistMirrorReflection; // 0x64
		::UnityEngine::Rendering::Universal::LightLodQuality LightLodQuality; // 0x68
		::System::Boolean DisableCapsuleAOInBattle; // 0x6C
		::System::Boolean napSubpassOpt; // 0x6D
		::System::Boolean SampleIBLOpt; // 0x6E
		::System::Boolean napDeferredOpt; // 0x6F
		::System::Single decalFadeDistanceBias; // 0x70
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQuality; // 0x74
		::System::Single FrontFaceCullingToleranceBias; // 0x78
		::System::Single FrontFaceCullingBias; // 0x7C
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQuality; // 0x80
		::System::Single EffectNoTickDistance; // 0x84
		::System::Single gpuGrassDistanceCullingBias; // 0x88
		::System::Single RTXGIRayBudget; // 0x8C
		::System::Int32 MaxAnisotropicSamplingLevel; // 0x90
		::System::Single DiffuseOnlyDistance; // 0x94
		::System::Int32 StreamingTextureMaster; // 0x98
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQualityPFScene; // 0x9C
		::UnityEngine::Vector4 HizShadowCullingParams; // 0xA0
		::System::Int32 cpuQualityLevel; // 0xB0
		::System::Int32 LightLoopLog2ClusterNum; // 0xB4
		::System::Single LightLoopLogBase; // 0xB8
		::System::Single PLSLocalLightCastShadowDistance; // 0xBC
		::System::Int32 SceneMaxFurLayer; // 0xC0
		::System::Single materialLODDistOutline; // 0xC4
		::System::Int32 perObjectShadowResolution; // 0xC8
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0xCC
		::System::Boolean DisableStreamingMipmapsUseVisibility; // 0xD0
		::System::Boolean useFPTLLightCulling; // 0xD1
		::System::Boolean DisableDOF; // 0xD2
		::System::Boolean disableParallaxMapForDecal; // 0xD3
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality NapGIQuality; // 0xD4
		::System::Single ScreenLengthCullingBias; // 0xD8
		::UnityEngine::NAPRenderPipeline0::SSDOQuality ssdoQuality; // 0xDC
		::System::UInt32 PLSMaxStaticUpdatesPerFrame; // 0xE0
		::System::Single SceneEtherEffectObjectFadeDistance; // 0xE4
		::System::Single materialLODDistRatio; // 0xE8
		::System::Boolean WaterGen; // 0xEC
		::System::Boolean useBakedDecal; // 0xED
		::System::Boolean napPassOpt2; // 0xEE
		::System::Boolean DisableDistortion; // 0xEF
		::MoleMole::InLevelNPCCrowdLevel InLevelNPCCrowd; // 0xF0
		::System::Single RTXGIResolutionScale; // 0xF4
		::System::Int32 LightLoopThreadNum; // 0xF8
		::UnityEngine::NAPRenderPipeline0::TransparentMatQuality TransparentMatQuality; // 0xFC
		::System::Single RainDropCountScale; // 0x100
		::UnityEngine::NAPRenderPipeline0::TAAQuality TAAQuality; // 0x104
		::System::Single PLSDynamicUpdateDistance; // 0x108
		::System::UInt32 PLSSkipUpdateFrames; // 0x10C
		::System::Single StreamingKeepDistance; // 0x110
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x114
		::System::Boolean LightLoopOpt; // 0x118
		::System::Boolean UseSceneExtraSimpleMesh; // 0x119
		::System::Boolean enableSceneV2RainRipple; // 0x11A
		::System::Boolean WaterGenBeforeGbuffer; // 0x11B
		::UnityEngine::Rendering::Universal::GpuGrassShadowType gpuGrassShadowType; // 0x11C
		::System::Single LightFadeLodBias; // 0x120
		::UnityEngine::Vector4 HizCullingParams; // 0x124
		::System::Boolean OffScreenParticlesMSAA; // 0x134
		::System::Boolean LodGroupDisableCulled; // 0x135
		::System::Boolean UsePerobjectShadowProxy; // 0x136
		::System::Boolean EnableForwardGBufferPFScene; // 0x137
		::System::Int32 gpuGrassMeshLodBias; // 0x138
		::System::Single StreamingBudget; // 0x13C
		::System::Boolean HideSceneSmallObject; // 0x140
		::System::Boolean oneLightPerPassOpt; // 0x141
		::System::Boolean DisableMotionBlur; // 0x142
		::System::Boolean EnableLoopSubdivision; // 0x143
		::UnityEngine::Vector4 SceneSampleTextureBias; // 0x144
		::System::Int32 ShadowSampleCount; // 0x154
		::System::Single materialLODDistCharacterSimplifyTransition; // 0x158
		::System::Single PowerCostThreshhold; // 0x15C
		::System::Single SceneMechanismCullDistanceBias; // 0x160
		::System::Single taauScale; // 0x164
		::System::Single CapsuleAORenderScale; // 0x168
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudQuality; // 0x16C
		::System::Single EffectHalfTickDistance; // 0x170
		::UnityEngine::Rendering::Universal::RTXAOQuality rtxAOQuality; // 0x174
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQualityPFScene; // 0x178
		::System::UInt32 PLSMaxDynamicUpdatesPerFrame; // 0x17C
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality NAPShaderQuality; // 0x180
		::UnityEngine::Vector2 RecommendRenderResolution; // 0x184
		::System::Single CharacterSampleTextureBias; // 0x18C
		::System::Single materialLODDistShadow; // 0x190
		::System::Boolean LightLoopInitOpt; // 0x194
		::System::Boolean DitherOpt; // 0x195
		::System::Boolean NapPassOpt; // 0x196
		::System::Boolean EnableRefactorLayout; // 0x197
		::System::UInt32 PLSMaxShadowedLightCount; // 0x198
		::System::Boolean LightLoopAfterGbuffer; // 0x19C
		::System::Boolean UseExtraSimpleMesh; // 0x19D
		::System::Boolean enableInteractiveLeaves; // 0x19E
		::System::Boolean EnableAdaptiveStrategies; // 0x19F
		::System::UInt32 PLSAtlasResolution; // 0x1A0
		::System::Boolean DisableSceneGlare; // 0x1A4
		::System::Boolean WaterGenPFScene; // 0x1A5
		::System::Boolean PLSEnable; // 0x1A6
		::System::Boolean SeparateAfterGbufferPass; // 0x1A7
		::System::Boolean EnableForwardGBuffer; // 0x1A8
		::System::Boolean ShadowHizCulling; // 0x1A9
		::System::Boolean forceUseBakedDecalForSpecialScene; // 0x1AA
		::System::Boolean enableParticleLightCountOptimize; // 0x1AB
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0x1AC
		::System::Single PLSNoSkipDistance; // 0x1B0
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality VolumetricCloudV2Quality; // 0x1B4
		::System::Int32 StreamingReduceLevel; // 0x1B8
		::System::Int32 RTXGIQualityPreset; // 0x1BC
		::System::Boolean StreamingMipmapsActive; // 0x1C0
		::System::Boolean GbufferPreZOpt; // 0x1C1
		::System::Boolean DisableGbufferCB; // 0x1C2
		::System::Boolean ShadowAfterGBuffer; // 0x1C3
		::System::Int32 RTXGIQualityPresetPFScene; // 0x1C4
		::System::Boolean needExtraDownSampleForFrostedGlass; // 0x1C8
		::System::Boolean disableDecalHeightMap; // 0x1C9
		::System::Boolean napSubpassOptMore; // 0x1CA
		::System::Boolean EnableSceneCrowd; // 0x1CB
		::MoleMole::Config::ConfigViewObjectMisc_ZKReward Vo_ZKReward; // 0x1CC
		::MoleMole::FrameRateInterpolateType FrameRateInterpolate; // 0x1D8
		::System::Single materialLODDistCharacterSimplify; // 0x1DC
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoMaxQuality; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
