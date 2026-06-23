#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BallGameRoleLocalData.h"
#include "unitysdk/MoleMole/HollowCameraSerializeField.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityQuestRedDotRecord; }
namespace MoleMole { class BackFlowLocalData; }
namespace MoleMole { class UserLocalDataItem_Class_1_1A520E7D82BE4A56_14; }
namespace MoleMole { class UserLocalDataItem_Class_1_AA89291CA9B11FFB; }
namespace MoleMole { class UserLocalDataItem_Class_1_F68D4DB0B1BEFC7A; }
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

#define MOLEMOLE_USERLOCALDATAITEM_GET_CONFIGMOBILEBUTTONS_OFFSET UNITYSDK_OFFSET(0x13842640)
#define MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x13841ED0)
#define MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x13841760)
#define MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONPANELSWRAPPER_OFFSET UNITYSDK_OFFSET(0x13841FB0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONSWRAPPER_OFFSET UNITYSDK_OFFSET(0x13841840)
#define MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x13842430)
#define MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x13841CC0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_070ACC770BD62911_OFFSET UNITYSDK_OFFSET(0x13846560)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_22D1FE63968DB770_OFFSET UNITYSDK_OFFSET(0x13847180)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_397701680F2D8EE7_OFFSET UNITYSDK_OFFSET(0x13846C60)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_4DE866BD1F83957B_OFFSET UNITYSDK_OFFSET(0x13847380)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_7DC5D7F6533DC9A6_OFFSET UNITYSDK_OFFSET(0x13846BC0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8E3D7350119AC13D_OFFSET UNITYSDK_OFFSET(0x138472E0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0x13846AD0)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13847250)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13846A90)
#define MOLEMOLE_USERLOCALDATAITEM_METHOD_1_E8C07C74D3D8F211_OFFSET UNITYSDK_OFFSET(0x13847290)
#define MOLEMOLE_USERLOCALDATAITEM_SET_CONFIGMOBILEBUTTONS_OFFSET UNITYSDK_OFFSET(0x13842650)
#define MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x13842040)
#define MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x138418D0)
#define MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x13842440)
#define MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x13841CD0)
#define MOLEMOLE_USERLOCALDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x138456B0)
#define MOLEMOLE_USERLOCALDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13842810)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_TypeDefinitionIndex = 70682;

	class UserLocalDataItem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>** StaticGet__defaultConfigMobileButtons()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>**)Il2CppClass::FromTypeDefinitionIndex(UserLocalDataItem_TypeDefinitionIndex)->GetStaticField(0x38030);
		}
		// static const ::System::String* Field_1_3; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BallGameRoleLocalData>* BallGameRoleLocalDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BallGameRoleLatestArchive; // 0x18
		::System::Int32 HardCoreBossBossSelectIndex; // 0x20
		::System::UInt64 playerUID; // 0x28
		::MoleMole::HollowCameraSerializeField HollowCameraField; // 0x30
		::System::Boolean QuestModelChallengeTaskFinish; // 0x7C
		::System::Int32 QuestModelTaskStartTime; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* FairyRecordList; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* InteractiveRecords; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* TimeEventUnlockRecords; // 0x98
		::System::Int32 EquipGachaLocalSelectForgeTab; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EquipGachaLocalTabSelectEquipPartDict; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NotificationBadgeMap; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CustomNotificationRecords; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ExpeditionAreaClickIndexHistory; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ActivityRecords; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::ActivityQuestRedDotRecord*>* ActivityRedDotRecords; // 0xD0
		::MoleMole::BackFlowLocalData* backFlowLocalData; // 0xD8
		::System::String* HDDVideoPlayTime; // 0xE0
		::System::UInt32 RepelSlotCountKey; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* AbyssTipRecords; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AbyssGroupCloseToFinishRecords; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Boolean>* AvatarUIDToHintEquipEver; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* AbyssCardSuitSetToTop; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* FishPanelCollectFishItemMap; // 0x110
		::System::Collections::Generic::List_1<::System::UInt32>* AbyssS2InteractedTemplateIds; // 0x118
		::System::Collections::Generic::List_1<::System::Int32>* NeoGoldenDelNewMechaBuildIDs; // 0x120
		::System::Collections::Generic::List_1<::System::Int32>* NeoGoldenPopedNewList; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* CommonDataBool; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ActivityBattleLevelNew; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ActivityBattleLevelUnlockAnim; // 0x140
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ActivityBattleLevelBestRecord; // 0x148
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* HollowQuestRecords; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* RallyQuestRecords; // 0x158
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ActivityVirusRecords; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* TheGunRecords; // 0x168
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AvatarStoryRecords; // 0x170
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* questPerformResRecords; // 0x178
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* EquipTipRecords; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* YorozuyaDifficutyRecords; // 0x188
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* YorozuyaOldChessboardRecords; // 0x190
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ActivityQuestDifficutyRecords; // 0x198
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GeneralTipsExcelRemindRecords; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* AbyssS2AvatarMissionRecords; // 0x1A8
		::System::Collections::Generic::List_1<::System::Int32>* ArpeggioBlessGroupRecord; // 0x1B0
		::System::Int32 YorozuyaChapterIdex; // 0x1B8
		::System::Collections::Generic::List_1<::System::Int32>* SelectedVHSList; // 0x1C0
		::System::UInt32 VHSPromoterID; // 0x1C8
		::System::Boolean hasSeenMessage; // 0x1CC
		::System::Boolean hasPlayRiduRulePop; // 0x1CD
		::System::UInt32 lastVisitedArcadeActivityID; // 0x1D0
		::System::UInt32 lastVisitedArcadeScheduleID; // 0x1D4
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* ambientTriggerDic; // 0x1D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* battlePassRecords; // 0x1E0
		::System::Boolean performUseAutoPlay; // 0x1E8
		::System::UInt64 m_lastVisitedAbyssRewardPeriodID; // 0x1F0
		::System::Collections::Generic::List_1<::System::Int32>* RecordedHeadPortraitIDs; // 0x1F8
		::System::Boolean IsBigSceneLineUpTutorialDialogShow; // 0x200
		::System::Collections::Generic::List_1<::System::Int32>* RecordedNormalRallyQuestIDs; // 0x208
		::System::Collections::Generic::List_1<::System::Int32>* UnlockedRallyChapterRecords; // 0x210
		::System::Boolean HadalPopup_PrevTag; // 0x218
		::System::Int32 HadalPopup_PrevZoneID; // 0x21C
		::System::Int32 HadalScheduleZoneIDRecord; // 0x220
		::System::Int32 NewHadalScheduleZoneIDRecord; // 0x224
		::System::Collections::Generic::List_1<::System::Int32>* NewBabelTowerID; // 0x228
		::System::Collections::Generic::List_1<::System::Int32>* HadalUnlockZoneAnims; // 0x230
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* HadalUnlockZoneLayersAnims; // 0x238
		::System::Int64 RewardTime; // 0x240
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_Class_1_1A520E7D82BE4A56_14*>* WorldLevelRecords; // 0x248
		::System::Collections::Generic::List_1<::System::Int32>* RecordedPostGirlIDs; // 0x250
		::System::Boolean roleSelectMultiSelectOn; // 0x258
		::System::Boolean roleSelectUpgradeOn; // 0x259
		::System::Boolean AbyssS2IntensifyToggle; // 0x25A
		::System::Boolean BanbooDreamDescDetailToggle; // 0x25B
		::System::Int32 BangbooDreamLastLevel; // 0x25C
		::System::Boolean ExpeditionMultiSelectOn; // 0x260
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* UnlockedCharacterQuestEntryRecords; // 0x268
		::System::Collections::Generic::List_1<::System::Int32>* unlockedPartners; // 0x270
		::System::Collections::Generic::List_1<::System::Int32>* unlockedPartnerContacts; // 0x278
		::System::Collections::Generic::List_1<::System::UInt32>* recordedUpBangbooItems; // 0x280
		::System::Collections::Generic::List_1<::System::Int32>* unlockedMusicList; // 0x288
		::System::Collections::Generic::List_1<::System::Int32>* upAvatarIDList; // 0x290
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* workbenchTrustDegreeHasSeeMaxLevel; // 0x298
		::System::Collections::Generic::List_1<::System::Int32>* unlockMonsterCardReadList; // 0x2A0
		::System::Collections::Generic::List_1<::System::Int32>* unlockSuitReadList; // 0x2A8
		::System::Collections::Generic::List_1<::System::Int32>* unlockEntrenceReadList; // 0x2B0
		::System::Collections::Generic::List_1<::System::Int32>* questDifficuteReadList; // 0x2B8
		::System::Collections::Generic::List_1<::System::Int32>* unlockBossQuestReadList; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* popupWindowList; // 0x2C8
		::System::Boolean PlayUnlockUnlimitAnimation; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* TacticsIDRecord; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* TowerDefenseBuddy; // 0x2E0
		::System::Collections::Generic::List_1<::System::Int32>* TowerDefenseEnhance; // 0x2E8
		::System::Boolean MarcelScorePeriodRecord; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* MarcelScorePeriodRecord2; // 0x2F8
		::System::Collections::Generic::List_1<::System::Int32>* MarcelLevelGroupRecord; // 0x300
		::System::Boolean MarcelMainPagePopRecord; // 0x308
		::System::Boolean MarcelMapNewRecord; // 0x309
		::System::Boolean MarcelRankTipsRecord; // 0x30A
		::System::Collections::Generic::List_1<::System::Int32>* FoodTruckTabRecord; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooClothingRecords; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooPassiveSkillRecords; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooAniRecords; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* doubleCostModeClosedQuests; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* flowerShopCustomQuestRecords; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* flowerShopLevelRecords; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* SuibianDrinkingTeaTaskRedSignClickList; // 0x348
		::System::Int32 SuibianDrinkingTeaSelectTabIndex; // 0x350
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamUpgrade; // 0x358
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamLevel; // 0x360
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamEquipList; // 0x368
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamItemList; // 0x370
		::System::Collections::Generic::List_1<::System::Int32>* HasSeeExtraChallengeID; // 0x378
		::System::Boolean TempleProductRecyle; // 0x380
		::System::Boolean TempleMaterialRecyle; // 0x381
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleRecyleItemID; // 0x388
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleNewProductID; // 0x390
		::System::Collections::Generic::List_1<::System::Int32>* TempleWanderUnlockID; // 0x398
		::System::Collections::Generic::List_1<::System::UInt32>* TempleGoodShelveID; // 0x3A0
		::System::Collections::Generic::List_1<::System::Int32>* TempleNewProductShelveID; // 0x3A8
		::System::Boolean TempleUpgradeUnlock; // 0x3B0
		::System::Collections::Generic::List_1<::System::Int32>* TempleNewResearchProductID; // 0x3B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleResearchAndLevelUpProductNewDict; // 0x3C0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleSellProductNewDict; // 0x3C8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* TempleSellShelveNewDict; // 0x3D0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* TempleTrendNewDict; // 0x3D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TempleRankQuestFinishCount; // 0x3E0
		::System::Collections::Generic::List_1<::System::Int32>* cinemaClearReview; // 0x3E8
		::System::Boolean cinemaChangedTitle; // 0x3F0
		::System::Collections::Generic::List_1<::System::Int32>* HouseRhythmBangbooPeriod; // 0x3F8
		::System::Collections::Generic::List_1<::System::Int32>* PlayedFinishAnimationQuestID; // 0x400
		::System::Collections::Generic::List_1<::System::Int32>* PlayedUnlockAnimationQuestID; // 0x408
		::System::Collections::Generic::List_1<::System::Int32>* OperationYumShownNewHintQuestIDs; // 0x410
		::System::Int32 AbyssTrirdLoopBetaQuestId; // 0x418
		::MoleMole::UserLocalDataItem_Class_2_588D89253017A5FC* FlowerShopLocalCache; // 0x420
		::MoleMole::UserLocalDataItem_TempleSimulationRecord* TempleRecord; // 0x428
		::System::Collections::Generic::List_1<::System::UInt32>* TempleBuddyUidRecords; // 0x430
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* TempleBuddyTalentSkillRecords; // 0x438
		::System::Collections::Generic::List_1<::System::String*>* CloseProfessionLackWeaponTipVersions; // 0x440
		::System::Boolean MapLocation3dPopHide; // 0x448
		::System::Boolean MapLocation2dPopShow; // 0x449
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* SpecialWeaponContrastFinish; // 0x450
		::System::Collections::Generic::List_1<::System::Int32>* gachaActivityMilestoneRecords; // 0x458
		::System::Boolean enterBabelTower; // 0x460
		::System::Int32 SummerEventUnLockMainQuestGroupID; // 0x464
		::System::Int32 SummerEventUnLockAliceQuestGroupID; // 0x468
		::System::Int32 SummerEventUnLockYuzuhaQuestGroupID; // 0x46C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ShowNpcIconForInvitation; // 0x470
		::System::Boolean rolePageOnlySelectOwnAvatarFromMainCity; // 0x478
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* TowerDefenseClickNew; // 0x480
		::System::Boolean ReadWeaponVideoRecord; // 0x488
		::System::Single ActivityRhythmClickAudioVideoDelayTime; // 0x48C
		::System::Single ActivityRhythmClickInputDelayTime; // 0x490
		::System::Int32 ActivityRhythmClickCloudGameDelayPlan; // 0x494
		::System::Collections::Generic::List_1<::System::Int32>* MonsterFantasyBuffData; // 0x498
		::System::Int32 MonsterFantasyLeastTurnCount; // 0x4A0
		::System::Int32 VoidFrontConfirmBattleId; // 0x4A4
		::System::Collections::Generic::List_1<::System::Int32>* VoidFrontNewRecords; // 0x4A8
		::System::Boolean OpenCoopStylish; // 0x4B0
		::System::Collections::Generic::List_1<::System::Int32>* AutoBattlePVEPopupRecord; // 0x4B8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* CircleChatShowTitleData; // 0x4C0
		::System::Int32 SocialCircleFindTagID; // 0x4C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GachaScheduleHasRead; // 0x4D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* WinterPageDiaplayHasRead; // 0x4D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AntiqueCollectIsReadDict; // 0x4E0
		::System::Collections::Generic::List_1<::System::Int32>* CoopUnlockPopList; // 0x4E8
		::System::Boolean BigSceneShowFloorPresetTip; // 0x4F0
		::System::Int32 ForbiddenAreaUnLockQuestGroupID; // 0x4F4
		::System::Collections::Generic::List_1<::System::UInt32>* ForbiddenAreaCollectListForAnim; // 0x4F8
		::System::Boolean NeedShowSquadNew; // 0x500
		::System::Collections::Generic::List_1<::System::Int32>* SquadRecords; // 0x508
		::System::Collections::Generic::List_1<::System::Int32>* WorldLevelGoQuestRecords; // 0x510
		::System::Int64 materialNewTicketComposeTipTimeStamp; // 0x518
		::System::Int64 equipmentTicketComposeTipTimeStamp; // 0x520
		::System::Boolean bossChallengeTeamDetailShowed; // 0x528
		::System::Boolean hadalImpactBattleDetailShowed; // 0x529
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ActivityBattleStylish; // 0x530
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* SettingHintVersions; // 0x538
		::System::Boolean ShowedEnterSocial; // 0x540
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* BattleDataRecordFirstNew; // 0x548
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NewInterknotPost; // 0x550
		::System::Collections::Generic::List_1<::System::Int32>* MusicBattleNotificationReceived; // 0x558
		::System::Boolean AbyssS2LevelDetailDesc; // 0x560
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MusicGame::MusicCalibrationData*>* MusicGameCalibrationDataDict; // 0x568
		::System::Collections::Generic::List_1<::System::Int32>* SquadToolNewZoneRecords; // 0x570
		::System::Boolean ShowHotpotSkipTips; // 0x578
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* HotpotFoodList; // 0x580
		::System::Collections::Generic::List_1<::System::Int32>* HotpotLevelList; // 0x588
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* _configMobileButtons; // 0x590
		::MoleMole::UserLocalDataItem_Class_1_F68D4DB0B1BEFC7A* __configMobileButtonsWrapper; // 0x598
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* _configMobileButtonPanels; // 0x5A0
		::MoleMole::UserLocalDataItem_Class_1_AA89291CA9B11FFB* __configMobileButtonPanelsWrapper; // 0x5A8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>* _configMobileButtonsOld; // 0x5B0
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Battle; // 0x5B8
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_MainCity; // 0x5C0
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Hollow; // 0x5C8
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Bangboo; // 0x5D0
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_TriggerTPS; // 0x5D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FrontCameraQuestTipBadge; // 0x5E0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastGames; // 0x5E8
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastTodoQuests; // 0x5F0
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastPromotionShowed; // 0x5F8
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastDevItem; // 0x600
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastDevItemWithTips; // 0x608
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastHiddenGuestWithTips; // 0x610
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastTodoQuestsWithTips; // 0x618
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* overlordGameStars; // 0x620
		::System::Int32 miniscapeCacheLevel; // 0x628
		::System::Int64 miniscapeTaskRefreshTimeStamp; // 0x630

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

		::MoleMole::UserLocalDataItem_Class_1_F68D4DB0B1BEFC7A* get__configMobileButtonsWrapper()
		{
			return ((::MoleMole::UserLocalDataItem_Class_1_F68D4DB0B1BEFC7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONSWRAPPER_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_Class_1_AA89291CA9B11FFB* get__configMobileButtonPanelsWrapper()
		{
			return ((::MoleMole::UserLocalDataItem_Class_1_AA89291CA9B11FFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONPANELSWRAPPER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>* get_configMobileButtons()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_CONFIGMOBILEBUTTONS_OFFSET))(this);
		}

		::System::Void set_configMobileButtons(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_ConfigMobileButton*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_CONFIGMOBILEBUTTONS_OFFSET))(this, a1);
		}

		static ::MoleMole::UserLocalDataItem* Method_1_070ACC770BD62911(::System::String* a1)
		{
			return ((::MoleMole::UserLocalDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_070ACC770BD62911_OFFSET))(a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
		}

		::System::Void Method_1_7DC5D7F6533DC9A6(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_7DC5D7F6533DC9A6_OFFSET))(this, a1, a2);
		}

		static ::System::String* Method_1_397701680F2D8EE7(::MoleMole::UserLocalDataItem* a1)
		{
			return ((::System::String*(*)(::MoleMole::UserLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_397701680F2D8EE7_OFFSET))(a1);
		}

		::System::Void Method_1_22D1FE63968DB770(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_22D1FE63968DB770_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_E8C07C74D3D8F211(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_E8C07C74D3D8F211_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8E3D7350119AC13D(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_8E3D7350119AC13D_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_4DE866BD1F83957B(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_METHOD_1_4DE866BD1F83957B_OFFSET))(this, a1);
		}
	};
}
