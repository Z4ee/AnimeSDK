#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_ConfigLevelResultPerformEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LoseEffectAnimatorButtonTrigger.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingFogEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingScreenEffect.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_AspectWH.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_04E07F842ECC3B8E;
namespace MoleMole::Config { class ConfigLevelResultPerform; }
namespace MoleMole::ExitPerform { class ExitPerformEventConfig; }
namespace MoleMole::Utils::CameraSequence { class CameraSequence_VideoItem_ComposeObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_DEBUGLEVELEND_OFFSET UNITYSDK_OFFSET(0xE96D4C0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_DUMP_OFFSET UNITYSDK_OFFSET(0xE96CA90)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_GETRATINGEFFECTPREFAB_OFFSET UNITYSDK_OFFSET(0xE96D360)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_GET_OPENLEVELRESULTPERFORM_OFFSET UNITYSDK_OFFSET(0xE96CA80)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_GET_PLAYTYPEMAP_OFFSET UNITYSDK_OFFSET(0xE96CCF0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0xE96D570)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS__DEBUGLEVELEND_B__59_0_OFFSET UNITYSDK_OFFSET(0xE96D6A0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS__OPENWINDOW_OFFSET UNITYSDK_OFFSET(0xE96D480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_TypeDefinitionIndex = 65845;

	class ConfigLevelResultPerforms : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet__PlayTypeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelResultPerforms_TypeDefinitionIndex)->GetStaticField(0x4AEF0);
		}
		// static const ::System::String* TEXT_EFFECT_KEY; // 0x0
		// static const ::System::String* TEXT_EFFECT_ADAPT_KEY; // 0x0
		// static const ::System::String* MONSTER_EFFECT_KEY; // 0x0
		// static const ::System::String* SCREEN_EFFECT_KEY; // 0x0
		// static const ::System::String* RATING_EFFECT_KEY; // 0x0
		// static const ::System::String* LEVEL_RESULT_KEY; // 0x0
		// static const ::System::String* LEEVL_PLAYTYPE_MAP; // 0x0
		// static const ::System::String* LEVEL_COLOR_CORRECT_KEY; // 0x0
		// static const ::System::String* LEVEL_END_VIDEO_KEY; // 0x0
		// static const ::System::String* LEVEL_END_UI_VIDEO_KEY; // 0x0
		// static const ::System::String* LEVEL_END_TESTKEY; // 0x0
		// static const ::System::String* LEVEL_END_OTHER_KEY; // 0x0
		// static const ::System::String* FAILED_RESULT_PERFORM_KEY; // 0x0
		// static const ::System::String* FAILED_RESULT_PERFORM_TRIGGER_KEY; // 0x0
		// static const ::System::String* FAILED_MP_RESULT_PERFORM_KEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::ELocalPlayType>* ConfigKeyMap; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::ELocalPlayType, ::MoleMole::Config::ConfigLevelResultPerform*>* Configs; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>* RatingTypeEffect; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>* CustomRatingTypeEffect; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>* ratingEffectPrefabs; // 0x78
		::System::String* AttachCameraName; // 0x80
		::System::Boolean IsOpenRotate; // 0x88
		::UnityEngine::Vector3 RatingTypeEffectOffset; // 0x8C
		::UnityEngine::Vector3 RatingTypeEffectScale; // 0x98
		::MoleMole::MonoEffectPluginAttachToCamera_AspectWH RatingTypeEffectBaseAspect; // 0xA4
		::System::Single RatingTypeEffectFov; // 0xB0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>* RatingMonsterTypeEffect; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::System::String*>*>* CustomRatingMonsterTypeEffect; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>* RatingScreenEffects; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>*>* CustomRatingScreenEffects; // 0xD0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>* RatingFogEffects; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Level::RatingType, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>*>* CustomRatingFogEffects; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*>* ExtraRatingScreenEffects; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*>* ExtraFogEffects; // 0xF0
		::System::Single effectColorDuration; // 0xF8
		::System::Boolean effectColorDebug; // 0xFC
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>* warmupVideos; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeObject*>* playVideos; // 0x108
		::System::String* BuddyGlitchVideoPath; // 0x110
		::System::Single uiDelayOpenAfterStartVideo; // 0x118
		::MoleMole::ExitPerform::ExitPerformEventConfig* performEventConfig; // 0x120
		::System::String* endAbilityName; // 0x128
		::System::Single nonBattleLevelEndIdleDuration; // 0x130
		::System::Single shortcutLevelEndBlackCurtainDuration; // 0x134
		::System::Int32 ScoreKTag; // 0x138
		::System::Int32 createType; // 0x13C
		::System::Boolean forceRating; // 0x140
		::MoleMole::Level::RatingType debugRatingType; // 0x144
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType; // 0x148
		::System::Boolean OpenDebugPerform; // 0x14C
		::MoleMole::ELocalPlayType DebugPlayType; // 0x150
		::System::Boolean ForceClose4Curtain; // 0x154
		::System::Single WipeOutCountDownTime; // 0x158
		::System::Single WipeOutCountDownStartTime; // 0x15C
		::System::String* WipeOutCountDownEffect; // 0x160
		::System::Single WipeOutCountDownEffectDestroyTime; // 0x168
		::System::String* WipeOutDitherKey; // 0x170
		::System::String* WipeOutTimeSlowCurveKey; // 0x178
		::System::Single ReviveDelayTime; // 0x180
		::System::Single AutoGiveUpDelayTime; // 0x184
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* WipeOutScreenEffects; // 0x188
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* WipeOutFogEffects; // 0x190
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* WipeOutEffects; // 0x198
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* ReviveScreenEffects; // 0x1A0
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* ReviveFogEffects; // 0x1A8
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* ReviveEffects; // 0x1B0
		::System::Single audioStartTime; // 0x1B8
		::System::Int32 countDownAudioId; // 0x1BC
		::System::String* countDownRtpcKey; // 0x1C0
		::System::Int32 reviveSuccessAudioId; // 0x1C8
		::System::Int32 reviveFailedAudioId; // 0x1CC
		::System::String* failedStartSoundActionKey; // 0x1D0
		::System::String* failedEndSoundActionKey; // 0x1D8
		::System::String* reduceDifficultyEffectKey; // 0x1E0
		::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig cameraSequenceConfig; // 0x1E8
		::System::Boolean IsOpenBlackCurtainAfterFadeOutGame; // 0x200
		::System::Boolean IsExitLostCameraWhenRetreat; // 0x201
		::System::Boolean IsExitLostCameraWhenRestart; // 0x202
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_LoseEffectAnimatorButtonTrigger>* buttonTriggers; // 0x208
		::System::Single MpReviveFadeOutTime; // 0x210
		::System::Single MpReviveBlackScreenTime; // 0x214
		::System::Single MpReviveFadeInTime; // 0x218
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* MpReviveEffects; // 0x220
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* MpReviveScreenEffects; // 0x228
		::Il2CppArray<::System::String*>* MpReviveMaterials; // 0x230
		::System::String* MPfailedStartSoundActionKey; // 0x238
		::System::String* MPfailedEndSoundActionKey; // 0x240
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* MpDeathEffects; // 0x248
		::System::String* MpReplayUIEffect; // 0x250
		::System::Single MpReplayUIDelay; // 0x258
		::System::String* MpReplayUIReviveTrigger; // 0x260
		::System::String* MpReplayUIExitTrigger; // 0x268
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* MpDeathScreenEffects; // 0x270
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelResultPerforms_ConfigLevelResultPerformEffect>* MpLevelWipeOutEffects; // 0x278
		::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* MpLevelResultScreenEffects; // 0x280
		::System::Single WipeOutEnterDuration; // 0x288
		::System::Single WipeOutOpenLevelResultDelay; // 0x28C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_OpenLevelResultPerform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_GET_OPENLEVELRESULTPERFORM_OFFSET))(this);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_DUMP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* get_PlayTypeMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_GET_PLAYTYPEMAP_OFFSET))(this);
		}

		::System::Boolean GetRatingEffectPrefab(::MoleMole::Level::RatingType ratingType, ::System::String*& ratingEffPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_GETRATINGEFFECTPREFAB_OFFSET))(this, ratingType, ratingEffPath);
		}

		::System::Void _OpenWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS__OPENWINDOW_OFFSET))(this);
		}

		::System::Void DebugLevelEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_DEBUGLEVELEND_OFFSET))(this);
		}

		::System::Void _DebugLevelEnd_b__59_0(::Class_2_04E07F842ECC3B8E* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_04E07F842ECC3B8E*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS__DEBUGLEVELEND_B__59_0_OFFSET))(this, evt);
		}
	};
}
