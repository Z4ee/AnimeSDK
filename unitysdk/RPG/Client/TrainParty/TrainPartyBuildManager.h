#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_61.h"
#include "unitysdk/System/Object.h"

class Class_1_40DBDC235B2BC821;
class Class_1_964D3E99C6883FD7_26;
class Class_1_98A08031F550F4C1_4;
class Class_1_E7C4009BCC22497A_89;
class Class_1_FFE5B8A52EC38E9C_3;
namespace RPG::Client::TrainParty { class TrainPartyBuildAreaInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildLevelRewardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0xA5F1260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET UNITYSDK_OFFSET(0xA5F3F90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET UNITYSDK_OFFSET(0xA5F3490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5F0330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0xA5F4050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xA5F3270)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xA5F3130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0xA5F1370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0xA5F4590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0xA5F2950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET UNITYSDK_OFFSET(0xA5F2BD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDYNAMICPROPIDBYSLOTID_OFFSET UNITYSDK_OFFSET(0xA5F29C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xA5F4630)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0xA5F47E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET UNITYSDK_OFFSET(0xA5F2C80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET UNITYSDK_OFFSET(0xA5F4A30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xA5F49F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xA5F4A10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xA5F4BB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET UNITYSDK_OFFSET(0xA5F4A90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET UNITYSDK_OFFSET(0xA5F49B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET UNITYSDK_OFFSET(0xA5F4900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET UNITYSDK_OFFSET(0xA5F4510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xA5F49D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET UNITYSDK_OFFSET(0xA5F0EB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA5F4850)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA5F00C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5F30D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA5EFFB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5F48A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5F1490)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xA5F1610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET UNITYSDK_OFFSET(0xA5F0F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA5F3860)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA5F3A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0xA5F1570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET UNITYSDK_OFFSET(0xA5F3E20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0xA5F2840)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET UNITYSDK_OFFSET(0xA5F3680)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xA5F4A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xA5F4A20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET UNITYSDK_OFFSET(0xA5F49C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0xA5F49E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET UNITYSDK_OFFSET(0xA5F32B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0xA5F3BA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET UNITYSDK_OFFSET(0xA5F3CD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCHEROROOMEARLYUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5F0E60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xA5F0410)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET UNITYSDK_OFFSET(0xA5F2E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET UNITYSDK_OFFSET(0xA5F2FB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET UNITYSDK_OFFSET(0xA5F0F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET UNITYSDK_OFFSET(0xA5F0540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET UNITYSDK_OFFSET(0xA5F0EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEMBYID_OFFSET UNITYSDK_OFFSET(0xA5F2550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F4CA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0xA5F2790)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET UNITYSDK_OFFSET(0xA5F0110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET UNITYSDK_OFFSET(0xA5F0AD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xA5F0BF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0xA5F0E10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMIDLIST_OFFSET UNITYSDK_OFFSET(0xA5F05F0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager_TypeDefinitionIndex = 61093;

	class TrainPartyBuildManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* _BuildDIYItemMap; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* _AreaInfoList; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStaticIDSet; // 0x20
		::System::UInt32 _Funds_k__BackingField; // 0x28
		::System::UInt32 _BuildLevel_k__BackingField; // 0x2C
		::System::UInt32 _StarNum_k__BackingField; // 0x30
		::System::UInt32 _Count; // 0x34
		::System::UInt32 _AlreadyTakenRewardMaxLevel; // 0x38
		::System::Boolean _IsHeroRoomEarlyUnlocked; // 0x3C
		::System::UInt32 _BuildProgress_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FFE5B8A52EC38E9C_3* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void SyncHeroRoomEarlyUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCHEROROOMEARLYUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::Void UpdateFunds(::System::UInt32 funds)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET))(this, funds);
		}

		::System::Void UpdateStarNum(::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET))(this, starNum);
		}

		::System::Void UpdateBuildLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET))(this, level);
		}

		::System::Void OnDiyFinish(::Class_1_40DBDC235B2BC821* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_40DBDC235B2BC821*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET))(this, rsp);
		}

		::System::Void OnAreaUnlock(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET))(this, areaID);
		}

		::System::Void OnTakeBuildLevelReward(::Class_1_964D3E99C6883FD7_26* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_964D3E99C6883FD7_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET))(this, rsp);
		}

		::System::Void OnBuildingUpdateNotify(::Class_1_E7C4009BCC22497A_89* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET))(this, notify);
		}

		::System::Void RecordUnlockStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* unlockStaticIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET))(this, unlockStaticIDList);
		}

		::Enum_3_DB663931210BBC27_61 GetBuildStatusByStaticID(::System::UInt32 staticID)
		{
			return ((::Enum_3_DB663931210BBC27_61(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET))(this, staticID);
		}

		::System::UInt32 GetDynamicPropIDBySlotID(::System::UInt32 slotID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDYNAMICPROPIDBYSLOTID_OFFSET))(this, slotID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDiyItemByID(::System::UInt32 id)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET))(this, id);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetNextAreaInfo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* preAreaInfo)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET))(this, preAreaInfo);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetBuildablebAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetNewUnlockedAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET))(this);
		}

		::System::Boolean IsBuildLevelRewardTaken(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET))(this, level);
		}

		::System::Boolean IsAreaUnlocked(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET))(this, areaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETAREAINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetAllAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET))(this);
		}

		::System::Void StartBuildStaticStep(::System::UInt32 areaID, ::System::UInt32 goalID, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo* stepInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET))(this, areaID, goalID, stepInfo);
		}

		::System::Void ConfirmDiy(::System::UInt32 areaID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET))(this, areaID, targetSlot, item);
		}

		::System::Void RemoveDiy(::System::UInt32 areaID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET))(this, areaID, targetSlot);
		}

		::System::Void OnEnterBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void OnExitBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void SwitchBuildCamera(::System::UInt32 areaID, ::System::UInt32 staticItemID, ::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET))(this, areaID, staticItemID, slotID);
		}

		::System::Void SwitchDiyCamera(::System::UInt32 areaID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* slotInfo, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET))(this, areaID, slotInfo, item);
		}

		::System::Void PreviewDiyItem(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET))(this, targetSlot, item);
		}

		::System::Void CancelPreviewDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET))(this);
		}

		::System::Void ClearDiyItemReddot(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET))(this, itemList);
		}

		::System::Void FetchDiyItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET))(this, targetSlot, list);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* targetSlot)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET))(this, targetSlot);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>* GetLevelRewardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyRewardConfigRow* GetLevelRow(::System::UInt32 level)
		{
			return ((::RPG::GameCore::TrainPartyRewardConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET))(this, level);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetBuildAreaInfoByID(::System::UInt32 id)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET))(this, id);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void _SyncBuildProgress(::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET))(this, progress);
		}

		::System::Boolean IsHeroRoomUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET))(this);
		}

		::System::Void _InitAllAreaInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET))(this);
		}

		::System::Void _ResetAreaInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET))(this);
		}

		::System::Void _SyncAreaInfoList(::System::Collections::Generic::IList_1<::Class_1_98A08031F550F4C1_4*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_98A08031F550F4C1_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET))(this, serverInfos);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* _GetAreaInfoByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET))(this, ID);
		}

		::System::Void _SyncDynamicItemIDList(::System::Collections::Generic::IList_1<::System::UInt32>* dynamicIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMIDLIST_OFFSET))(this, dynamicIDList);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* _AddDynamicItemByID(::System::UInt32 dynamicID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEMBYID_OFFSET))(this, dynamicID);
		}

		::System::UInt32 get_Funds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET))(this);
		}

		::System::Void set_Funds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET))(this, value);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET))(this);
		}

		::System::Void set_StarNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_BuildLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET))(this);
		}

		::System::Void set_BuildLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_BuildProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET))(this);
		}

		::System::Void set_BuildProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET))(this, value);
		}

		::RPG::GameCore::ItemRow* get_BuildCoinItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET))(this);
		}

		::System::UInt32 get_DefaultAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET))(this);
		}

		::System::Boolean get_IsInEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsActivityFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET))(this);
		}

		::System::UInt32 get__BuildFundsItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET))(this);
		}
	};
}
