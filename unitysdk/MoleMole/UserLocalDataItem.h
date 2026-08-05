#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BallGameRoleLocalData.h"
#include "unitysdk/MoleMole/HollowCameraSerializeField.h"
#include "unitysdk/MoleMole/UserLocalDataItem_SummerTideBeachStageLocalData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityQuestRedDotRecord; }
namespace MoleMole { class BackFlowLocalData; }
namespace MoleMole { class UserLocalDataItem_Class_1_1A520E7D82BE4A56_12; }
namespace MoleMole { class UserLocalDataItem_Class_1_21951B2F61163A78; }
namespace MoleMole { class UserLocalDataItem_Class_1_52129102CB994280; }
namespace MoleMole { class UserLocalDataItem_Class_2_588D89253017A5FC; }
namespace MoleMole { class UserLocalDataItem_ConfigMobileButton; }
namespace MoleMole { class UserLocalDataItem_ConfigMobileButtonGlobal; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPosition; }
namespace MoleMole { class UserLocalDataItem_TempleSimulationRecord; }
namespace MoleMole::MusicGame { class MusicCalibrationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_USERLOCALDATAITEM_GET_CONFIGMOBILEBUTTONS_OFFSET UNITYSDK_OFFSET(0x15B1A1F0)
#define MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x15B19A70)
#define MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x15B192F0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONPANELSWRAPPER_OFFSET UNITYSDK_OFFSET(0x15B19B50)
#define MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONSWRAPPER_OFFSET UNITYSDK_OFFSET(0x15B193D0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x15B19FE0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x15B19860)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_22D1FE63968DB770_OFFSET UNITYSDK_OFFSET(0x15B1ECD0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_4DE866BD1F83957B_OFFSET UNITYSDK_OFFSET(0x15B1E710)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_6AE9950BF37DA5F8_OFFSET UNITYSDK_OFFSET(0x15B1E7B0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_72A9457F9CFEA334_OFFSET UNITYSDK_OFFSET(0x15B1EE80)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_7DC5D7F6533DC9A6_OFFSET UNITYSDK_OFFSET(0x15B1F3D0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8E3D7350119AC13D_OFFSET UNITYSDK_OFFSET(0x15B1EDE0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x15B1E5D0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15B1F390)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B1EDA0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_E8C07C74D3D8F211_OFFSET UNITYSDK_OFFSET(0x15B1E6C0)
#define MOLEMOLE_USERLOCALDATAITEM_SET_CONFIGMOBILEBUTTONS_OFFSET UNITYSDK_OFFSET(0x15B1A200)
#define MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x15B19BE0)
#define MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x15B19460)
#define MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x15B19FF0)
#define MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x15B19870)
#define MOLEMOLE_USERLOCALDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B1D640)
#define MOLEMOLE_USERLOCALDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1A3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_TypeDefinitionIndex = 70341;

