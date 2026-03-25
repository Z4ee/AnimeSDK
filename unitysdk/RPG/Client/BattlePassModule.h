#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_9.h"
#include "unitysdk/Enum_3_DB663931210BBC27_15.h"
#include "unitysdk/RPG/Client/BPQuestType.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BattlePassData.h"

class Class_1_234EC89DAE861A3E;
namespace Proto { class OptionalReward; }
namespace RPG::Client { class BattlePassLevelRewardData; }
namespace RPG::Client { class BattlePassQuestData; }
namespace RPG::Client { class BattlePassRewardPointData; }
namespace RPG::Client { class Product; }
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSMODULE_BUGLEVEL_OFFSET UNITYSDK_OFFSET(0x91C73E0)
#define RPG_CLIENT_BATTLEPASSMODULE_GETAVAILABLEOPTIONPOINTS_OFFSET UNITYSDK_OFFSET(0x91C7080)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSPRODUCT_OFFSET UNITYSDK_OFFSET(0x91C6670)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTDATAS_OFFSET UNITYSDK_OFFSET(0x91C3D00)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x91C7E70)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBLOCKEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x91C7A60)
#define RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGOPTIONITEMIDS_OFFSET UNITYSDK_OFFSET(0x91C6E00)
#define RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGREWARDIDS_OFFSET UNITYSDK_OFFSET(0x91C6AD0)
#define RPG_CLIENT_BATTLEPASSMODULE_GETDISPLAYQUESTDATAS_OFFSET UNITYSDK_OFFSET(0x91C7C50)
#define RPG_CLIENT_BATTLEPASSMODULE_GETFLASHEFFECTITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0x91C5950)
#define RPG_CLIENT_BATTLEPASSMODULE_GETNEWITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0x91C5B90)
#define RPG_CLIENT_BATTLEPASSMODULE_GETNEXTSPECIALREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x91C72C0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ADVERTISEMENTPROTECTSECONDS_OFFSET UNITYSDK_OFFSET(0x91CA620)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_BATTLEPASSDATA_OFFSET UNITYSDK_OFFSET(0x91CA050)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_DISPLAYEDLIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0x91CA510)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x91CA070)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_FINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x91C7A10)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_FINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x91CA470)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x91C5400)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISEXPWEEKMAX_OFFSET UNITYSDK_OFFSET(0x91CA390)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x91CA330)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISPAID_OFFSET UNITYSDK_OFFSET(0x91C7030)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISPAYEND_OFFSET UNITYSDK_OFFSET(0x91CA0F0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_LEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0x91CA4A0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x91CA480)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_NEWDISPLAYEDLIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0x91CA520)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_OLDDISPLAYEDLIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0x91CA530)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_RELATIVESHOPID_OFFSET UNITYSDK_OFFSET(0x91CA540)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_REWARDDATAS_OFFSET UNITYSDK_OFFSET(0x91CA450)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x91C65B0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_WEEKMAXEXP_OFFSET UNITYSDK_OFFSET(0x91C9B30)
#define RPG_CLIENT_BATTLEPASSMODULE_HASAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x91C7660)
#define RPG_CLIENT_BATTLEPASSMODULE_HASBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x91C6490)
#define RPG_CLIENT_BATTLEPASSMODULE_HASSEENCURRENTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x91C7ED0)
#define RPG_CLIENT_BATTLEPASSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x91C5460)
#define RPG_CLIENT_BATTLEPASSMODULE_ISALLNEWDISPLAYLIGHTCONEIDSSEENFORTOTAL_OFFSET UNITYSDK_OFFSET(0x91C5DD0)
#define RPG_CLIENT_BATTLEPASSMODULE_ISNEWDISPLAYLIGHTCONEIDSSEENFORSINGLE_OFFSET UNITYSDK_OFFSET(0x91C60F0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKALLITEMSHASSEENINPURCHASE_OFFSET UNITYSDK_OFFSET(0x91C5AC0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORSINGLE_OFFSET UNITYSDK_OFFSET(0x91C6340)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORTOTAL_OFFSET UNITYSDK_OFFSET(0x91C5FD0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKITEMHASSEENINPURCHASE_OFFSET UNITYSDK_OFFSET(0x91C59F0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKNEWDISPLAYLIGHTCONEIDHASSEENFORSINGLE_OFFSET UNITYSDK_OFFSET(0x91C61F0)
#define RPG_CLIENT_BATTLEPASSMODULE_PURCHASEBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x91C6820)
#define RPG_CLIENT_BATTLEPASSMODULE_RECEIVEALLQUESTS_OFFSET UNITYSDK_OFFSET(0x91C7910)
#define RPG_CLIENT_BATTLEPASSMODULE_RECEIVEQUEST_OFFSET UNITYSDK_OFFSET(0x91C7720)
#define RPG_CLIENT_BATTLEPASSMODULE_RECORDCURRENTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0x91C7FB0)
#define RPG_CLIENT_BATTLEPASSMODULE_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x91CA490)
#define RPG_CLIENT_BATTLEPASSMODULE_SET_REWARDDATAS_OFFSET UNITYSDK_OFFSET(0x91CA460)
#define RPG_CLIENT_BATTLEPASSMODULE_TAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x91C7590)
#define RPG_CLIENT_BATTLEPASSMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x91C74B0)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDFINISHQUESTS_OFFSET UNITYSDK_OFFSET(0x91C9930)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x91C9740)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x91C9BA0)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDQUESTDATAS_OFFSET UNITYSDK_OFFSET(0x91C8C90)
#define RPG_CLIENT_BATTLEPASSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x91CA720)
#define RPG_CLIENT_BATTLEPASSMODULE__GETCOMINGREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x91C6C70)
#define RPG_CLIENT_BATTLEPASSMODULE__INITDISPLAYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x91C8880)
#define RPG_CLIENT_BATTLEPASSMODULE__INITFLASHEFFECTITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0x91C57B0)
#define RPG_CLIENT_BATTLEPASSMODULE__INITNEWITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0x91C5610)
#define RPG_CLIENT_BATTLEPASSMODULE__INITQUESTDATAS_OFFSET UNITYSDK_OFFSET(0x91C84C0)
#define RPG_CLIENT_BATTLEPASSMODULE__INITREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x91C8340)
#define RPG_CLIENT_BATTLEPASSMODULE__INITREWARDREDDOTDATAS_OFFSET UNITYSDK_OFFSET(0x91C8640)
#define RPG_CLIENT_BATTLEPASSMODULE__NOTIFYEXPFULL_OFFSET UNITYSDK_OFFSET(0x91C77F0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONBATTLEPASSINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x91C9CF0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONBUYBPLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x91C9FD0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0x91C98C0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x91C9860)
#define RPG_CLIENT_BATTLEPASSMODULE__ONRECHARGESUCCNOTIFY_OFFSET UNITYSDK_OFFSET(0x91C9D70)
#define RPG_CLIENT_BATTLEPASSMODULE__ONTAKEALLREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x91C9F40)
#define RPG_CLIENT_BATTLEPASSMODULE__ONTAKEBPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x91C9EB0)
#define RPG_CLIENT_BATTLEPASSMODULE__SYNCREWARDSTATUS_OFFSET UNITYSDK_OFFSET(0x91C8B20)
#define RPG_CLIENT_BATTLEPASSMODULE__TRYCLEANLOCALRECORD_OFFSET UNITYSDK_OFFSET(0x91C82A0)
#define RPG_CLIENT_BATTLEPASSMODULE__UPDATEBATTLEPASSDATA_OFFSET UNITYSDK_OFFSET(0x91C8080)
#define RPG_CLIENT_BATTLEPASSMODULE__UPDATEFINISHEDQUESTS_OFFSET UNITYSDK_OFFSET(0x91C92F0)
#define RPG_CLIENT_BATTLEPASSMODULE__UPDATEREWARDDATAS_OFFSET UNITYSDK_OFFSET(0x91C8A50)
#define RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x91CAA40)
#define RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x91CAAD0)
#define RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x91CAB30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassModule_TypeDefinitionIndex = 51043;

	class BattlePassModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* _ActivityQuestDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _OldDisplayedLightConeIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs; // 0x20
		::RPG::Client::BattlePassData _BattlePassData; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* _RewardDatas_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDisplayedLightConeIDs_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecialRewardLevels; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* NewDisplayRewardItemIDs; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayedLightConeIDs_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _NewItemIDsForPurchase; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _FlashEffectItemIDsForPurchase; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* _WeeklyQuestDatas; // 0x80
		::System::UInt32 _MaxLevel_k__BackingField; // 0x88
		::System::Int32 _FinishedWeeklyQuestCount; // 0x8C
		::System::UInt32 _ClosePayOffset; // 0x90
		::System::Int32 _FinishedActivityQuestCount; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattlePassModule* get_Instance()
		{
			return ((::RPG::Client::BattlePassModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFlashEffectItemIDsForPurchase()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETFLASHEFFECTITEMIDSFORPURCHASE_OFFSET))(this);
		}

		::System::Void MarkItemHasSeenInPurchase(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKITEMHASSEENINPURCHASE_OFFSET))(this, itemID);
		}

		::System::Void MarkAllItemsHasSeenInPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKALLITEMSHASSEENINPURCHASE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewItemIDsForPurchase()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETNEWITEMIDSFORPURCHASE_OFFSET))(this);
		}

		::System::Boolean IsAllNewDisplayLightConeIDsSeenForTotal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_ISALLNEWDISPLAYLIGHTCONEIDSSEENFORTOTAL_OFFSET))(this);
		}

		::System::Void MarkAllNewDisplayLightConeIDsHasSeenForTotal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORTOTAL_OFFSET))(this);
		}

		::System::Boolean IsNewDisplayLightConeIDsSeenForSingle(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_ISNEWDISPLAYLIGHTCONEIDSSEENFORSINGLE_OFFSET))(this, id);
		}

		::System::Void MarkNewDisplayLightConeIdHasSeenForSingle(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKNEWDISPLAYLIGHTCONEIDHASSEENFORSINGLE_OFFSET))(this, id);
		}

		::System::Void MarkAllNewDisplayLightConeIDsHasSeenForSingle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORSINGLE_OFFSET))(this);
		}

		::System::Boolean HasBattlePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_HASBATTLEPASS_OFFSET))(this);
		}

		::RPG::Client::Product* GetBattlePassProduct(::Enum_3_DB663931210BBC27_15 purchaseType)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::Enum_3_DB663931210BBC27_15))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSPRODUCT_OFFSET))(this, purchaseType);
		}

		::System::Void PurchaseBattlePass(::Enum_3_DB663931210BBC27_15 purchaseType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_15))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_PURCHASEBATTLEPASS_OFFSET))(this, purchaseType);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetComingRewardIDs(::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGREWARDIDS_OFFSET))(this, targetLevel);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetComingOptionItemIDs(::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGOPTIONITEMIDS_OFFSET))(this, targetLevel);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassRewardPointData*>* GetAvailableOptionPoints()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassRewardPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETAVAILABLEOPTIONPOINTS_OFFSET))(this);
		}

		::System::UInt32 GetNextSpecialRewardLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETNEXTSPECIALREWARDLEVEL_OFFSET))(this, level);
		}

		::System::Void BugLevel(::System::UInt32 targetLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_BUGLEVEL_OFFSET))(this, targetLevel);
		}

		::System::Void TakeReward(::System::UInt32 level, ::Enum_3_4608E37A1B3D374A_9 rewardType, ::System::UInt32 selectedRewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_4608E37A1B3D374A_9, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_TAKEREWARD_OFFSET))(this, level, rewardType, selectedRewardID);
		}

		::System::Void TakeAllReward(::System::Collections::Generic::List_1<::Proto::OptionalReward*>* rewardOptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::OptionalReward*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_TAKEALLREWARD_OFFSET))(this, rewardOptions);
		}

		::System::Boolean HasAvailableReward(::System::Boolean ignoreOptionReward)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_HASAVAILABLEREWARD_OFFSET))(this, ignoreOptionReward);
		}

		::System::Void ReceiveQuest(::System::UInt32 questID, ::RPG::Client::BPQuestType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_RECEIVEQUEST_OFFSET))(this, questID, type);
		}

		::System::Void ReceiveAllQuests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_RECEIVEALLQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* GetBattlePassQuestDatas(::RPG::Client::BPQuestType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTDATAS_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* GetDisplayQuestDatas(::RPG::Client::BPQuestType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETDISPLAYQUESTDATAS_OFFSET))(this, type);
		}

		::System::Int32 GetBattlePassQuestFinishedCount(::RPG::Client::BPQuestType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTFINISHEDCOUNT_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBlockedQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBLOCKEDQUESTIDS_OFFSET))(this);
		}

		::System::Boolean HasSeenCurrentBattlePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_HASSEENCURRENTBATTLEPASS_OFFSET))(this);
		}

		::System::Void RecordCurrentBattlePass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_RECORDCURRENTBATTLEPASS_OFFSET))(this);
		}

		::System::Void _InitNewItemIDsForPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITNEWITEMIDSFORPURCHASE_OFFSET))(this);
		}

		::System::Void _InitFlashEffectItemIDsForPurchase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITFLASHEFFECTITEMIDSFORPURCHASE_OFFSET))(this);
		}

		::System::Void _UpdateBattlePassData(::Class_1_234EC89DAE861A3E* infoNotify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_234EC89DAE861A3E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__UPDATEBATTLEPASSDATA_OFFSET))(this, infoNotify);
		}

		::System::Void _TryCleanLocalRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__TRYCLEANLOCALRECORD_OFFSET))(this);
		}

		::System::Void _InitRewardReddotDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITREWARDREDDOTDATAS_OFFSET))(this);
		}

		::System::Void _InitDisplayEquipment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITDISPLAYEQUIPMENT_OFFSET))(this);
		}

		::System::Void _InitRewardDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITREWARDDATAS_OFFSET))(this);
		}

		::System::Void _UpdateRewardDatas(::Class_1_234EC89DAE861A3E* infoNotify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_234EC89DAE861A3E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__UPDATEREWARDDATAS_OFFSET))(this, infoNotify);
		}

		::System::Void _SyncRewardStatus(::System::Int32 flagIndex, ::System::UInt64 freeFlag, ::System::UInt64 premiumFlag1, ::System::UInt64 premiumFlag2, ::System::UInt64 optionFlag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__SYNCREWARDSTATUS_OFFSET))(this, flagIndex, freeFlag, premiumFlag1, premiumFlag2, optionFlag);
		}

		::System::Void _InitQuestDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITQUESTDATAS_OFFSET))(this);
		}

		::System::Void _AddQuestDatas(::RPG::Client::BPQuestType type, ::Il2CppArray<::System::UInt32>* questIDs, ::System::Boolean showInChain)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BPQuestType, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDQUESTDATAS_OFFSET))(this, type, questIDs, showInChain);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnQuestUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONQUESTUPDATED_OFFSET))(this, arg);
		}

		::System::Void _OnQuestGetReward(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONQUESTGETREWARD_OFFSET))(this, arg);
		}

		::System::Void _UpdateFinishedQuests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__UPDATEFINISHEDQUESTS_OFFSET))(this);
		}

		::System::Int32 _AddFinishQuests(::System::Collections::Generic::List_1<::System::UInt32>*& finishQuestIDs, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* bpQuestDatas, ::System::Collections::Generic::List_1<::System::UInt32>* blockedIDs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDFINISHQUESTS_OFFSET))(this, finishQuestIDs, bpQuestDatas, blockedIDs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* _GetComingRewardDatas(::System::UInt32 targetLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__GETCOMINGREWARDDATAS_OFFSET))(this, targetLevel);
		}

		::System::Void _NotifyExpFull(::System::Boolean notifyWeekLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__NOTIFYEXPFULL_OFFSET))(this, notifyWeekLimit);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattlePassInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONBATTLEPASSINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRechargeSuccNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONRECHARGESUCCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnTakeBpRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONTAKEBPREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeAllRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONTAKEALLREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBuyBpLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONBUYBPLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::BattlePassData get_BattlePassData()
		{
			return ((::RPG::Client::BattlePassData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_BATTLEPASSDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_SCHEDULE_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_IsPayEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_ISPAYEND_OFFSET))(this);
		}

		::System::Boolean get_IsPaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_ISPAID_OFFSET))(this);
		}

		::System::Boolean get_IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_ISLEVELMAX_OFFSET))(this);
		}

		::System::Boolean get_IsExpWeekMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_ISEXPWEEKMAX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* get_RewardDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_REWARDDATAS_OFFSET))(this);
		}

		::System::Void set_RewardDatas(::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_SET_REWARDDATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_FINISHEDQUESTIDS_OFFSET))(this);
		}

		::System::Int32 get_FinishedQuestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_FINISHEDQUESTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_SET_MAXLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_LevelMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_LEVELMAXEXP_OFFSET))(this);
		}

		::System::UInt32 get_WeekMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_WEEKMAXEXP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisplayedLightConeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_DISPLAYEDLIGHTCONEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDisplayedLightConeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_NEWDISPLAYEDLIGHTCONEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OldDisplayedLightConeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_OLDDISPLAYEDLIGHTCONEIDS_OFFSET))(this);
		}

		::System::UInt32 get_RelativeShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_RELATIVESHOPID_OFFSET))(this);
		}

		::System::Single get_AdvertisementProtectSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GET_ADVERTISEMENTPROTECTSECONDS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
