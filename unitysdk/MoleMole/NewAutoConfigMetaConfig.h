#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class AbilityRegistryInfo; }
namespace MoleMole { class GraphRegistryInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEWAUTOCONFIGMETACONFIG_BUILDABILITYCONFIGINFO_OFFSET UNITYSDK_OFFSET(0x1264E840)
#define MOLEMOLE_NEWAUTOCONFIGMETACONFIG_BUILDAUTOMETACONFIG_OFFSET UNITYSDK_OFFSET(0x1264E790)
#define MOLEMOLE_NEWAUTOCONFIGMETACONFIG_GET_ABILITYREGISTRYNAMES_OFFSET UNITYSDK_OFFSET(0x1264E540)
#define MOLEMOLE_NEWAUTOCONFIGMETACONFIG_REFRESHGAMESTARTSCRIPTOBJECTS_OFFSET UNITYSDK_OFFSET(0x1264E880)
#define MOLEMOLE_NEWAUTOCONFIGMETACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1264E8C0)

namespace MoleMole
{
	inline static constexpr unsigned int NewAutoConfigMetaConfig_TypeDefinitionIndex = 60676;

	class NewAutoConfigMetaConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* postprocessColorAdjustmentsPathes; // 0x58
		::Il2CppArray<::Foundation::AssetPath>* postprocessColorAdjustmentsPathes_NewVersion; // 0x60
		::Il2CppArray<::Foundation::AssetPath>* postprocessDepthOfFieldPathes; // 0x68
		::Il2CppArray<::Foundation::AssetPath>* postprocessDepthOfFieldPathes_NewVersion; // 0x70
		::Il2CppArray<::Foundation::AssetPath>* postprocessFXColorCorrectionPathes; // 0x78
		::Il2CppArray<::Foundation::AssetPath>* postprocessFXColorCorrectionPathes_NewVersion; // 0x80
		::Il2CppArray<::Foundation::AssetPath>* postprocessGaussianBlurPathes; // 0x88
		::Il2CppArray<::Foundation::AssetPath>* postprocessGaussianBlurPathes_NewVersion; // 0x90
		::Il2CppArray<::Foundation::AssetPath>* postprocessGlitchPathes; // 0x98
		::Il2CppArray<::Foundation::AssetPath>* postprocessGlitchPathes_NewVersion; // 0xA0
		::Il2CppArray<::Foundation::AssetPath>* postprocessRadialBlurPathes; // 0xA8
		::Il2CppArray<::Foundation::AssetPath>* postprocessRadialBlurPathes_NewVersion; // 0xB0
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenEffectsPathes; // 0xB8
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenEffectsPathes_NewVersion; // 0xC0
		::Il2CppArray<::Foundation::AssetPath>* postprocessVignettePathes; // 0xC8
		::Il2CppArray<::Foundation::AssetPath>* postprocessVignettePathes_NewVersion; // 0xD0
		::Il2CppArray<::Foundation::AssetPath>* postprocessCharacterColorCorrectionPathes; // 0xD8
		::Il2CppArray<::Foundation::AssetPath>* postprocessCharacterColorCorrectionPathes_NewVersion; // 0xE0
		::Il2CppArray<::Foundation::AssetPath>* postprocessChromaticAberrationPathes; // 0xE8
		::Il2CppArray<::Foundation::AssetPath>* postprocessChromaticAberrationPathes_NewVersion; // 0xF0
		::Il2CppArray<::Foundation::AssetPath>* postprocessDirectionalBlurPathes; // 0xF8
		::Il2CppArray<::Foundation::AssetPath>* postprocessDirectionalBlurPathes_NewVersion; // 0x100
		::Il2CppArray<::Foundation::AssetPath>* postprocessFilmGrainPathes; // 0x108
		::Il2CppArray<::Foundation::AssetPath>* postprocessFilmGrainPathes_NewVersion; // 0x110
		::Il2CppArray<::Foundation::AssetPath>* postprocessLensDistortionPathes; // 0x118
		::Il2CppArray<::Foundation::AssetPath>* postprocessLensDistortionPathes_NewVersion; // 0x120
		::Il2CppArray<::Foundation::AssetPath>* postprocessNapBloomPathes; // 0x128
		::Il2CppArray<::Foundation::AssetPath>* postprocessNapBloomPathes_NewVersion; // 0x130
		::Il2CppArray<::Foundation::AssetPath>* postprocessFXFogPathes; // 0x138
		::Il2CppArray<::Foundation::AssetPath>* postprocessFXFogPathes_NewVersion; // 0x140
		::Il2CppArray<::Foundation::AssetPath>* postprocessOldCRTPathes; // 0x148
		::Il2CppArray<::Foundation::AssetPath>* postprocessOldCRTPathes_NewVersion; // 0x150
		::Il2CppArray<::Foundation::AssetPath>* postprocessDistortionPathes; // 0x158
		::Il2CppArray<::Foundation::AssetPath>* postprocessDistortionPathes_NewVersion; // 0x160
		::Il2CppArray<::Foundation::AssetPath>* postprocessVREffectsPathes; // 0x168
		::Il2CppArray<::Foundation::AssetPath>* postprocessVREffectsPathes_NewVersion; // 0x170
		::Il2CppArray<::Foundation::AssetPath>* postprocessLensDirtPathes; // 0x178
		::Il2CppArray<::Foundation::AssetPath>* postprocessLensDirtPathes_NewVersion; // 0x180
		::Il2CppArray<::Foundation::AssetPath>* postprocessMotionBlurPathes; // 0x188
		::Il2CppArray<::Foundation::AssetPath>* postprocessMotionBlurPathes_NewVersion; // 0x190
		::Il2CppArray<::Foundation::AssetPath>* postprocessCharacterIgnisFatuusPathes; // 0x198
		::Il2CppArray<::Foundation::AssetPath>* postprocessCharacterIgnisFatuusPathes_NewVersion; // 0x1A0
		::Il2CppArray<::Foundation::AssetPath>* postprocessMonsterIgnisFatuusPathes; // 0x1A8
		::Il2CppArray<::Foundation::AssetPath>* postprocessMonsterIgnisFatuusPathes_NewVersion; // 0x1B0
		::Il2CppArray<::Foundation::AssetPath>* postprocessUnsharpMaskPathes; // 0x1B8
		::Il2CppArray<::Foundation::AssetPath>* postprocessUnsharpMaskPathes_NewVersion; // 0x1C0
		::Il2CppArray<::Foundation::AssetPath>* postprocessColorLookupPathes; // 0x1C8
		::Il2CppArray<::Foundation::AssetPath>* postprocessColorLookupPathes_NewVersion; // 0x1D0
		::Il2CppArray<::Foundation::AssetPath>* postprocessFXComicDotPathes; // 0x1D8
		::Il2CppArray<::Foundation::AssetPath>* postprocessFXComicDotPathes_NewVersion; // 0x1E0
		::Il2CppArray<::Foundation::AssetPath>* postprocessAutoExposurePathes; // 0x1E8
		::Il2CppArray<::Foundation::AssetPath>* postprocessAutoExposurePathes_NewVersion; // 0x1F0
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenSpaceAmbientOcclusionPathes; // 0x1F8
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenSpaceAmbientOcclusionPathes_NewVersion; // 0x200
		::Il2CppArray<::Foundation::AssetPath>* postprocessAmplifyOcclusionPathes; // 0x208
		::Il2CppArray<::Foundation::AssetPath>* postprocessAmplifyOcclusionPathes_NewVersion; // 0x210
		::Il2CppArray<::Foundation::AssetPath>* postprocessCausticsPathes; // 0x218
		::Il2CppArray<::Foundation::AssetPath>* postprocessCausticsPathes_NewVersion; // 0x220
		::Il2CppArray<::Foundation::AssetPath>* postprocessChannelMixerPathes; // 0x228
		::Il2CppArray<::Foundation::AssetPath>* postprocessChannelMixerPathes_NewVersion; // 0x230
		::Il2CppArray<::Foundation::AssetPath>* postprocessCharacterVolumeProxyPathes; // 0x238
		::Il2CppArray<::Foundation::AssetPath>* postprocessCharacterVolumeProxyPathes_NewVersion; // 0x240
		::Il2CppArray<::Foundation::AssetPath>* postprocessColorCurvesPathes; // 0x248
		::Il2CppArray<::Foundation::AssetPath>* postprocessColorCurvesPathes_NewVersion; // 0x250
		::Il2CppArray<::Foundation::AssetPath>* postprocessCullingPathes; // 0x258
		::Il2CppArray<::Foundation::AssetPath>* postprocessCullingPathes_NewVersion; // 0x260
		::Il2CppArray<::Foundation::AssetPath>* postprocessLiftGammaGainPathes; // 0x268
		::Il2CppArray<::Foundation::AssetPath>* postprocessLiftGammaGainPathes_NewVersion; // 0x270
		::Il2CppArray<::Foundation::AssetPath>* postprocessLightingPathes; // 0x278
		::Il2CppArray<::Foundation::AssetPath>* postprocessLightingPathes_NewVersion; // 0x280
		::Il2CppArray<::Foundation::AssetPath>* postprocessNapCapsuleAOLightingPathes; // 0x288
		::Il2CppArray<::Foundation::AssetPath>* postprocessNapCapsuleAOLightingPathes_NewVersion; // 0x290
		::Il2CppArray<::Foundation::AssetPath>* postprocessNapContactShadowPathes; // 0x298
		::Il2CppArray<::Foundation::AssetPath>* postprocessNapContactShadowPathes_NewVersion; // 0x2A0
		::Il2CppArray<::Foundation::AssetPath>* postprocessPaniniProjectionPathes; // 0x2A8
		::Il2CppArray<::Foundation::AssetPath>* postprocessPaniniProjectionPathes_NewVersion; // 0x2B0
		::Il2CppArray<::Foundation::AssetPath>* postprocessPartialBlurPathes; // 0x2B8
		::Il2CppArray<::Foundation::AssetPath>* postprocessPartialBlurPathes_NewVersion; // 0x2C0
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenSpacePlanarReflectionPathes; // 0x2C8
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenSpacePlanarReflectionPathes_NewVersion; // 0x2D0
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenSpaceReflectionPathes; // 0x2D8
		::Il2CppArray<::Foundation::AssetPath>* postprocessScreenSpaceReflectionPathes_NewVersion; // 0x2E0
		::Il2CppArray<::Foundation::AssetPath>* postprocessShadowsMidtonesHighlightsPathes; // 0x2E8
		::Il2CppArray<::Foundation::AssetPath>* postprocessShadowsMidtonesHighlightsPathes_NewVersion; // 0x2F0
		::Il2CppArray<::Foundation::AssetPath>* postprocessSplitToningPathes; // 0x2F8
		::Il2CppArray<::Foundation::AssetPath>* postprocessSplitToningPathes_NewVersion; // 0x300
		::Il2CppArray<::Foundation::AssetPath>* postprocessTonemappingPathes; // 0x308
		::Il2CppArray<::Foundation::AssetPath>* postprocessTonemappingPathes_NewVersion; // 0x310
		::Il2CppArray<::Foundation::AssetPath>* postprocessWhiteBalancePathes; // 0x318
		::Il2CppArray<::Foundation::AssetPath>* postprocessWhiteBalancePathes_NewVersion; // 0x320
		::Il2CppArray<::Foundation::AssetPath>* shaderCustomFogPathes; // 0x328
		::Il2CppArray<::Foundation::AssetPath>* abilityRegistryPathes; // 0x330
		::System::Int32 abilityDataGlobalHashCode; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::AbilityRegistryInfo*>* abilityRegistryInfos; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _abilityRegistryNames; // 0x348
		::Il2CppArray<::Foundation::AssetPath>* dynamicObjectRegistryPathes; // 0x350
		::Il2CppArray<::Foundation::AssetPath>* logicMovementDataPathes; // 0x358
		::Il2CppArray<::Foundation::AssetPath>* logicRotationDataPathes; // 0x360
		::Il2CppArray<::Foundation::AssetPath>* animationCurveLibraryPaths; // 0x368
		::Il2CppArray<::Foundation::AssetPath>* timelineDataPathes; // 0x370
		::Il2CppArray<::Foundation::AssetPath>* timelineDataExtraPathes; // 0x378
		::Il2CppArray<::Foundation::AssetPath>* languageVideoDataPaths; // 0x380
		::Il2CppArray<::Foundation::AssetPath>* noiseDataPathes; // 0x388
		::Il2CppArray<::Foundation::AssetPath>* cameraScreenOffsetPathes; // 0x390
		::Il2CppArray<::Foundation::AssetPath>* cameraShakePathes; // 0x398
		::Il2CppArray<::Foundation::AssetPath>* cameraZoomPathes; // 0x3A0
		::Il2CppArray<::Foundation::AssetPath>* cameraStretchPathes; // 0x3A8
		::Il2CppArray<::Foundation::AssetPath>* cameraLockTargetPathes; // 0x3B0
		::Il2CppArray<::Foundation::AssetPath>* cameraCutScenePathes; // 0x3B8
		::Il2CppArray<::Foundation::AssetPath>* cameraCutsceneGroupPathes; // 0x3C0
		::Il2CppArray<::Foundation::AssetPath>* lockTargetPathes; // 0x3C8
		::Il2CppArray<::Foundation::AssetPath>* entitySkillPathes; // 0x3D0
		::Il2CppArray<::Foundation::AssetPath>* interactEntryPathes; // 0x3D8
		::Il2CppArray<::Foundation::AssetPath>* sharedAnimEventsPathes; // 0x3E0
		::Il2CppArray<::Foundation::AssetPath>* commonAnimEventsPathes; // 0x3E8
		::Il2CppArray<::Foundation::AssetPath>* timeSlowPathes; // 0x3F0
		::Il2CppArray<::Foundation::AssetPath>* dropItemEffectPathes; // 0x3F8
		::Il2CppArray<::Foundation::AssetPath>* levelDesignAssetPathes; // 0x400
		::Il2CppArray<::Foundation::AssetPath>* levelGlobalAIPathes; // 0x408
		::Il2CppArray<::Foundation::AssetPath>* levelGlobalCounterstrokePathes; // 0x410
		::Il2CppArray<::Foundation::AssetPath>* levelReviveConfigPathes; // 0x418
		::Il2CppArray<::Foundation::AssetPath>* hitDataPathes; // 0x420
		::Il2CppArray<::Foundation::AssetPath>* glitchEffectPathes; // 0x428
		::Il2CppArray<::Foundation::AssetPath>* vignettePathes; // 0x430
		::Il2CppArray<::Foundation::AssetPath>* radialBlurPathes; // 0x438
		::Il2CppArray<::Foundation::AssetPath>* gaussianBlurPathes; // 0x440
		::Il2CppArray<::Foundation::AssetPath>* depthOfFieldPathes; // 0x448
		::Il2CppArray<::Foundation::AssetPath>* screenEffectsPathes; // 0x450
		::Il2CppArray<::Foundation::AssetPath>* lensDistortionPathes; // 0x458
		::Il2CppArray<::Foundation::AssetPath>* chromaticAberrationPathes; // 0x460
		::Il2CppArray<::Foundation::AssetPath>* runStatePathes; // 0x468
		::Il2CppArray<::Foundation::AssetPath>* effectLODDataConfigPaths; // 0x470
		::Il2CppArray<::Foundation::AssetPath>* colorAdjustmentsPathes; // 0x478
		::Il2CppArray<::Foundation::AssetPath>* fXColorCorrectionsPathes; // 0x480
		::Il2CppArray<::Foundation::AssetPath>* filmGrainPathes; // 0x488
		::Il2CppArray<::Foundation::AssetPath>* avatarColorCorrectionsPathes; // 0x490
		::Il2CppArray<::Foundation::AssetPath>* materialPropertyModifierPathes; // 0x498
		::Il2CppArray<::Foundation::AssetPath>* materialPropertyModifierPathes_New; // 0x4A0
		::Il2CppArray<::Foundation::AssetPath>* araTrailConfigPathes; // 0x4A8
		::Il2CppArray<::Foundation::AssetPath>* flowCanvasConfigPathes; // 0x4B0
		::Il2CppArray<::Foundation::AssetPath>* teamEntityConfigPathes; // 0x4B8
		::Il2CppArray<::Foundation::AssetPath>* uiAvatarShowSettingsPaths; // 0x4C0
		::Il2CppArray<::Foundation::AssetPath>* uiBuddyShowSettingsPaths; // 0x4C8
		::Il2CppArray<::Foundation::AssetPath>* galGameAvatarShowSettingsPaths; // 0x4D0
		::Il2CppArray<::Foundation::AssetPath>* scriptableAnimationV2Paths; // 0x4D8
		::Il2CppArray<::Foundation::AssetPath>* gamepadRumblePaths; // 0x4E0
		::Il2CppArray<::Foundation::AssetPath>* realtimeQTEConfigPaths; // 0x4E8
		::Il2CppArray<::Foundation::AssetPath>* overShoulderCameraConfigPaths; // 0x4F0
		::Il2CppArray<::Foundation::AssetPath>* avatarLayoutCameraConfigPaths; // 0x4F8
		::Il2CppArray<::Foundation::AssetPath>* globalSoundActionPaths; // 0x500
		::Il2CppArray<::Foundation::AssetPath>* npcCrowdJsonPaths; // 0x508
		::Il2CppArray<::Foundation::AssetPath>* npcCrowdAssetSoPaths; // 0x510
		::Il2CppArray<::Foundation::AssetPath>* npcCrowdAnimationSoPaths; // 0x518
		::Il2CppArray<::Foundation::AssetPath>* textureConfigPaths; // 0x520
		::Il2CppArray<::Foundation::AssetPath>* cameraOverrideTrackPaths; // 0x528
		::Il2CppArray<::Foundation::AssetPath>* cameraBangbooAdjustmentPaths; // 0x530
		::Il2CppArray<::Foundation::AssetPath>* chessboardPluginRegistryPathes; // 0x538
		::Il2CppArray<::Foundation::AssetPath>* chessboardEntityRegistryPaths; // 0x540
		::Il2CppArray<::Foundation::AssetPath>* dynamicOverrideWeatherPaths; // 0x548
		::Il2CppArray<::Foundation::AssetPath>* bigSceneCommonSkillPaths; // 0x550
		::Il2CppArray<::Foundation::AssetPath>* bigSceneGroupEntityPriorityPaths; // 0x558
		::Il2CppArray<::Foundation::AssetPath>* dynamicCheckTreePaths; // 0x560
		::Il2CppArray<::MoleMole::GraphRegistryInfo*>* graphBytesRegistryPaths; // 0x568
		::Il2CppArray<::Foundation::AssetPath>* LevelGroupConfigRegistryPaths; // 0x570
		::Il2CppArray<::Foundation::AssetPath>* GroupChallengeConfigRegistryPaths; // 0x578
		::Il2CppArray<::Foundation::AssetPath>* LevelWeatherPaths; // 0x580
		::Il2CppArray<::Foundation::AssetPath>* CinemaSingleBeatMapConfigPath; // 0x588
		::Il2CppArray<::Foundation::AssetPath>* SurfGameItemDataConfigPaths; // 0x590
		::Il2CppArray<::Foundation::AssetPath>* GraphInteractConfigPaths; // 0x598
		::Il2CppArray<::Foundation::AssetPath>* AbilityTargetDataConfigPaths; // 0x5A0
		::Il2CppArray<::Foundation::AssetPath>* simpleMoveConfigPaths; // 0x5A8
		::Il2CppArray<::Foundation::AssetPath>* SlideRopeCameraConfigPaths; // 0x5B0
		::Il2CppArray<::Foundation::AssetPath>* SlideRopeLockCameraConfigPaths; // 0x5B8
		::Il2CppArray<::Foundation::AssetPath>* SlideRopePatternConfigPaths; // 0x5C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOCONFIGMETACONFIG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* get_abilityRegistryNames()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOCONFIGMETACONFIG_GET_ABILITYREGISTRYNAMES_OFFSET))(this);
		}

		::System::Void BuildAutoMetaConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOCONFIGMETACONFIG_BUILDAUTOMETACONFIG_OFFSET))(this);
		}

		::System::Void BuildAbilityConfigInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOCONFIGMETACONFIG_BUILDABILITYCONFIGINFO_OFFSET))(this);
		}

		::System::Void RefreshGameStartScriptObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOCONFIGMETACONFIG_REFRESHGAMESTARTSCRIPTOBJECTS_OFFSET))(this);
		}
	};
}