	class UserLocalDataItem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>** StaticGet__defaultConfigMobileButtons()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>**)Il2CppClass::FromTypeDefinitionIndex(UserLocalDataItem_TypeDefinitionIndex)->GetStaticField(0x402E0);
		}
		// static const ::System::String* Field_1_8; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BallGameRoleLocalData>* BallGameRoleLocalDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BallGameRoleLatestArchive; // 0x18
		::System::Int32 HardCoreBossBossSelectIndex; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* BMWPictureBookPlayedUnlockAnimTreasureIDs; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* BMWPictureBookPlayedEmptyInAnimTreasureIDs; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* BMWRoleRowPlayedUnlockAnimCharacterIDs; // 0x38
		::System::Boolean SkipSummerTideTreasureShowModel; // 0x40
		::System::Int32 SummerTideTreasureSelectRoleId; // 0x44
		::System::UInt64 playerUID; // 0x48
		::MoleMole::HollowCameraSerializeField HollowCameraField; // 0x50
		::System::Boolean QuestModelChallengeTaskFinish; // 0x9C
		::System::Int32 QuestModelTaskStartTime; // 0xA0
		::System::Collections::Generic::List_1<::System::Int32>* FairyRecordList; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* InteractiveRecords; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* TimeEventUnlockRecords; // 0xB8
		::System::Int32 EquipGachaLocalSelectForgeTab; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EquipGachaLocalTabSelectEquipPartDict; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NotificationBadgeMap; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CustomNotificationRecords; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ExpeditionAreaClickIndexHistory; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ActivityRecords; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::ActivityQuestRedDotRecord*>* ActivityRedDotRecords; // 0xF0
		::MoleMole::BackFlowLocalData* backFlowLocalData; // 0xF8
		::System::String* HDDVideoPlayTime; // 0x100
		::System::UInt32 RepelSlotCountKey; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* AbyssTipRecords; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AbyssGroupCloseToFinishRecords; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Boolean>* AvatarUIDToHintEquipEver; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* AbyssCardSuitSetToTop; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* FishPanelCollectFishItemMap; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* AbyssS2InteractedTemplateIds; // 0x138
		::System::Collections::Generic::List_1<::System::Int32>* NeoGoldenDelNewMechaBuildIDs; // 0x140
		::System::Collections::Generic::List_1<::System::Int32>* NeoGoldenPopedNewList; // 0x148
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* CommonDataBool; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ActivityBattleLevelNew; // 0x158
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ActivityBattleLevelUnlockAnim; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ActivityBattleLevelBestRecord; // 0x168
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* HollowQuestRecords; // 0x170
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* RallyQuestRecords; // 0x178
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ActivityVirusRecords; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* TheGunRecords; // 0x188
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AvatarStoryRecords; // 0x190
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* questPerformResRecords; // 0x198
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* EquipTipRecords; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* YorozuyaDifficutyRecords; // 0x1A8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* YorozuyaOldChessboardRecords; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ActivityQuestDifficutyRecords; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GeneralTipsExcelRemindRecords; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GeneralTipsLastBtnAction; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* GeneralTipsLastBtnActionTimestamp; // 0x1D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* AbyssS2AvatarMissionRecords; // 0x1D8
		::System::Collections::Generic::List_1<::System::Int32>* ArpeggioBlessGroupRecord; // 0x1E0
		::System::Int32 YorozuyaChapterIdex; // 0x1E8
		::System::Collections::Generic::List_1<::System::Int32>* SelectedVHSList; // 0x1F0
		::System::UInt32 VHSPromoterID; // 0x1F8
		::System::Boolean hasSeenMessage; // 0x1FC
		::System::Boolean hasPlayRiduRulePop; // 0x1FD
		::System::UInt32 lastVisitedArcadeActivityID; // 0x200
		::System::UInt32 lastVisitedArcadeScheduleID; // 0x204
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* ambientTriggerDic; // 0x208
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* battlePassRecords; // 0x210
		::System::Boolean performUseAutoPlay; // 0x218
		::System::UInt64 m_lastVisitedAbyssRewardPeriodID; // 0x220
		::System::Collections::Generic::List_1<::System::Int32>* RecordedHeadPortraitIDs; // 0x228
		::System::Boolean IsBigSceneLineUpTutorialDialogShow; // 0x230
		::System::Collections::Generic::List_1<::System::Int32>* RecordedNormalRallyQuestIDs; // 0x238
		::System::Collections::Generic::List_1<::System::Int32>* UnlockedRallyChapterRecords; // 0x240
		::System::Boolean HadalPopup_PrevTag; // 0x248
		::System::Int32 HadalPopup_PrevZoneID; // 0x24C
		::System::Int32 HadalScheduleZoneIDRecord; // 0x250
		::System::Int32 NewHadalScheduleZoneIDRecord; // 0x254
		::System::Collections::Generic::List_1<::System::Int32>* NewBabelTowerID; // 0x258
		::System::Collections::Generic::List_1<::System::Int32>* HadalUnlockZoneAnims; // 0x260
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* HadalUnlockZoneLayersAnims; // 0x268
		::System::Int64 RewardTime; // 0x270
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_Class_1_1A520E7D82BE4A56_12*>* WorldLevelRecords; // 0x278
		::System::Collections::Generic::List_1<::System::Int32>* RecordedPostGirlIDs; // 0x280
		::System::Boolean roleSelectMultiSelectOn; // 0x288
		::System::Boolean roleSelectUpgradeOn; // 0x289
		::System::Boolean AbyssS2IntensifyToggle; // 0x28A
		::System::Boolean BanbooDreamDescDetailToggle; // 0x28B
		::System::Int32 BangbooDreamLastLevel; // 0x28C
		::System::Boolean ExpeditionMultiSelectOn; // 0x290
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* UnlockedCharacterQuestEntryRecords; // 0x298
		::System::Collections::Generic::List_1<::System::Int32>* unlockedPartners; // 0x2A0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedPartnerContacts; // 0x2A8
		::System::Collections::Generic::List_1<::System::UInt32>* recordedUpBangbooItems; // 0x2B0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedMusicList; // 0x2B8
		::System::Collections::Generic::List_1<::System::Int32>* upAvatarIDList; // 0x2C0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* workbenchTrustDegreeHasSeeMaxLevel; // 0x2C8
		::System::Collections::Generic::List_1<::System::Int32>* unlockMonsterCardReadList; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* unlockSuitReadList; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* unlockEntrenceReadList; // 0x2E0
		::System::Collections::Generic::List_1<::System::Int32>* questDifficuteReadList; // 0x2E8
		::System::Collections::Generic::List_1<::System::Int32>* unlockBossQuestReadList; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* popupWindowList; // 0x2F8
		::System::Boolean PlayUnlockUnlimitAnimation; // 0x300
		::System::Collections::Generic::List_1<::System::Int32>* TacticsIDRecord; // 0x308
		::System::Collections::Generic::List_1<::System::Int32>* TowerDefenseBuddy; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* TowerDefenseEnhance; // 0x318
		::System::Boolean MarcelScorePeriodRecord; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* MarcelScorePeriodRecord2; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* MarcelLevelGroupRecord; // 0x330
		::System::Boolean MarcelMainPagePopRecord; // 0x338
		::System::Boolean MarcelMapNewRecord; // 0x339
		::System::Boolean MarcelRankTipsRecord; // 0x33A
		::System::Collections::Generic::List_1<::System::Int32>* FoodTruckTabRecord; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooClothingRecords; // 0x348
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooPassiveSkillRecords; // 0x350
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooAniRecords; // 0x358
		::System::Collections::Generic::List_1<::System::Int32>* doubleCostModeClosedQuests; // 0x360
		::System::Collections::Generic::List_1<::System::Int32>* flowerShopCustomQuestRecords; // 0x368
		::System::Collections::Generic::List_1<::System::Int32>* flowerShopLevelRecords; // 0x370
		::System::Collections::Generic::List_1<::System::Int32>* SuibianDrinkingTeaTaskRedSignClickList; // 0x378
		::System::Int32 SuibianDrinkingTeaSelectTabIndex; // 0x380
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamUpgrade; // 0x388
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamLevel; // 0x390
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamEquipList; // 0x398
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamItemList; // 0x3A0
		::System::Collections::Generic::List_1<::System::Int32>* HasSeeExtraChallengeID; // 0x3A8
		::System::Boolean TempleProductRecyle; // 0x3B0
		::System::Boolean TempleMaterialRecyle; // 0x3B1
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleRecyleItemID; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleNewProductID; // 0x3C0
		::System::Collections::Generic::List_1<::System::Int32>* TempleWanderUnlockID; // 0x3C8
		::System::Collections::Generic::List_1<::System::UInt32>* TempleGoodShelveID; // 0x3D0
		::System::Collections::Generic::List_1<::System::Int32>* TempleNewProductShelveID; // 0x3D8
		::System::Boolean TempleUpgradeUnlock; // 0x3E0
		::System::Collections::Generic::List_1<::System::Int32>* TempleNewResearchProductID; // 0x3E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleResearchAndLevelUpProductNewDict; // 0x3F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleSellProductNewDict; // 0x3F8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* TempleSellShelveNewDict; // 0x400
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* TempleTrendNewDict; // 0x408
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TempleRankQuestFinishCount; // 0x410
		::System::Collections::Generic::List_1<::System::Int32>* cinemaClearReview; // 0x418
		::System::Boolean cinemaChangedTitle; // 0x420
		::System::Collections::Generic::List_1<::System::Int32>* HouseRhythmBangbooPeriod; // 0x428
		::System::Collections::Generic::List_1<::System::Int32>* PlayedFinishAnimationQuestID; // 0x430
		::System::Collections::Generic::List_1<::System::Int32>* PlayedUnlockAnimationQuestID; // 0x438
		::System::Collections::Generic::List_1<::System::Int32>* OperationYumShownNewHintQuestIDs; // 0x440
		::System::Int32 AbyssTrirdLoopBetaQuestId; // 0x448
		::MoleMole::UserLocalDataItem_Class_2_588D89253017A5FC* FlowerShopLocalCache; // 0x450
		::MoleMole::UserLocalDataItem_TempleSimulationRecord* TempleRecord; // 0x458
		::System::Collections::Generic::List_1<::System::UInt32>* TempleBuddyUidRecords; // 0x460
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* TempleBuddyTalentSkillRecords; // 0x468
		::System::Collections::Generic::List_1<::System::String*>* CloseProfessionLackWeaponTipVersions; // 0x470
		::System::Boolean MapLocation3dPopHide; // 0x478
		::System::Boolean MapLocation2dPopShow; // 0x479
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* SpecialWeaponContrastFinish; // 0x480
		::System::Collections::Generic::List_1<::System::Int32>* gachaActivityMilestoneRecords; // 0x488
		::System::Boolean enterBabelTower; // 0x490
		::System::Int32 SummerEventUnLockMainQuestGroupID; // 0x494
		::System::Int32 SummerEventUnLockAliceQuestGroupID; // 0x498
		::System::Int32 SummerEventUnLockYuzuhaQuestGroupID; // 0x49C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ShowNpcIconForInvitation; // 0x4A0
		::System::Boolean rolePageOnlySelectOwnAvatarFromMainCity; // 0x4A8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* TowerDefenseClickNew; // 0x4B0
		::System::Boolean ReadWeaponVideoRecord; // 0x4B8
		::System::Single ActivityRhythmClickAudioVideoDelayTime; // 0x4BC
		::System::Single ActivityRhythmClickInputDelayTime; // 0x4C0
		::System::Int32 ActivityRhythmClickCloudGameDelayPlan; // 0x4C4
		::System::Collections::Generic::List_1<::System::Int32>* MonsterFantasyBuffData; // 0x4C8
		::System::Int32 MonsterFantasyLeastTurnCount; // 0x4D0
		::System::Int32 VoidFrontConfirmBattleId; // 0x4D4
		::System::Collections::Generic::List_1<::System::Int32>* VoidFrontNewRecords; // 0x4D8
		::System::Boolean OpenCoopStylish; // 0x4E0
		::System::Collections::Generic::List_1<::System::Int32>* AutoBattlePVEPopupRecord; // 0x4E8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* CircleChatShowTitleData; // 0x4F0
		::System::Int32 SocialCircleFindTagID; // 0x4F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GachaScheduleHasRead; // 0x500
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* WinterPageDiaplayHasRead; // 0x508
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NicePageDiaplayHasRead; // 0x510
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AntiqueCollectIsReadDict; // 0x518
		::System::Collections::Generic::List_1<::System::Int32>* CoopUnlockPopList; // 0x520
		::System::Boolean BigSceneShowFloorPresetTip; // 0x528
		::System::Int32 ForbiddenAreaUnLockQuestGroupID; // 0x52C
		::System::Collections::Generic::List_1<::System::UInt32>* ForbiddenAreaCollectListForAnim; // 0x530
		::System::Boolean NeedShowSquadNew; // 0x538
		::System::Collections::Generic::List_1<::System::Int32>* SquadRecords; // 0x540
		::System::Collections::Generic::List_1<::System::Int32>* WorldLevelGoQuestRecords; // 0x548
		::System::Int64 materialNewTicketComposeTipTimeStamp; // 0x550
		::System::Int64 equipmentTicketComposeTipTimeStamp; // 0x558
		::System::Boolean bossChallengeTeamDetailShowed; // 0x560
		::System::Boolean hadalImpactBattleDetailShowed; // 0x561
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ActivityBattleStylish; // 0x568
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* SettingHintVersions; // 0x570
		::System::Boolean ShowedEnterSocial; // 0x578
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* BattleDataRecordFirstNew; // 0x580
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NewInterknotPost; // 0x588
		::System::Collections::Generic::List_1<::System::Int32>* MusicBattleNotificationReceived; // 0x590
		::System::Boolean AbyssS2LevelDetailDesc; // 0x598
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MusicGame::MusicCalibrationData*>* MusicGameCalibrationDataDict; // 0x5A0
		::System::Collections::Generic::List_1<::System::Int32>* SquadToolNewZoneRecords; // 0x5A8
		::System::Boolean ShowHotpotSkipTips; // 0x5B0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* HotpotFoodList; // 0x5B8
		::System::Collections::Generic::List_1<::System::Int32>* HotpotLevelList; // 0x5C0
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovDelegateNewQuestIds; // 0x5C8
		::System::Int32 ZenkovDelegateDutyResetId; // 0x5D0
		::System::Int32 ZenkovDelegateSeasonResetId; // 0x5D4
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovDelegateSeenOnceQuestIds; // 0x5D8
		::System::Int32 ZenkovDelegateSeenSeasonStage; // 0x5E0
		::System::Int32 ZenkovDelegateExpiringBubbleDay; // 0x5E4
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovCraftSeenUnlockedPageIds; // 0x5E8
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovCraftSeenUnlockedProductIds; // 0x5F0
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovCraftSeenUnlockedBenchIds; // 0x5F8
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovMissionSeenUnlockedDungeonIds; // 0x600
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovMissionNotifiedUnlockedDungeonIds; // 0x608
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* _configMobileButtons; // 0x610
		::MoleMole::UserLocalDataItem_Class_1_21951B2F61163A78* __configMobileButtonsWrapper; // 0x618
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* _configMobileButtonPanels; // 0x620
		::MoleMole::UserLocalDataItem_Class_1_52129102CB994280* __configMobileButtonPanelsWrapper; // 0x628
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>* _configMobileButtonsOld; // 0x630
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Battle; // 0x638
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_MainCity; // 0x640
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Hollow; // 0x648
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Bangboo; // 0x650
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_TriggerTPS; // 0x658
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FrontCameraQuestTipBadge; // 0x660
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastGames; // 0x668
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastTodoQuests; // 0x670
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastPromotionShowed; // 0x678
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastDevItem; // 0x680
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastDevItemWithTips; // 0x688
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastHiddenGuestWithTips; // 0x690
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastTodoQuestsWithTips; // 0x698
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* overlordGameStars; // 0x6A0
		::System::Int32 miniscapeCacheLevel; // 0x6A8
		::System::Int64 miniscapeTaskRefreshTimeStamp; // 0x6B0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_SummerTideBeachStageLocalData>* SummerTideBeachStageLocalDict; // 0x6B8
		::System::Boolean ReadWeaponBatchLockRecord; // 0x6C0
		::System::Int32 NewbieGuideSelectedSquadIndex; // 0x6C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* get_OverrideMobileButtonPositions()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this);
		}

		::System::Void set_OverrideMobileButtonPositions(::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* get__overrideMobileButtonPositions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this);
		}

		::System::Void set__overrideMobileButtonPositions(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* get_OverrideMobileButtonPanels()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this);
		}

		::System::Void set_OverrideMobileButtonPanels(::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* get__overrideMobileButtonPanels()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this);
		}

		::System::Void set__overrideMobileButtonPanels(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this, a1);
		}

		::MoleMole::UserLocalDataItem_Class_1_21951B2F61163A78* get__configMobileButtonsWrapper()
		{
			return ((::MoleMole::UserLocalDataItem_Class_1_21951B2F61163A78*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONSWRAPPER_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_Class_1_52129102CB994280* get__configMobileButtonPanelsWrapper()
		{
			return ((::MoleMole::UserLocalDataItem_Class_1_52129102CB994280*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONPANELSWRAPPER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>* get_configMobileButtons()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_CONFIGMOBILEBUTTONS_OFFSET))(this);
		}

		::System::Void set_configMobileButtons(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_CONFIGMOBILEBUTTONS_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
		}

		::System::Void Method_1_E8C07C74D3D8F211(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_E8C07C74D3D8F211_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_4DE866BD1F83957B(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_4DE866BD1F83957B_OFFSET))(this, a1);
		}

		static ::MoleMole::UserLocalDataItem* Method_1_6AE9950BF37DA5F8(::System::String* a1)
		{
			return ((::MoleMole::UserLocalDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_6AE9950BF37DA5F8_OFFSET))(a1);
		}

		::System::Void Method_1_22D1FE63968DB770(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_22D1FE63968DB770_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_8E3D7350119AC13D(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8E3D7350119AC13D_OFFSET))(this, a1);
		}

		static ::System::String* Method_1_72A9457F9CFEA334(::MoleMole::UserLocalDataItem* a1)
		{
			return ((::System::String*(*)(::MoleMole::UserLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_72A9457F9CFEA334_OFFSET))(a1);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_7DC5D7F6533DC9A6(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_7DC5D7F6533DC9A6_OFFSET))(this, a1, a2);
		}
	};
}
