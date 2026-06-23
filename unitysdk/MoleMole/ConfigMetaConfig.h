#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGMETACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4860)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMetaConfig_TypeDefinitionIndex = 62387;

	class ConfigMetaConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* commonDitherConfigsPath; // 0x58
		::System::String* characterCommonDatasConfigPathes; // 0x60
		::System::String* mapCameraConfigPathe; // 0x68
		::System::String* cameraStoryPath; // 0x70
		::System::String* cameraPitchPolarPath; // 0x78
		::System::String* miscDataPath; // 0x80
		::System::String* levelConfigPath; // 0x88
		::System::String* triggerCachePath; // 0x90
		::System::String* attachmentsPath; // 0x98
		::System::String* campTypePath; // 0xA0
		::System::String* abilityTargetConfigPath; // 0xA8
		::System::String* bulletEmitterTracingConfigPath; // 0xB0
		::System::String* joystickOrderConfigPath; // 0xB8
		::System::String* targetValueConfigPath; // 0xC0
		::System::String* hollowCameraConfigPath; // 0xC8
		::System::String* hollowChessboardConfigPath; // 0xD0
		::System::String* hollowChessboardEntityBehaviorConfigPath; // 0xD8
		::System::String* hollownpcConfigPath; // 0xE0
		::System::String* hollowChessboardParticleConfigPath; // 0xE8
		::System::String* hollowChessboardInteractConfigPath; // 0xF0
		::System::String* hollowChessboardLightConfigPath; // 0xF8
		::System::String* hollowChessboardTextureTagListPath; // 0x100
		::System::String* hollowChessboardTextureTagsDataPath; // 0x108
		::System::String* hollowPlayerConfigPath; // 0x110
		::System::String* hollowTimeRewindConfigPath; // 0x118
		::System::String* cityHollowMapConfigPath; // 0x120
		::System::String* UIAvatarShowConfigPath; // 0x128
		::System::String* UICommonConfigPath; // 0x130
		::System::String* UISoundConfigPath; // 0x138
		::System::String* UIAdaptConfigPath; // 0x140
		::System::String* UICameraConfigPath; // 0x148
		::System::String* ScriptableAnimSpecialNumConfigPath; // 0x150
		::System::String* prdConfigPath; // 0x158
		::System::String* animatorShortHashNameConfigPath; // 0x160
		::System::String* GalGameAvatarShowConfigPath; // 0x168
		::System::String* ScenePerformConfigPath; // 0x170
		::System::String* LevelEndPerformConfigPath; // 0x178
		::System::String* StunBuffHitDataConfigPath; // 0x180
		::System::String* DamageStaggerLevelConfigPath; // 0x188
		::System::String* animatorStateLengthConfigPath; // 0x190
		::System::String* blackCurtainConfigPath; // 0x198
		::System::String* initCharacterPerformPath; // 0x1A0
		::System::String* multiVersionDiffConfigPath; // 0x1A8
		::System::String* ExQTEConfigPath; // 0x1B0
		::System::String* SystemSettingPath; // 0x1B8
		::System::String* GraphicSettingPath; // 0x1C0
		::System::String* InputSettingPath; // 0x1C8
		::System::String* KeyboardBindingSettingPath; // 0x1D0
		::System::String* GamepadBindingSettingPath; // 0x1D8
		::System::String* SoundSettingPath; // 0x1E0
		::System::String* LanguageSettingPath; // 0x1E8
		::System::String* AccountSettingPath; // 0x1F0
		::System::String* OtherSettingPath; // 0x1F8
		::System::String* VideoSettingPath; // 0x200
		::System::String* footPrintConfigsPath; // 0x208
		::System::String* UIStoreCameraConfigPath; // 0x210
		::System::String* sceneSoundConfigPath; // 0x218
		::System::String* MianCityObjectConfigPath; // 0x220
		::System::String* TextureSheetConfigPath; // 0x228
		::System::String* RhythmMoveBeatMapConfigPath; // 0x230
		::System::String* ChessEntityConfigPath; // 0x238
		::System::String* UIFontConfigPath; // 0x240
		::System::String* GlobalColorConfigPath; // 0x248
		::System::String* LockTargetMiscPath; // 0x250
		::System::String* AttackDistanceAttenuationPath; // 0x258
		::System::String* ComicStyleConfigPath; // 0x260
		::System::String* UnderlyingAnimEventsPath; // 0x268
		::System::String* SwitchPhaseHitDataConfigPath; // 0x270
		::System::String* ChessStateMachineConfigPath; // 0x278
		::System::String* ChessSMSharedNodesConfigPath; // 0x280
		::System::String* ChessSmParamsConfigPath; // 0x288
		::System::String* ChessSMPathMapPath; // 0x290
		::System::String* ghostEffectsPath; // 0x298
		::System::String* animatorBeHitPrioritiesPath; // 0x2A0
		::System::String* TeamInspireZoneConfigPath; // 0x2A8
		::System::String* UIVirtualJoystickConfigPath; // 0x2B0
		::System::String* MaterialKeywordConditionsPath; // 0x2B8
		::System::String* TrainingRoomConfigPath; // 0x2C0
		::System::String* BuffMiscPath; // 0x2C8
		::System::String* SyncDevConfigDataPath; // 0x2D0
		::System::String* SpecailEffectHitDataConfigPath; // 0x2D8
		::System::String* DynamicBoneConfigMapPath; // 0x2E0
		::System::String* HollowEntityLayerMaskConfigPath; // 0x2E8
		::System::String* GroupVideoConfigPath; // 0x2F0
		::System::String* GachaPerformancePath; // 0x2F8
		::System::String* hollowCampTypePath; // 0x300
		::System::String* soundWavePath; // 0x308
		::System::String* UIPortraitConfigPath; // 0x310
		::System::String* UIGachaPortraitConfigPath; // 0x318
		::System::String* LevelResultPerformsPath; // 0x320
		::System::String* DamageTextPrefabPath; // 0x328
		::System::String* GachaPerformanceLightsPath; // 0x330
		::System::String* levelPerformConfigPath; // 0x338
		::System::String* cameraOverrideTrackConfigPath; // 0x340
		::System::String* languageVideoConfigPath; // 0x348
		::System::String* characterAimModeConfigPath; // 0x350
		::System::String* audioBasePathConfigPath; // 0x358
		::System::String* levelAddonConfigPath; // 0x360
		::System::String* weaponConfigPath; // 0x368
		::System::String* EffectPatternInfoConfigPath; // 0x370
		::System::String* GachaPerformanceEffectsPath; // 0x378
		::System::String* multiplayerConfigPath; // 0x380
		::System::String* UIConfigScriptsPath; // 0x388
		::Il2CppArray<::System::String*>* statisConfigPaths; // 0x390
		::System::String* MaterialPropertyExclusivityPath; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMETACONFIG__CTOR_OFFSET))(this);
		}
	};
}
