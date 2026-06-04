#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_7.h"
#include "unitysdk/Enum_3_DB663931210BBC27_16.h"
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

#define RPG_CLIENT_BATTLEPASSMODULE_BUGLEVEL_OFFSET UNITYSDK_OFFSET(0xB407690)
#define RPG_CLIENT_BATTLEPASSMODULE_GETAVAILABLEOPTIONPOINTS_OFFSET UNITYSDK_OFFSET(0xB4072E0)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSPRODUCT_OFFSET UNITYSDK_OFFSET(0xB406830)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTDATAS_OFFSET UNITYSDK_OFFSET(0xB407D30)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xB4086A0)
#define RPG_CLIENT_BATTLEPASSMODULE_GETBLOCKEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xB407FF0)
#define RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGOPTIONITEMIDS_OFFSET UNITYSDK_OFFSET(0xB407040)
#define RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGREWARDIDS_OFFSET UNITYSDK_OFFSET(0xB406CA0)
#define RPG_CLIENT_BATTLEPASSMODULE_GETDISPLAYQUESTDATAS_OFFSET UNITYSDK_OFFSET(0xB408220)
#define RPG_CLIENT_BATTLEPASSMODULE_GETFLASHEFFECTITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0xB405960)
#define RPG_CLIENT_BATTLEPASSMODULE_GETNEWITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0xB405D90)
#define RPG_CLIENT_BATTLEPASSMODULE_GETNEXTSPECIALREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xB4075A0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ADVERTISEMENTPROTECTSECONDS_OFFSET UNITYSDK_OFFSET(0xB40B7B0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_BATTLEPASSDATA_OFFSET UNITYSDK_OFFSET(0xB40B1D0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_DISPLAYEDLIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0xB40B690)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB40B1F0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_FINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xB407CE0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_FINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xB40B5F0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB405750)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISEXPWEEKMAX_OFFSET UNITYSDK_OFFSET(0xB40B510)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xB40B4B0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISPAID_OFFSET UNITYSDK_OFFSET(0xB407290)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_ISPAYEND_OFFSET UNITYSDK_OFFSET(0xB40B270)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_LEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0xB40B620)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB40B600)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_NEWDISPLAYEDLIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0xB40B6A0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_OLDDISPLAYEDLIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0xB40B6B0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_RELATIVESHOPID_OFFSET UNITYSDK_OFFSET(0xB40B6C0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_REWARDDATAS_OFFSET UNITYSDK_OFFSET(0xB40B5D0)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xB406780)
#define RPG_CLIENT_BATTLEPASSMODULE_GET_WEEKMAXEXP_OFFSET UNITYSDK_OFFSET(0xB40AAB0)
#define RPG_CLIENT_BATTLEPASSMODULE_HASAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xB407910)
#define RPG_CLIENT_BATTLEPASSMODULE_HASBATTLEPASS_OFFSET UNITYSDK_OFFSET(0xB406660)
#define RPG_CLIENT_BATTLEPASSMODULE_HASSEENCURRENTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0xB408700)
#define RPG_CLIENT_BATTLEPASSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB4057B0)
#define RPG_CLIENT_BATTLEPASSMODULE_ISALLNEWDISPLAYLIGHTCONEIDSSEENFORTOTAL_OFFSET UNITYSDK_OFFSET(0xB405FD0)
#define RPG_CLIENT_BATTLEPASSMODULE_ISNEWDISPLAYLIGHTCONEIDSSEENFORSINGLE_OFFSET UNITYSDK_OFFSET(0xB4062C0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKALLITEMSHASSEENINPURCHASE_OFFSET UNITYSDK_OFFSET(0xB405CC0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORSINGLE_OFFSET UNITYSDK_OFFSET(0xB406510)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORTOTAL_OFFSET UNITYSDK_OFFSET(0xB4061A0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKITEMHASSEENINPURCHASE_OFFSET UNITYSDK_OFFSET(0xB405BF0)
#define RPG_CLIENT_BATTLEPASSMODULE_MARKNEWDISPLAYLIGHTCONEIDHASSEENFORSINGLE_OFFSET UNITYSDK_OFFSET(0xB4063C0)
#define RPG_CLIENT_BATTLEPASSMODULE_PURCHASEBATTLEPASS_OFFSET UNITYSDK_OFFSET(0xB4069E0)
#define RPG_CLIENT_BATTLEPASSMODULE_RECEIVEALLQUESTS_OFFSET UNITYSDK_OFFSET(0xB407BE0)
#define RPG_CLIENT_BATTLEPASSMODULE_RECEIVEQUEST_OFFSET UNITYSDK_OFFSET(0xB4079E0)
#define RPG_CLIENT_BATTLEPASSMODULE_RECORDCURRENTBATTLEPASS_OFFSET UNITYSDK_OFFSET(0xB4087E0)
#define RPG_CLIENT_BATTLEPASSMODULE_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB40B610)
#define RPG_CLIENT_BATTLEPASSMODULE_SET_REWARDDATAS_OFFSET UNITYSDK_OFFSET(0xB40B5E0)
#define RPG_CLIENT_BATTLEPASSMODULE_TAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0xB407840)
#define RPG_CLIENT_BATTLEPASSMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB407760)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDFINISHQUESTS_OFFSET UNITYSDK_OFFSET(0xB40A790)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB40A560)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB40AB20)
#define RPG_CLIENT_BATTLEPASSMODULE__ADDQUESTDATAS_OFFSET UNITYSDK_OFFSET(0xB409A50)
#define RPG_CLIENT_BATTLEPASSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB40B8C0)
#define RPG_CLIENT_BATTLEPASSMODULE__GETCOMINGREWARDDATAS_OFFSET UNITYSDK_OFFSET(0xB406E30)
#define RPG_CLIENT_BATTLEPASSMODULE__INITDISPLAYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xB409600)
#define RPG_CLIENT_BATTLEPASSMODULE__INITFLASHEFFECTITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0xB408A80)
#define RPG_CLIENT_BATTLEPASSMODULE__INITNEWITEMIDSFORPURCHASE_OFFSET UNITYSDK_OFFSET(0xB4088B0)
#define RPG_CLIENT_BATTLEPASSMODULE__INITQUESTDATAS_OFFSET UNITYSDK_OFFSET(0xB409130)
#define RPG_CLIENT_BATTLEPASSMODULE__INITREWARDDATAS_OFFSET UNITYSDK_OFFSET(0xB408F20)
#define RPG_CLIENT_BATTLEPASSMODULE__INITREWARDREDDOTDATAS_OFFSET UNITYSDK_OFFSET(0xB4092B0)
#define RPG_CLIENT_BATTLEPASSMODULE__NOTIFYEXPFULL_OFFSET UNITYSDK_OFFSET(0xB407AB0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONBATTLEPASSINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xB40AE70)
#define RPG_CLIENT_BATTLEPASSMODULE__ONBUYBPLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0xB40B150)
#define RPG_CLIENT_BATTLEPASSMODULE__ONQUESTGETREWARD_OFFSET UNITYSDK_OFFSET(0xB40A720)
#define RPG_CLIENT_BATTLEPASSMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xB40A6C0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONRECHARGESUCCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB40AEF0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONTAKEALLREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB40B0C0)
#define RPG_CLIENT_BATTLEPASSMODULE__ONTAKEBPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB40B030)
#define RPG_CLIENT_BATTLEPASSMODULE__SYNCREWARDSTATUS_OFFSET UNITYSDK_OFFSET(0xB4098C0)
#define RPG_CLIENT_BATTLEPASSMODULE__TRYCLEANLOCALRECORD_OFFSET UNITYSDK_OFFSET(0xB408E80)
#define RPG_CLIENT_BATTLEPASSMODULE__UPDATEBATTLEPASSDATA_OFFSET UNITYSDK_OFFSET(0xB408C50)
#define RPG_CLIENT_BATTLEPASSMODULE__UPDATEFINISHEDQUESTS_OFFSET UNITYSDK_OFFSET(0xB40A140)
#define RPG_CLIENT_BATTLEPASSMODULE__UPDATEREWARDDATAS_OFFSET UNITYSDK_OFFSET(0xB409800)
#define RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB40BBE0)
#define RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB40BC60)
#define RPG_CLIENT_BATTLEPASSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB40BCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassModule_TypeDefinitionIndex = 58842;

	class BattlePassModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewItemIDsForPurchase; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FlashEffectItemIDsForPurchase; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _OldDisplayedLightConeIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* NewDisplayRewardItemIDs; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* _ActivityQuestDatas; // 0x38
		::RPG::Client::BattlePassData _BattlePassData; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _SpecialRewardLevels; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDisplayedLightConeIDs_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* _RewardDatas_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _DisplayedLightConeIDs_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* _WeeklyQuestDatas; // 0x80
		::System::UInt32 _ClosePayOffset; // 0x88
		::System::UInt32 _MaxLevel_k__BackingField; // 0x8C
		::System::Int32 _FinishedWeeklyQuestCount; // 0x90
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

		::System::Void MarkItemHasSeenInPurchase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKITEMHASSEENINPURCHASE_OFFSET))(this, a1);
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

		::System::Boolean IsNewDisplayLightConeIDsSeenForSingle(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_ISNEWDISPLAYLIGHTCONEIDSSEENFORSINGLE_OFFSET))(this, a1);
		}

		::System::Void MarkNewDisplayLightConeIdHasSeenForSingle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKNEWDISPLAYLIGHTCONEIDHASSEENFORSINGLE_OFFSET))(this, a1);
		}

		::System::Void MarkAllNewDisplayLightConeIDsHasSeenForSingle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_MARKALLNEWDISPLAYLIGHTCONEIDSHASSEENFORSINGLE_OFFSET))(this);
		}

		::System::Boolean HasBattlePass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_HASBATTLEPASS_OFFSET))(this);
		}

		::RPG::Client::Product* GetBattlePassProduct(::Enum_3_DB663931210BBC27_16 a1)
		{
			return ((::RPG::Client::Product*(*)(::PVOID, ::Enum_3_DB663931210BBC27_16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSPRODUCT_OFFSET))(this, a1);
		}

		::System::Void PurchaseBattlePass(::Enum_3_DB663931210BBC27_16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_16))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_PURCHASEBATTLEPASS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetComingRewardIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGREWARDIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetComingOptionItemIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETCOMINGOPTIONITEMIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassRewardPointData*>* GetAvailableOptionPoints()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassRewardPointData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETAVAILABLEOPTIONPOINTS_OFFSET))(this);
		}

		::System::UInt32 GetNextSpecialRewardLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETNEXTSPECIALREWARDLEVEL_OFFSET))(this, a1);
		}

		::System::Void BugLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_BUGLEVEL_OFFSET))(this, a1);
		}

		::System::Void TakeReward(::System::UInt32 a1, ::Enum_3_4608E37A1B3D374A_7 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_4608E37A1B3D374A_7, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_TAKEREWARD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TakeAllReward(::System::Collections::Generic::List_1<::Proto::OptionalReward*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::OptionalReward*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_TAKEALLREWARD_OFFSET))(this, a1);
		}

		::System::Boolean HasAvailableReward(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_HASAVAILABLEREWARD_OFFSET))(this, a1);
		}

		::System::Void ReceiveQuest(::System::UInt32 a1, ::RPG::Client::BPQuestType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_RECEIVEQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void ReceiveAllQuests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_RECEIVEALLQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* GetBattlePassQuestDatas(::RPG::Client::BPQuestType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* GetDisplayQuestDatas(::RPG::Client::BPQuestType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETDISPLAYQUESTDATAS_OFFSET))(this, a1);
		}

		::System::Int32 GetBattlePassQuestFinishedCount(::RPG::Client::BPQuestType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BPQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_GETBATTLEPASSQUESTFINISHEDCOUNT_OFFSET))(this, a1);
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

		::System::Void _UpdateBattlePassData(::Class_1_234EC89DAE861A3E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_234EC89DAE861A3E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__UPDATEBATTLEPASSDATA_OFFSET))(this, a1);
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

		::System::Void _UpdateRewardDatas(::Class_1_234EC89DAE861A3E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_234EC89DAE861A3E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__UPDATEREWARDDATAS_OFFSET))(this, a1);
		}

		::System::Void _SyncRewardStatus(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__SYNCREWARDSTATUS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _InitQuestDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__INITQUESTDATAS_OFFSET))(this);
		}

		::System::Void _AddQuestDatas(::RPG::Client::BPQuestType a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BPQuestType, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDQUESTDATAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONQUESTUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnQuestGetReward(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONQUESTGETREWARD_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishedQuests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__UPDATEFINISHEDQUESTS_OFFSET))(this);
		}

		::System::Int32 _AddFinishQuests(::System::Collections::Generic::List_1<::System::UInt32>*& a1, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassQuestData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDFINISHQUESTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* _GetComingRewardDatas(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__GETCOMINGREWARDDATAS_OFFSET))(this, a1);
		}

		::System::Void _NotifyExpFull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__NOTIFYEXPFULL_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattlePassInfoNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONBATTLEPASSINFONOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRechargeSuccNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONRECHARGESUCCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeBpRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONTAKEBPREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeAllRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONTAKEALLREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBuyBpLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE__ONBUYBPLEVELSCRSP_OFFSET))(this, a1, a2);
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

		::System::Void set_RewardDatas(::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattlePassLevelRewardData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_SET_REWARDDATAS_OFFSET))(this, a1);
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

		::System::Void set_MaxLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSMODULE_SET_MAXLEVEL_OFFSET))(this, a1);
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
