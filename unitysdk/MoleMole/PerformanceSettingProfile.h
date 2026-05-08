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
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TAAQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TransparentMatQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterGenQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterInteractQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/RTXAOQuality.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x12FAC2F0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_TypeDefinitionIndex = 46105;

	class PerformanceSettingProfile : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_MaxLayers = 0x20; // 0x0
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x10
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x18
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x20
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0x28
		::System::Boolean napSubpassOpt; // 0x30
		::System::Boolean DitherOpt; // 0x31
		::System::Boolean napDeferredOpt; // 0x32
		::System::Boolean DisableSceneGlare; // 0x33
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQualityPFScene; // 0x34
		::System::Single LightFadeLodBias; // 0x38
		::System::UInt32 PLSMaxDynamicUpdatesPerFrame; // 0x3C
		::System::Boolean EnableForwardGBuffer; // 0x40
		::System::Boolean WaterGenBeforeGbuffer; // 0x41
		::System::Boolean LightLoopOpt; // 0x42
		::System::Boolean GbufferPreZOpt; // 0x43
		::System::Boolean EnableAdaptiveStrategies; // 0x44
		::System::Boolean UsePerobjectShadowProxy; // 0x45
		::System::Boolean SampleIBLOpt; // 0x46
		::System::Boolean needExtraDownSampleForFrostedGlass; // 0x47
		::System::Single SceneFurLayerCountScale; // 0x48
		::System::Boolean DisableStreamingMipmapsUseVisibility; // 0x4C
		::System::Boolean HideSceneSmallObject; // 0x4D
		::System::Boolean napSubpassOptMore; // 0x4E
		::System::Boolean DisableGbufferCB; // 0x4F
		::System::Int32 LightLoopThreadNum; // 0x50
		::System::Boolean EnableSceneCrowd; // 0x54
		::System::Boolean napPassOpt2; // 0x55
		::System::Boolean ShadowHizCulling; // 0x56
		::System::Boolean WaterGenPFScene; // 0x57
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQualityPFScene; // 0x58
		::System::Int32 RTXGIQualityPresetPFScene; // 0x5C
		::System::Boolean EnableLoopSubdivision; // 0x60
		::System::Boolean oneLightPerPassOpt; // 0x61
		::System::Boolean useBakedDecal; // 0x62
		::System::Boolean DisableMotionBlur; // 0x63
		::System::Int32 SceneMaxFurLayer; // 0x64
		::System::Boolean StreamingMipmapsActive; // 0x68
		::System::Boolean DisableDOF; // 0x69
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x6C
		::System::Int32 RTXGIHighQualityShader; // 0x70
		::System::Single RTXGIRayBudgetPFScene; // 0x74
		::System::Single StreamingKeepDistance; // 0x78
		::System::Single ScreenLengthCullingBias; // 0x7C
		::System::Int32 RTXGIQualityPreset; // 0x80
		::UnityEngine::Rendering::Universal::RTXAOQuality rtxAOQuality; // 0x84
		::UnityEngine::Vector4 HizShadowCullingParams; // 0x88
		::UnityEngine::Vector2 RecommendRenderResolution; // 0x98
		::UnityEngine::Rendering::Universal::LightLodQuality LightLodQuality; // 0xA0
		::System::Single decalFadeDistanceBias; // 0xA4
		::MoleMole::InLevelNPCCrowdLevel InLevelNPCCrowd; // 0xA8
		::System::UInt32 PLSAtlasResolution; // 0xAC
		::System::Int32 StreamingTextureMaster; // 0xB0
		::System::Single materialLODDistRatio; // 0xB4
		::UnityEngine::Rendering::Universal::GpuGrassShadowType gpuGrassShadowType; // 0xB8
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoMaxQuality; // 0xBC
		::System::Single RTXGIResolutionScale; // 0xC0
		::System::Boolean PLSEnable; // 0xC4
		::System::Boolean UseSceneExtraSimpleMesh; // 0xC5
		::System::Boolean ShadowAfterGBuffer; // 0xC6
		::System::Boolean NapPassOpt; // 0xC7
		::UnityEngine::Vector4 HizCullingParams; // 0xC8
		::System::Int32 perObjectShadowMaxCount; // 0xD8
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0xDC
		::System::Single PowerCostThreshhold; // 0xE0
		::System::UInt32 PLSMaxShadowedLightCount; // 0xE4
		::System::Int32 MaxAnisotropicSamplingLevel; // 0xE8
		::System::Single RTXGIRayBudget; // 0xEC
		::UnityEngine::Vector4 SceneSampleTextureBias; // 0xF0
		::System::Int32 perObjectShadowResolution; // 0x100
		::System::Single PLSDynamicUpdateDistance; // 0x104
		::System::Int32 LightLoopLog2ClusterNum; // 0x108
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudQuality; // 0x10C
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Vo_EntityCreate; // 0x110
		::System::Single LODBias; // 0x11C
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQuality; // 0x120
		::System::Boolean UseExtraSimpleMesh; // 0x124
		::System::Boolean LightLoopInitOpt; // 0x125
		::System::Boolean EnableForwardGBufferPFScene; // 0x126
		::System::Boolean forceUseBakedDecalForSpecialScene; // 0x127
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0x128
		::System::Single RainDropCountScale; // 0x12C
		::System::Single materialLODDistShadow; // 0x130
		::System::Single LightLoopLogBase; // 0x134
		::System::Single RTXGIResolutionScalePFScene; // 0x138
		::System::Int32 StreamingReduceLevel; // 0x13C
		::System::Int32 ShadowSampleCount; // 0x140
		::UnityEngine::NAPRenderPipeline0::TransparentMatQuality TransparentMatQuality; // 0x144
		::System::Single PLSNoSkipDistance; // 0x148
		::System::Single DiffuseOnlyDistance; // 0x14C
		::System::Single FrontFaceCullingToleranceBias; // 0x150
		::System::Single SceneMechanismCullDistanceBias; // 0x154
		::System::Boolean LodGroupDisableCulled; // 0x158
		::System::Boolean LightLoopAfterGbuffer; // 0x159
		::System::Boolean DisableDistortion; // 0x15A
		::System::Boolean useFPTLLightCulling; // 0x15B
		::System::Single EffectNoTickDistance; // 0x15C
		::System::Single CharacterSampleTextureBias; // 0x160
		::System::UInt32 PLSMaxStaticUpdatesPerFrame; // 0x164
		::System::Single materialLODDistMirrorReflection; // 0x168
		::System::Single StreamingBudget; // 0x16C
		::System::Single CapsuleAORenderScale; // 0x170
		::System::Int32 gpuGrassMeshLodBias; // 0x174
		::System::Single FrontFaceCullingBias; // 0x178
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQuality; // 0x17C
		::System::Boolean disableParallaxMapForDecal; // 0x180
		::System::Boolean EnableRefactorLayout; // 0x181
		::System::Boolean OffScreenParticlesMSAA; // 0x182
		::System::Boolean WaterGen; // 0x183
		::System::Single EffectHalfTickDistance; // 0x184
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality NapGIQuality; // 0x188
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality NAPShaderQuality; // 0x18C
		::System::Single SceneEtherEffectObjectFadeDistance; // 0x190
		::MoleMole::FrameRateInterpolateType FrameRateInterpolate; // 0x194
		::System::Boolean SeparateAfterGbufferPass; // 0x198
		::System::Boolean disableDecalHeightMap; // 0x199
		::System::Boolean enableParticleLightCountOptimize; // 0x19A
		::System::Boolean DisableCapsuleAOInBattle; // 0x19B
		::System::Single materialLODDistCharacterSimplify; // 0x19C
		::System::Single gpuGrassDistanceCullingBias; // 0x1A0
		::System::Single materialLODDistCharacterSimplifyTransition; // 0x1A4
		::System::UInt32 PLSSkipUpdateFrames; // 0x1A8
		::System::Single taauScale; // 0x1AC
		::UnityEngine::NAPRenderPipeline0::TAAQuality TAAQuality; // 0x1B0
		::System::Int32 RTXGIHighQualityShaderPFScene; // 0x1B4
		::System::Single materialLODDistOutline; // 0x1B8
		::System::Single PLSLocalLightCastShadowDistance; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
