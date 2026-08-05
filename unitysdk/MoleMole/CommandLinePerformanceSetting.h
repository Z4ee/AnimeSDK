#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ZKReward.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/Nullable_1.h"
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
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class PerformanceSettingProfile; }

#define MOLEMOLE_COMMANDLINEPERFORMANCESETTING_METHOD_2_9FC70C958B16100F_OFFSET UNITYSDK_OFFSET(0x1A494280)
#define MOLEMOLE_COMMANDLINEPERFORMANCESETTING_METHOD_2_F1BB5925BFFCAC6C_OFFSET UNITYSDK_OFFSET(0x1A494EB0)
#define MOLEMOLE_COMMANDLINEPERFORMANCESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A494E70)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLinePerformanceSetting_TypeDefinitionIndex = 68961;

	class CommandLinePerformanceSetting : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::PerformanceSettingProfile*, ::MoleMole::CommandLinePerformanceSetting*>
	{
	public:
		::System::Nullable_1<::System::Boolean> StreamingMipmapsActive; // 0x18
		::System::Nullable_1<::System::Single> StreamingBudget; // 0x1C
		::System::Nullable_1<::System::Int32> StreamingTextureMaster; // 0x24
		::System::Nullable_1<::System::Int32> StreamingReduceLevel; // 0x2C
		::System::Nullable_1<::System::Boolean> DisableStreamingMipmapsUseVisibility; // 0x34
		::System::Nullable_1<::System::Single> StreamingKeepDistance; // 0x38
		::System::Nullable_1<::System::Single> taauScale; // 0x40
		::System::Nullable_1<::System::Single> SceneMechanismCullDistanceBias; // 0x48
		::System::Nullable_1<::System::Single> EffectHalfTickDistance; // 0x50
		::System::Nullable_1<::System::Single> EffectNoTickDistance; // 0x58
		::System::Nullable_1<::System::Boolean> DisableCapsuleAOInBattle; // 0x60
		::System::Nullable_1<::System::Single> CapsuleAORenderScale; // 0x64
		::System::Nullable_1<::System::Boolean> HideSceneSmallObject; // 0x6C
		::System::Nullable_1<::System::Single> LODBias; // 0x70
		::System::Nullable_1<::System::Boolean> UseExtraSimpleMesh; // 0x78
		::System::Nullable_1<::System::Boolean> UseSceneExtraSimpleMesh; // 0x7A
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x80
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x88
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x90
		::System::Nullable_1<::MoleMole::PerformanceSettingProfile_ENPCOmitLevel> NpcOmitLevel; // 0x98
		::System::Nullable_1<::System::Single> materialLODDistRatio; // 0xA0
		::System::Nullable_1<::System::Single> materialLODDistShadow; // 0xA8
		::System::Nullable_1<::System::Int32> perObjectShadowMaxCount; // 0xB0
		::System::Nullable_1<::System::Int32> perObjectShadowResolution; // 0xB8
		::System::Nullable_1<::System::Single> materialLODDistMirrorReflection; // 0xC0
		::System::Nullable_1<::System::Single> materialLODDistOutline; // 0xC8
		::System::Nullable_1<::System::Single> materialLODDistCharacterSimplify; // 0xD0
		::System::Nullable_1<::System::Single> materialLODDistCharacterSimplifyTransition; // 0xD8
		::System::Nullable_1<::System::Boolean> EnableSceneCrowd; // 0xE0
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0xE8
		::System::Nullable_1<::System::Boolean> ShadowHizCulling; // 0xF0
		::System::Nullable_1<::UnityEngine::Vector4> HizCullingParams; // 0xF4
		::System::Nullable_1<::UnityEngine::Vector4> HizShadowCullingParams; // 0x108
		::System::Nullable_1<::System::Single> DiffuseOnlyDistance; // 0x11C
		::System::Nullable_1<::System::Boolean> DisableDOF; // 0x124
		::System::Nullable_1<::System::Boolean> DisableMotionBlur; // 0x126
		::System::Nullable_1<::System::Boolean> DisableSceneGlare; // 0x128
		::System::Nullable_1<::System::Boolean> DisableDistortion; // 0x12A
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::NAPShaderQuality> NAPShaderQuality; // 0x12C
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::TransparentMatQuality> TransparentMatQuality; // 0x134
		::System::Nullable_1<::System::Int32> ShadowSampleCount; // 0x13C
		::System::Nullable_1<::UnityEngine::Vector4> SceneSampleTextureBias; // 0x144
		::System::Nullable_1<::System::Single> CharacterSampleTextureBias; // 0x158
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::TAAQuality> TAAQuality; // 0x160
		::System::Nullable_1<::System::Boolean> DitherOpt; // 0x168
		::System::Nullable_1<::System::Boolean> OffScreenParticlesMSAA; // 0x16A
		::System::Nullable_1<::System::Boolean> UsePerobjectShadowProxy; // 0x16C
		::System::Nullable_1<::System::Boolean> NapPassOpt; // 0x16E
		::System::Nullable_1<::System::Boolean> napPassOpt2; // 0x170
		::System::Nullable_1<::System::Boolean> LightLoopAfterGbuffer; // 0x172
		::System::Nullable_1<::System::Boolean> napSubpassOpt; // 0x174
		::System::Nullable_1<::System::Boolean> napSubpassOptMore; // 0x176
		::System::Nullable_1<::System::Int32> cpuQualityLevel; // 0x178
		::System::Nullable_1<::System::Boolean> oneLightPerPassOpt; // 0x180
		::System::Nullable_1<::System::Single> oneLightPerPassOptScreenRatioSqr; // 0x184
		::System::Nullable_1<::System::Boolean> SeparateAfterGbufferPass; // 0x18C
		::System::Nullable_1<::System::Boolean> ShadowAfterGBuffer; // 0x18E
		::System::Nullable_1<::System::Boolean> DisableGbufferCB; // 0x190
		::System::Nullable_1<::System::Boolean> LightLoopOpt; // 0x192
		::System::Nullable_1<::System::Boolean> LightLoopInitOpt; // 0x194
		::System::Nullable_1<::System::Int32> LightLoopThreadNum; // 0x198
		::System::Nullable_1<::System::Int32> LightLoopLog2ClusterNum; // 0x1A0
		::System::Nullable_1<::System::Single> LightLoopLogBase; // 0x1A8
		::System::Nullable_1<::System::Boolean> napDeferredOpt; // 0x1B0
		::System::Nullable_1<::System::Boolean> SampleIBLOpt; // 0x1B2
		::System::Nullable_1<::System::Boolean> EnableRefactorLayout; // 0x1B4
		::System::Nullable_1<::System::Boolean> GbufferPreZOpt; // 0x1B6
		::System::Nullable_1<::System::Boolean> PLSEnable; // 0x1B8
		::System::Nullable_1<::System::UInt32> PLSAtlasResolution; // 0x1BC
		::System::Nullable_1<::System::Single> PLSDynamicUpdateDistance; // 0x1C4
		::System::Nullable_1<::System::Single> PLSLocalLightCastShadowDistance; // 0x1CC
		::System::Nullable_1<::System::Single> PLSNoSkipDistance; // 0x1D4
		::System::Nullable_1<::System::UInt32> PLSSkipUpdateFrames; // 0x1DC
		::System::Nullable_1<::System::UInt32> PLSMaxShadowedLightCount; // 0x1E4
		::System::Nullable_1<::System::UInt32> PLSMaxDynamicUpdatesPerFrame; // 0x1EC
		::System::Nullable_1<::System::UInt32> PLSMaxStaticUpdatesPerFrame; // 0x1F4
		::System::Nullable_1<::MoleMole::FrameRateInterpolateType> FrameRateInterpolate; // 0x1FC
		::System::Nullable_1<::System::Boolean> LodGroupDisableCulled; // 0x204
		::System::Nullable_1<::System::Single> SceneEtherEffectObjectFadeDistance; // 0x208
		::System::Nullable_1<::System::Boolean> EnableLoopSubdivision; // 0x210
		::System::Nullable_1<::System::Boolean> EnableAdaptiveStrategies; // 0x212
		::System::Nullable_1<::System::Single> FrontFaceCullingBias; // 0x214
		::System::Nullable_1<::System::Single> FrontFaceCullingToleranceBias; // 0x21C
		::System::Nullable_1<::System::Single> ScreenLengthCullingBias; // 0x224
		::System::Nullable_1<::UnityEngine::Rendering::Universal::LightLodQuality> LightLodQuality; // 0x22C
		::System::Nullable_1<::System::Single> LightFadeLodBias; // 0x234
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::ENapGIQuality> NapGIQuality; // 0x23C
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality> VolumetricCloudQuality; // 0x244
		::System::Nullable_1<::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality> VolumetricCloudV2Quality; // 0x24C
		::System::Nullable_1<::System::Single> RainDropCountScale; // 0x254
		::System::Nullable_1<::System::Int32> RTXGIQualityPreset; // 0x25C
		::System::Nullable_1<::System::Single> RTXGIResolutionScale; // 0x264
		::System::Nullable_1<::System::Single> RTXGIRayBudget; // 0x26C
		::System::Nullable_1<::System::Boolean> EnableForwardGBuffer; // 0x274
		::System::Nullable_1<::System::Int32> RTXGIQualityPresetPFScene; // 0x278
		::System::Nullable_1<::System::Single> RTXGIResolutionScalePFScene; // 0x280
		::System::Nullable_1<::System::Single> RTXGIRayBudgetPFScene; // 0x288
		::System::Nullable_1<::System::Boolean> EnableForwardGBufferPFScene; // 0x290
		::System::Nullable_1<::System::Boolean> WaterGen; // 0x292
		::System::Nullable_1<::UnityEngine::Rendering::Universal::EWaterGenQuality> WaterGenQuality; // 0x294
		::System::Nullable_1<::System::Boolean> WaterGenPFScene; // 0x29C
		::System::Nullable_1<::UnityEngine::Rendering::Universal::EWaterGenQuality> WaterGenQualityPFScene; // 0x2A0
		::System::Nullable_1<::System::Boolean> WaterGenBeforeGbuffer; // 0x2A8
		::System::Nullable_1<::UnityEngine::Rendering::Universal::EWaterInteractQuality> WaterInteractionQuality; // 0x2AC
		::System::Nullable_1<::UnityEngine::Rendering::Universal::EWaterInteractQuality> WaterInteractionQualityPFScene; // 0x2B4
		::System::Nullable_1<::MoleMole::InLevelNPCCrowdLevel> InLevelNPCCrowd; // 0x2BC
		::System::Nullable_1<::MoleMole::NapAnisotropicSamplingType> AnisotropicSamplingType; // 0x2C4
		::System::Nullable_1<::System::Int32> MaxAnisotropicSamplingLevel; // 0x2CC
		::System::Nullable_1<::System::Boolean> disableDecalHeightMap; // 0x2D4
		::System::Nullable_1<::System::Boolean> useBakedDecal; // 0x2D6
		::System::Nullable_1<::System::Single> decalFadeDistanceBias; // 0x2D8
		::System::Nullable_1<::System::Boolean> forceUseBakedDecalForSpecialScene; // 0x2E0
		::System::Nullable_1<::System::Boolean> useFPTLLightCulling; // 0x2E2
		::System::Nullable_1<::System::Boolean> disableParallaxMapForDecal; // 0x2E4
		::System::Nullable_1<::System::Single> SceneFurLayerCountScale; // 0x2E8
		::System::Nullable_1<::System::Boolean> enableSceneV2RainRipple; // 0x2F0
		::System::Nullable_1<::System::Int32> SceneMaxFurLayer; // 0x2F4
		::System::Nullable_1<::System::Int32> gpuGrassMeshLodBias; // 0x2FC
		::System::Nullable_1<::System::Single> gpuGrassDistanceCullingBias; // 0x304
		::System::Nullable_1<::UnityEngine::Rendering::Universal::GpuGrassShadowType> gpuGrassShadowType; // 0x30C
		::System::Nullable_1<::System::Boolean> enableInteractiveLeaves; // 0x314
		::System::Nullable_1<::System::Boolean> needExtraDownSampleForFrostedGlass; // 0x316
		::System::Nullable_1<::System::Boolean> enableParticleLightCountOptimize; // 0x318
		::System::Nullable_1<::MoleMole::Config::ConfigViewObjectMisc_EntityCreate> Vo_EntityCreate; // 0x320
		::System::Nullable_1<::MoleMole::Config::ConfigViewObjectMisc_ZKReward> Vo_ZKReward; // 0x348
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::SSAOQuality> ssaoMaxQuality; // 0x358
		::System::Nullable_1<::UnityEngine::Rendering::Universal::RTXAOQuality> rtxAOQuality; // 0x360
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::SSDOQuality> ssdoQuality; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPERFORMANCESETTING__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLinePerformanceSetting* Method_2_9FC70C958B16100F(::MoleMole::PerformanceSettingProfile* a1)
		{
			return ((::MoleMole::CommandLinePerformanceSetting*(*)(::PVOID, ::MoleMole::PerformanceSettingProfile*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPERFORMANCESETTING_METHOD_2_9FC70C958B16100F_OFFSET))(this, a1);
		}

		::MoleMole::PerformanceSettingProfile* Method_2_F1BB5925BFFCAC6C(::MoleMole::PerformanceSettingProfile* a1)
		{
			return ((::MoleMole::PerformanceSettingProfile*(*)(::PVOID, ::MoleMole::PerformanceSettingProfile*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEPERFORMANCESETTING_METHOD_2_F1BB5925BFFCAC6C_OFFSET))(this, a1);
		}
	};
}
