#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_NEWCONFIGMETACONFIG_GET_GRAPHICSETTINGPATH_OFFSET UNITYSDK_OFFSET(0x13EAF560)
#define MOLEMOLE_NEWCONFIGMETACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAF5D0)

namespace MoleMole
{
	inline static constexpr unsigned int NewConfigMetaConfig_TypeDefinitionIndex = 61713;

	class NewConfigMetaConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Foundation::AssetPath commonDitherConfigsPath; // 0x58
		::Foundation::AssetPath characterCommonDatasConfigPathes; // 0x68
		::Foundation::AssetPath flowCanvasPathes; // 0x78
		::Foundation::AssetPath cameraStoryPath; // 0x88
		::Foundation::AssetPath cameraPitchPolarPath; // 0x98
		::Foundation::AssetPath miscDataPath; // 0xA8
		::Foundation::AssetPath levelConfigPath; // 0xB8
		::Foundation::AssetPath triggerCachePath; // 0xC8
		::Foundation::AssetPath attachmentsPath; // 0xD8
		::Foundation::AssetPath campTypePath; // 0xE8
		::Foundation::AssetPath bulletEmitterTracingConfigPath; // 0xF8
		::Foundation::AssetPath joystickOrderConfigPath; // 0x108
		::Foundation::AssetPath targetValueConfigPath; // 0x118
		::Foundation::AssetPath hollowCameraConfigPath; // 0x128
		::Foundation::AssetPath hollowChessboardConfigPath; // 0x138
		::Foundation::AssetPath hollowChessboardEntityBehaviorConfigPath; // 0x148
		::Foundation::AssetPath hollownpcConfigPath; // 0x158
		::Foundation::AssetPath hollowChessboardParticleConfigPath; // 0x168
		::Foundation::AssetPath hollowChessboardInteractConfigPath; // 0x178
		::Foundation::AssetPath hollowChessboardLightConfigPath; // 0x188
		::Foundation::AssetPath hollowChessboardTextureTagsDataPath; // 0x198
		::Foundation::AssetPath hollowPlayerConfigPath; // 0x1A8
		::Foundation::AssetPath hollowTimeRewindConfigPath; // 0x1B8
		::Foundation::AssetPath cityHollowMapConfigPath; // 0x1C8
		::Foundation::AssetPath UIAvatarShowConfigPath; // 0x1D8
		::Foundation::AssetPath NewConfigUICommonPath; // 0x1E8
		::Foundation::AssetPath UISoundConfigPath; // 0x1F8
		::Foundation::AssetPath UIAdaptConfigPath; // 0x208
		::Foundation::AssetPath UICameraConfigPath; // 0x218
		::Foundation::AssetPath UILightConfigPath; // 0x228
		::Foundation::AssetPath ScriptableAnimSpecialNumConfigPath; // 0x238
		::Foundation::AssetPath prdConfigPath; // 0x248
		::Foundation::AssetPath animatorShortHashNameConfigPath; // 0x258
		::Foundation::AssetPath GalGameAvatarShowConfigPath; // 0x268
		::Foundation::AssetPath ScenePerformConfigPath; // 0x278
		::Foundation::AssetPath LevelEndPerformConfigPath; // 0x288
		::Foundation::AssetPath DamageStaggerLevelConfigPath; // 0x298
		::Foundation::AssetPath animatorStateLengthConfigPath; // 0x2A8
		::Foundation::AssetPath blackCurtainConfigPath; // 0x2B8
		::Foundation::AssetPath initCharacterPerformPath; // 0x2C8
		::Foundation::AssetPath multiVersionDiffConfigPath; // 0x2D8
		::Foundation::AssetPath ExQTEConfigPath; // 0x2E8
		::Foundation::AssetPath SystemSettingPath; // 0x2F8
		::Foundation::AssetPath GraphicSettingPath_Android; // 0x308
		::Foundation::AssetPath GraphicSettingPath_IOS; // 0x318
		::Foundation::AssetPath GraphicSettingPath_PC; // 0x328
		::Foundation::AssetPath GraphicSettingPath_PC_DX12; // 0x338
		::Foundation::AssetPath GraphicSettingPath_PS; // 0x348
		::Foundation::AssetPath GraphicSettingPath_Xbox; // 0x358
		::Foundation::AssetPath InputSettingPath; // 0x368
		::Foundation::AssetPath KeyboardBindingSettingPath; // 0x378
		::Foundation::AssetPath GamepadBindingSettingPath; // 0x388
		::Foundation::AssetPath SoundSettingPath; // 0x398
		::Foundation::AssetPath LanguageSettingPath; // 0x3A8
		::Foundation::AssetPath AccountSettingPath; // 0x3B8
		::Foundation::AssetPath OtherSettingPath; // 0x3C8
		::Foundation::AssetPath CloudGraphicSettingPath; // 0x3D8
		::Foundation::AssetPath SummerActivitySettingPath; // 0x3E8
		::Foundation::AssetPath RhythmActivitySettingPath; // 0x3F8
		::Foundation::AssetPath MonsterFantasyActivitySettingPath; // 0x408
		::Foundation::AssetPath VideoSettingPath; // 0x418
		::Foundation::AssetPath CoopVFXSettingPath; // 0x428
		::Foundation::AssetPath CoopVFXConfigPath; // 0x438
		::Foundation::AssetPath HouseRhythmSettingPath; // 0x448
		::Foundation::AssetPath footPrintConfigsPath; // 0x458
		::Foundation::AssetPath UIStoreCameraConfigPath; // 0x468
		::Foundation::AssetPath sceneSoundConfigPath; // 0x478
		::Foundation::AssetPath MianCityObjectConfigPath; // 0x488
		::System::String* TextureSheetConfigPath; // 0x498
		::Foundation::AssetPath SkinMapAnimationClipConfigPath; // 0x4A0
		::Foundation::AssetPath RhythmMoveBeatMapConfigPath; // 0x4B0
		::Foundation::AssetPath ChessEntityConfigPath; // 0x4C0
		::Foundation::AssetPath UIFontConfigPath; // 0x4D0
		::Foundation::AssetPath UIFontSizeConfigPath; // 0x4E0
		::Foundation::AssetPath GlobalColorConfigPath; // 0x4F0
		::Foundation::AssetPath MPPlaySettingPath; // 0x500
		::Foundation::AssetPath LockTargetMiscPath; // 0x510
		::Foundation::AssetPath AttackDistanceAttenuationPath; // 0x520
		::Foundation::AssetPath ComicStyleConfigPath; // 0x530
		::Foundation::AssetPath UnderlyingAnimEventsPath; // 0x540
		::System::String* ChessStateMachineConfigPath; // 0x550
		::System::String* ChessSMSharedNodesConfigPath; // 0x558
		::Foundation::AssetPath ChessSmParamsConfigPath; // 0x560
		::Foundation::AssetPath ChessSMPathMapPath; // 0x570
		::Foundation::AssetPath ghostEffectsPath; // 0x580
		::Foundation::AssetPath animatorBeHitPrioritiesPath; // 0x590
		::Foundation::AssetPath TeamInspireZoneConfigPath; // 0x5A0
		::Foundation::AssetPath SideScrollingLevelConfigPath; // 0x5B0
		::Foundation::AssetPath FeverConfigPath; // 0x5C0
		::Foundation::AssetPath UIVirtualJoystickConfigPath; // 0x5D0
		::Foundation::AssetPath MaterialKeywordConditionsPath; // 0x5E0
		::Foundation::AssetPath TrainingRoomConfigPath; // 0x5F0
		::Foundation::AssetPath BuffMiscPath; // 0x600
		::Foundation::AssetPath GamifiedPropConfigPath; // 0x610
		::Foundation::AssetPath ConfigEtherEyesPath; // 0x620
		::Foundation::AssetPath ConfigZipLinePath; // 0x630
		::Foundation::AssetPath ConfigVentCrawlPath; // 0x640
		::Foundation::AssetPath ConfigLinkZonePath; // 0x650
		::Foundation::AssetPath ConfigFixedCameraEntryPath; // 0x660
		::Foundation::AssetPath ConfigAvatarLayoutCameraMiscPath; // 0x670
		::Foundation::AssetPath SyncDevConfigDataPath; // 0x680
		::Foundation::AssetPath SpecailEffectHitDataConfigPath; // 0x690
		::Foundation::AssetPath DynamicBoneConfigMapPath; // 0x6A0
		::Foundation::AssetPath HollowEntityLayerMaskConfigPath; // 0x6B0
		::Foundation::AssetPath GroupVideoConfigPath; // 0x6C0
		::Foundation::AssetPath GachaPerformancePath; // 0x6D0
		::Foundation::AssetPath hollowCampTypePath; // 0x6E0
		::Foundation::AssetPath soundWavePath; // 0x6F0
		::Foundation::AssetPath soundWavePath_En; // 0x700
		::Foundation::AssetPath soundWavePath_Jp; // 0x710
		::Foundation::AssetPath soundWavePath_Kr; // 0x720
		::Foundation::AssetPath soundWavePath_Event; // 0x730
		::Foundation::AssetPath UIPortraitConfigPath; // 0x740
		::Foundation::AssetPath UIGachaPortraitConfigPath; // 0x750
		::Foundation::AssetPath LevelResultPerformsPath; // 0x760
		::Foundation::AssetPath DamageTextPrefabPath; // 0x770
		::Foundation::AssetPath GachaPerformanceLightsPath; // 0x780
		::Foundation::AssetPath levelPerformConfigPath; // 0x790
		::Foundation::AssetPath languageVideoConfigPath; // 0x7A0
		::Foundation::AssetPath LevelShootGameConfigPath; // 0x7B0
		::Foundation::AssetPath characterAimModeConfigPath; // 0x7C0
		::Foundation::AssetPath levelAddonConfigPath; // 0x7D0
		::Foundation::AssetPath weaponConfigPath; // 0x7E0
		::Foundation::AssetPath uiAvatarConfigPath; // 0x7F0
		::Foundation::AssetPath EffectPatternInfoConfigPath; // 0x800
		::Foundation::AssetPath GachaPerformanceEffectsPath; // 0x810
		::Foundation::AssetPath multiplayerConfigPath; // 0x820
		::Foundation::AssetPath UIConfigScriptsPath; // 0x830
		::Il2CppArray<::Foundation::AssetPath>* statisConfigPaths; // 0x840
		::Foundation::AssetPath MaterialPropertyExclusivityPath; // 0x848
		::Foundation::AssetPath ConfigHollowChessboardAtmosphere; // 0x858
		::Foundation::AssetPath EntityAttackEffectNamesPath; // 0x868
		::Foundation::AssetPath ConfigUIBuddySettingPath; // 0x878
		::Foundation::AssetPath ConfigMaterialPropertySettingsPath; // 0x888
		::Foundation::AssetPath ConfigBuddyMiscPath; // 0x898
		::Foundation::AssetPath ConfigIndicatedLightsPath; // 0x8A8
		::Foundation::AssetPath ConfigTagLibPath; // 0x8B8
		::Foundation::AssetPath ConfigWindFieldPath; // 0x8C8
		::Foundation::AssetPath ConfigInLevelCustomizedPath; // 0x8D8
		::Foundation::AssetPath ConfigSkillTypeToAttackTagsPath; // 0x8E8
		::Foundation::AssetPath ConfigSpecialEffectHitWallPath; // 0x8F8
		::Foundation::AssetPath ConfigAvatarDateTeleportPath; // 0x908
		::Foundation::AssetPath ConfigEnvironmentSound; // 0x918
		::Foundation::AssetPath ConfigEffectSound; // 0x928
		::Foundation::AssetPath ConfigLevelSound; // 0x938
		::Foundation::AssetPath ConfigDebugSound; // 0x948
		::Foundation::AssetPath ConfigRichtapSound; // 0x958
		::Foundation::AssetPath ConfigVoiceToEvent; // 0x968
		::Foundation::AssetPath ConfigUIFishPath; // 0x978
		::Foundation::AssetPath ConfigUIFishV2Path; // 0x988
		::Foundation::AssetPath ConfigBattlePhotoActivityPath; // 0x998
		::Foundation::AssetPath ConfigGamepadTriggerEffectPath; // 0x9A8
		::Foundation::AssetPath MarcelConfigPath; // 0x9B8
		::Foundation::AssetPath ConfigShootingGroundPath; // 0x9C8
		::Foundation::AssetPath ConfigSurfMiniGamePath; // 0x9D8
		::Foundation::AssetPath ConfigFlowerShopActivityPath; // 0x9E8
		::Foundation::AssetPath UIMainPageBuddiesShowConfigPath; // 0x9F8
		::Foundation::AssetPath UIMainPageSkinShowConfigPath; // 0xA08
		::Foundation::AssetPath UIMainPageShowConfigPath; // 0xA18
		::Foundation::AssetPath AvatarScriptAndAnimOverrideDataPath; // 0xA28
		::Foundation::AssetPath ConfigNpcPrototypePath; // 0xA38
		::Foundation::AssetPath ConfigUINewMapPath; // 0xA48
		::Foundation::AssetPath ConfigPlayerAccessoryPath; // 0xA58
		::Foundation::AssetPath MonsterAlertsPath; // 0xA68
		::Foundation::AssetPath DitherConfigSeparatePath; // 0xA78
		::Foundation::AssetPath ConfigTempleLevelUpPath; // 0xA88
		::Foundation::AssetPath SummerEventMonsterSpawnConfigPath; // 0xA98
		::Foundation::AssetPath MonsterMappingConfigPath; // 0xAA8
		::Foundation::AssetPath MonsterSpecialIdleConfigPath; // 0xAB8
		::Foundation::AssetPath SlidingConfigPath; // 0xAC8
		::Foundation::AssetPath MovingWallConfigPath; // 0xAD8
		::Foundation::AssetPath HackerDroneConfigPath; // 0xAE8
		::Foundation::AssetPath GoalPathConfigPath; // 0xAF8
		::Foundation::AssetPath SummerEventShootingGameplayConfigPath; // 0xB08
		::Foundation::AssetPath ConfigPlayerAccessoryEffectDataPath; // 0xB18
		::Foundation::AssetPath triDiceOracleConfigPath; // 0xB28
		::Foundation::AssetPath ConfigViewObjectEntityDitherPath; // 0xB38
		::Foundation::AssetPath ConfigViewObjectMiscPath; // 0xB48
		::Foundation::AssetPath ConfigSkinPreviewPath; // 0xB58
		::Foundation::AssetPath ConfigSkinMdbPath; // 0xB68
		::Foundation::AssetPath ConfigAutoBattleAccessoryEffectDataPath; // 0xB78
		::Foundation::AssetPath ConfigActivityRhythmClickBeatmapPath; // 0xB88
		::Foundation::AssetPath ConfigOnGoingTypeDurationDataPath; // 0xB98
		::Foundation::AssetPath ConfigScaleCameraZPath; // 0xBA8
		::Foundation::AssetPath ConfigTurnBaseBattlePath; // 0xBB8
		::Foundation::AssetPath multiplayerConfigUIPath; // 0xBC8
		::Foundation::AssetPath TeleportSelectionsPath; // 0xBD8
		::Foundation::AssetPath ConfigUICoopTeam3dPath; // 0xBE8
		::Foundation::AssetPath DynamicAccessoriesPath; // 0xBF8
		::Foundation::AssetPath ConfigHackPath; // 0xC08
		::Foundation::AssetPath ConfigHackControllablePath; // 0xC18
		::Foundation::AssetPath ConfigTimelineCameraPath; // 0xC28
		::Foundation::AssetPath MaterialPropertyModifierBatchLoadPath; // 0xC38
		::Foundation::AssetPath MaterialPropertyModifierKeyBelongMapPath; // 0xC48
		::Foundation::AssetPath TimelineDataExtraTargetMapPath; // 0xC58
		::Foundation::AssetPath SwitchTeamActivityFilePath; // 0xC68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGMETACONFIG__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath get_GraphicSettingPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWCONFIGMETACONFIG_GET_GRAPHICSETTINGPATH_OFFSET))(this);
		}
	};
}
