#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DownsampleType.h"
#include "unitysdk/RPG/CustomRP/EDeviceGPUType.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/RPG/CustomRP/GeometryShadowQuality.h"
#include "unitysdk/RPG/CustomRP/PerObjectShadowResolution.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/ShaderQuality.h"
#include "unitysdk/RPG/CustomRP/ShadowCascades.h"
#include "unitysdk/UnityEngine/Rendering/AOCSVersion.h"
#include "unitysdk/UnityEngine/Rendering/DepthCopyFlag.h"
#include "unitysdk/UnityEngine/Rendering/VsmSettings.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class CRPGraphicsPlatformConfig; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_AdaptiveTessellationSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_CRPPostProcessSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_DLSSSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_DeformationSettingCollection; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_DynamicResolutionSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_GlobalSDFSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_GrassSettingCollection; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_LocalLightSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_PcssSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricCloudSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricCloudSphereSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricFogSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricLightSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VoxelIrradianceCacheSettings; }
namespace RPG::CustomRP { class ReflectionSetting; }
namespace RPG::CustomRP { class ScreenColorCopySettingsData; }
namespace RPG::CustomRP { class ShadowSettings; }
namespace RPG::CustomRP { class TransparentSetting; }
namespace RPG::CustomRP { class WaterSettingsData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ENABLEVSM_OFFSET UNITYSDK_OFFSET(0x1C67C920)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_AUDIENCEDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1C67C9D0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CROWDDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1C67C950)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CURRENTPLATFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x1C67CA10)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_FORCEDISABLEMAINLIGHTSHADOW_TEMPFIX_OFFSET UNITYSDK_OFFSET(0x1C67C900)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_PEDESTRIANDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1C67C990)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_AUDIENCEDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1C67C9E0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_CROWDDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1C67C960)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_FORCEDISABLEMAINLIGHTSHADOW_TEMPFIX_OFFSET UNITYSDK_OFFSET(0x1C67C910)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_PEDESTRIANDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1C67C9A0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67CAE0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_TypeDefinitionIndex = 36972;

	class CRPGraphicsSettingsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::CustomRP::EDeviceGPUType DeviceGPUType; // 0x18
		::System::Boolean EnableHDR; // 0x1C
		::System::Single RenderScale; // 0x20
		::System::Single MaxRenderScale; // 0x24
		::System::Single CaptureScale; // 0x28
		::System::Single PPBlitThresthold; // 0x2C
		::RPG::CustomRP::CRPGraphicsSettingsData_DynamicResolutionSettings* DynamicResolution; // 0x30
		::RPG::CustomRP::CRPGraphicsSettingsData_CRPPostProcessSettings* PostProcess; // 0x38
		::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightSettings* LocalLight; // 0x40
		::RPG::CustomRP::Quality AOQuality; // 0x48
		::System::Boolean AOUseComputeShader; // 0x4C
		::UnityEngine::Rendering::AOCSVersion AOComputeShaderVersion; // 0x50
		::System::Boolean EnableAsyncCompute; // 0x54
		::System::Boolean EnableCapsuleAO; // 0x55
		::System::Boolean EnableHiZOC; // 0x56
		::System::Boolean HiZUseCS; // 0x57
		::System::Single MotionVectorDistance; // 0x58
		::System::Single OutlineDistance; // 0x5C
		::System::Single OutlineMinScreenSize; // 0x60
		::System::Boolean OutlineCullUseScreenSize; // 0x64
		::System::Single EyeHairDistance; // 0x68
		::System::Single DecalDistance; // 0x6C
		::System::Single DecalMinScreenSize; // 0x70
		::System::Boolean DecalCullUseScreenSize; // 0x74
		::System::Boolean EnableAmbientTex; // 0x75
		::System::Boolean EnableHalfAmbientRT; // 0x76
		::System::Boolean PrelightingUseDepthCopy; // 0x77
		::System::Boolean HalfEnvSize; // 0x78
		::System::Boolean OutlineMotionVector; // 0x79
		::UnityEngine::Rendering::DepthCopyFlag ForwardDepthCopyFlag; // 0x7C
		::System::Boolean EnableCustomBackground; // 0x80
		::System::Boolean EnablePlayerFastQuit; // 0x81
		::System::Boolean DisableUIAtlas; // 0x82
		::System::Int32 minInstanceCountAsyncFill; // 0x84
		::System::Single PlaneReflectionScale; // 0x88
		::RPG::CustomRP::DownsampleType RTDownsampling; // 0x8C
		::System::Boolean EnableARMDepthFetchForSoftParticles; // 0x90
		::System::Boolean EnableRenderPassSplitInMaliVulkanFollowQuality; // 0x91
		::System::Boolean DisableMaliWorkaroundWarning; // 0x92
		::System::Boolean BlitUseQuadExclusiveInVulkan; // 0x93
		::System::Boolean DisableInstancedItemGraphicsJob; // 0x94
		::System::Boolean EnableInstancedItemCullOnePass; // 0x95
		::System::Boolean RemoveIRIHizCloseFunc; // 0x96
		::System::Boolean EnableComputeSkinningBatch; // 0x97
		::System::Boolean EnableRemoveEmptyIndirectDrawUseOC; // 0x98
		::System::Boolean TrimVkScratchBuffer; // 0x99
		::System::Boolean EnableVKBarrierOpt; // 0x9A
		::System::Boolean GlobalEnableShadow; // 0x9B
		::System::Boolean inDoor; // 0x9C
		::System::Boolean CSMBlend; // 0x9D
		::System::Boolean EnableLocalLightShadowCache; // 0x9E
		::System::Single CSMBlendRange; // 0xA0
		::System::Boolean supportsMainLightShadows; // 0xA4
		::System::Boolean _forceDisableMainLightShadow_TempFix_k__BackingField; // 0xA5
		::System::Int32 MainLightShadowResolution; // 0xA8
		::RPG::CustomRP::ShadowCascades ShadowCascades; // 0xAC
		::System::Single Cascade2Split; // 0xB0
		::UnityEngine::Vector3 Cascade4Split; // 0xB4
		::System::Single ShadowDepthBias; // 0xC0
		::System::Single ShadowNormalBias; // 0xC4
		::System::Boolean EnableSoftShadow; // 0xC8
		::System::Single ShadowDistance; // 0xCC
		::System::Single ShadowNearOffset; // 0xD0
		::System::Single ObjectShadowDistance; // 0xD4
		::System::Single MaxSceneHeightDiff; // 0xD8
		::System::Single MinPosmLightPitchDegree; // 0xDC
		::RPG::CustomRP::ShadowSettings* ShadowSettings; // 0xE0
		::UnityEngine::Rendering::VsmSettings VsmSettings; // 0xE8
		::System::Action_1<::System::Boolean>* OnVSMEnableChanged; // 0x148
		::System::Boolean EnableCloudShadow; // 0x150
		::System::Boolean EnablePOSMOverlay; // 0x151
		::System::Boolean EnablePCSSInUI; // 0x152
		::RPG::CustomRP::CRPGraphicsSettingsData_PcssSettings* pcssSettings; // 0x158
		::RPG::CustomRP::CRPGraphicsSettingsData_PcssSettings* pcssSettingsPOSM; // 0x160
		::System::Boolean EnableSelfShadow; // 0x168
		::System::Boolean EnableFaceHairShadow; // 0x169
		::System::Int32 SelfShadowCount; // 0x16C
		::System::Int32 SelfShadowResolution; // 0x170
		::System::Boolean supportsAdditionalLightShadows; // 0x174
		::System::Int32 LocalShadowOnlyLightCount; // 0x178
		::System::Int32 LocalShadowOnlyResolution; // 0x17C
		::System::Int32 AdditionalShadowLightCount; // 0x180
		::System::Int32 AdditionalShadowCacheCount; // 0x184
		::System::Int32 AdditionalShadowResolution; // 0x188
		::System::Int32 MinPerObjectShadowCacheCount; // 0x18C
		::System::Int32 MaxPerObjectShadowCount; // 0x190
		::RPG::CustomRP::PerObjectShadowResolution PerObjectShadowResolution; // 0x194
		::System::Int32 MaxRealtimeShadowlightCount; // 0x198
		::System::Single geometryShadowFadeRatio; // 0x19C
		::RPG::CustomRP::GeometryShadowQuality geometryShadowQuality; // 0x1A0
		::System::Boolean ScreenSpaceDistortion; // 0x1A4
		::System::Single ScreenSpaceDistortionBufferScale; // 0x1A8
		::RPG::CustomRP::ShaderQuality envShaderQuality; // 0x1AC
		::System::Boolean LuxSceneGlass; // 0x1B0
		::System::Boolean LuxSceneEmission; // 0x1B1
		::System::Boolean CharForwardEmission; // 0x1B2
		::System::Boolean CharAndroidLowQuality; // 0x1B3
		::RPG::CustomRP::Quality CharacterQuality; // 0x1B4
		::System::Boolean HighQualityEffect; // 0x1B8
		::System::Boolean EnableLinearFog; // 0x1B9
		::System::Boolean EnableHeightFog; // 0x1BA
		::System::Boolean EnableEmotionEyeBlink; // 0x1BB
		::System::Action* OnCrowdQualityChange; // 0x1C0
		::RPG::CustomRP::Quality _crowdDensityQuality; // 0x1C8
		::System::Action* OnPedestianQualityChange; // 0x1D0
		::RPG::CustomRP::Quality _pedestrianDensityQuality; // 0x1D8
		::System::Action* OnAudienceQualityChange; // 0x1E0
		::RPG::CustomRP::Quality _audienceDensityQuality; // 0x1E8
		::System::Int32 SkipFrameDelay; // 0x1EC
		::RPG::CustomRP::ReflectionSetting* reflectionSettings; // 0x1F0
		::RPG::CustomRP::WaterSettingsData* waterSettings; // 0x1F8
		::RPG::CustomRP::ScreenColorCopySettingsData* screenColorCopySettings; // 0x200
		::RPG::CustomRP::TransparentSetting* transparentSetting; // 0x208
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricCloudSettings* volumetricCloudSettings; // 0x210
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricFogSettings* volumetricFogSettings; // 0x218
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricCloudSphereSettings* volumetricCloudSphereSettings; // 0x220
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricLightSettings* volumetricLightSettings; // 0x228
		::RPG::CustomRP::CRPGraphicsSettingsData_GlobalSDFSettings* globalSDFSettings; // 0x230
		::RPG::CustomRP::CRPGraphicsSettingsData_GrassSettingCollection* grassSettings; // 0x238
		::RPG::CustomRP::CRPGraphicsSettingsData_DeformationSettingCollection* deformationSettings; // 0x240
		::RPG::CustomRP::CRPGraphicsSettingsData_VoxelIrradianceCacheSettings* voxelIrradianceCacheSettings; // 0x248
		::RPG::CustomRP::CRPGraphicsSettingsData_AdaptiveTessellationSettings* adaptiveTessellationSettings; // 0x250
		::RPG::CustomRP::CRPGraphicsSettingsData_DLSSSettings* dlssSettings; // 0x258
		::System::Boolean enableMetalVrr; // 0x260
		::System::Int32 particleTrailSmoothness; // 0x264
		::RPG::CustomRP::CRPGraphicsPlatformConfig* iosConfig; // 0x268
		::RPG::CustomRP::CRPGraphicsPlatformConfig* androidConfig; // 0x270
		::RPG::CustomRP::CRPGraphicsPlatformConfig* ps5Config; // 0x278
		::RPG::CustomRP::CRPGraphicsPlatformConfig* pcConfig; // 0x280
		::RPG::CustomRP::FlagMask _FeatureFlag; // 0x288

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_forceDisableMainLightShadow_TempFix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_FORCEDISABLEMAINLIGHTSHADOW_TEMPFIX_OFFSET))(this);
		}

		::System::Void set_forceDisableMainLightShadow_TempFix(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_FORCEDISABLEMAINLIGHTSHADOW_TEMPFIX_OFFSET))(this, a1);
		}

		::System::Void EnableVSM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ENABLEVSM_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_CrowdDensityQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CROWDDENSITYQUALITY_OFFSET))(this);
		}

		::System::Void set_CrowdDensityQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_CROWDDENSITYQUALITY_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_PedestrianDensityQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_PEDESTRIANDENSITYQUALITY_OFFSET))(this);
		}

		::System::Void set_PedestrianDensityQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_PEDESTRIANDENSITYQUALITY_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_AudienceDensityQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_AUDIENCEDENSITYQUALITY_OFFSET))(this);
		}

		::System::Void set_AudienceDensityQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_AUDIENCEDENSITYQUALITY_OFFSET))(this, a1);
		}

		static ::RPG::CustomRP::CRPGraphicsPlatformConfig* get_CurrentPlatformConfig()
		{
			return ((::RPG::CustomRP::CRPGraphicsPlatformConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CURRENTPLATFORMCONFIG_OFFSET))();
		}
	};
}
