#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"

class Class_1_D17272E82AE804C2_331;
namespace Proto { class ItemList; }
namespace RPG::Client { class ConditionCheckerHandle; }
namespace RPG::Client { class ExpeditionGroupData; }
namespace RPG::Client { class ExpeditionHarvestData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONMODULE_GETALLEXPEDITIONHARVESTDATADICT_OFFSET UNITYSDK_OFFSET(0x1B89B1F0)
#define RPG_CLIENT_EXPEDITIONMODULE_GETALLGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B89AE90)
#define RPG_CLIENT_EXPEDITIONMODULE_GETEXPEDITIONHARVESTDATABYID_OFFSET UNITYSDK_OFFSET(0x1B899F40)
#define RPG_CLIENT_EXPEDITIONMODULE_GETGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0x1B89ADE0)
#define RPG_CLIENT_EXPEDITIONMODULE_GETGROWTHTARGETICONPATH_OFFSET UNITYSDK_OFFSET(0x1B89A880)
#define RPG_CLIENT_EXPEDITIONMODULE_GETGROWTHTARGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B89E920)
#define RPG_CLIENT_EXPEDITIONMODULE_GETHARVESTSTOREHOURS_OFFSET UNITYSDK_OFFSET(0x1B89BBC0)
#define RPG_CLIENT_EXPEDITIONMODULE_GETPREVIEWHARVESTREWARD_OFFSET UNITYSDK_OFFSET(0x1B89B770)
#define RPG_CLIENT_EXPEDITIONMODULE_GETUNLOCKEDGROUPDATAS_OFFSET UNITYSDK_OFFSET(0x1B89B230)
#define RPG_CLIENT_EXPEDITIONMODULE_GETUNLOCKEDHARVESTDATASBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B89B4A0)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_HARVESTREWARDFINISHTIME_OFFSET UNITYSDK_OFFSET(0x1B89ECE0)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_HARVESTSTOREMAXHOURS_OFFSET UNITYSDK_OFFSET(0x1B89BD20)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_HARVESTSTORESHOWREDDOTHOURS_OFFSET UNITYSDK_OFFSET(0x1B89E510)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_HASINPROGRESSEXPEDITIONS_OFFSET UNITYSDK_OFFSET(0x1B89E370)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_INPROGRESSEXPEDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1B89EBC0)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_ISHARVESTREWARDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1B89E470)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_ISHARVESTREWARDSTOREMAX_OFFSET UNITYSDK_OFFSET(0x1B89E3D0)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_LASTTAKEEXPEDITIONREWARDTIME_OFFSET UNITYSDK_OFFSET(0x1B89EBE0)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B89E320)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_NEXTEXPEDITIONHARVERSTTIME_OFFSET UNITYSDK_OFFSET(0x1B89EC00)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_TEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B89EB80)
#define RPG_CLIENT_EXPEDITIONMODULE_GET_UNLOCKEDEXPEDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1B89EBA0)
#define RPG_CLIENT_EXPEDITIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B89DEC0)
#define RPG_CLIENT_EXPEDITIONMODULE_ISREQUIREBYGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x1B89A5E0)
#define RPG_CLIENT_EXPEDITIONMODULE_PREPAREUNLOCKEDCONDITIONDATA_OFFSET UNITYSDK_OFFSET(0x1B89AA90)
#define RPG_CLIENT_EXPEDITIONMODULE_SENDGETDATA_OFFSET UNITYSDK_OFFSET(0x1B89BE80)
#define RPG_CLIENT_EXPEDITIONMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x1B89BE30)
#define RPG_CLIENT_EXPEDITIONMODULE_SENDTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1B89BFD0)
#define RPG_CLIENT_EXPEDITIONMODULE_SENDUPDATEEXPEDITIONS_OFFSET UNITYSDK_OFFSET(0x1B89BF40)
#define RPG_CLIENT_EXPEDITIONMODULE_SET_INPROGRESSEXPEDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1B89EBD0)
#define RPG_CLIENT_EXPEDITIONMODULE_SET_LASTTAKEEXPEDITIONREWARDTIME_OFFSET UNITYSDK_OFFSET(0x1B89EBF0)
#define RPG_CLIENT_EXPEDITIONMODULE_SET_TEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B89EB90)
#define RPG_CLIENT_EXPEDITIONMODULE_SET_UNLOCKEDEXPEDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1B89EBB0)
#define RPG_CLIENT_EXPEDITIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B89C090)
#define RPG_CLIENT_EXPEDITIONMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B89EFE0)
#define RPG_CLIENT_EXPEDITIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89EDC0)
#define RPG_CLIENT_EXPEDITIONMODULE__DISPATCHREWARD_OFFSET UNITYSDK_OFFSET(0x1B89D490)
#define RPG_CLIENT_EXPEDITIONMODULE__GETPREVIEWHARVESTREWARD_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B89F170)
#define RPG_CLIENT_EXPEDITIONMODULE__GETUNLOCKEDGROUPDATAS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B89EFF0)
#define RPG_CLIENT_EXPEDITIONMODULE__ISDEFAULTGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x1B89E630)
#define RPG_CLIENT_EXPEDITIONMODULE__LOADCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B89DF10)
#define RPG_CLIENT_EXPEDITIONMODULE__ONACCEPTMULTIPLEEXPEDITIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1B89D3E0)
#define RPG_CLIENT_EXPEDITIONMODULE__ONGETEXPEDITIONDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B89C2C0)
#define RPG_CLIENT_EXPEDITIONMODULE__ONTAKEMULTIPLEEXPEDITIONREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B89DA00)
#define RPG_CLIENT_EXPEDITIONMODULE__REGISTERWAITEXPEDITIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B89D260)
#define RPG_CLIENT_EXPEDITIONMODULE__REGISTERWAITSTORESHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1B89DA90)
#define RPG_CLIENT_EXPEDITIONMODULE__REGISTERWAITTEAMUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B89CEF0)
#define RPG_CLIENT_EXPEDITIONMODULE__UPDATEGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x1B89E980)
#define RPG_CLIENT_EXPEDITIONMODULE__UPDATEINPROGRESSEXPEDITIONS_OFFSET UNITYSDK_OFFSET(0x1B89C950)
#define RPG_CLIENT_EXPEDITIONMODULE__UPDATELASTTAKEREWARDTIME_OFFSET UNITYSDK_OFFSET(0x1B89CE70)
#define RPG_CLIENT_EXPEDITIONMODULE__UPDATETEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B89C380)
#define RPG_CLIENT_EXPEDITIONMODULE__UPDATEUNLOCKEDEXPEDITIONS_OFFSET UNITYSDK_OFFSET(0x1B89C440)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionModule_TypeDefinitionIndex = 64028;

	class ExpeditionModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Single* StaticGet_CheckerHandleRefreshTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionModule_TypeDefinitionIndex)->GetStaticField(0x14BA0);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _DefaultGrowthTargeExpeditionIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionHarvestData*>* _ExpeditionHarvestDatas; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedExpeditionIDs_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionGroupData*>* _ExpeditionGroupDatas; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _CachedGrowthTargetMaterialIDs; // 0x30
		::System::String* _CachedGrowthTargetAvatarIcon; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InProgressExpeditionIDs_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionCheckerHandle*>* _TeamUnlockCheckHandlers; // 0x48
		::RPG::Client::DateTimePro _LastTakeExpeditionRewardTime_k__BackingField; // 0x50
		::System::UInt32 _CachedGrowthTargetID; // 0x58
		::System::Int32 _WaitHarvestTimerID; // 0x5C
		::System::UInt32 _TeamCount_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__CCTOR_OFFSET))();
		}

		::RPG::Client::Promises::IPromise* PrepareUnlockedConditionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_PREPAREUNLOCKEDCONDITIONDATA_OFFSET))(this);
		}

		::RPG::Client::ExpeditionGroupData* GetGroupDataById(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETGROUPDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionHarvestData* GetExpeditionHarvestDataById(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionHarvestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETEXPEDITIONHARVESTDATABYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllGroupIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETALLGROUPIDS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionHarvestData*>* GetAllExpeditionHarvestDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionHarvestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETALLEXPEDITIONHARVESTDATADICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionGroupData*>* GetUnlockedGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETUNLOCKEDGROUPDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionHarvestData*>* GetUnlockedHarvestDatasByGroupId(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionHarvestData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETUNLOCKEDHARVESTDATASBYGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetPreviewHarvestReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETPREVIEWHARVESTREWARD_OFFSET))(this);
		}

		::System::Int32 GetHarvestStoreHours()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETHARVESTSTOREHOURS_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Void SendGetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SENDGETDATA_OFFSET))(this);
		}

		::System::Void SendUpdateExpeditions(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SENDUPDATEEXPEDITIONS_OFFSET))(this, a1);
		}

		::System::Void SendTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SENDTAKEREWARD_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetExpeditionDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__ONGETEXPEDITIONDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAcceptMultipleExpeditionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__ONACCEPTMULTIPLEEXPEDITIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeMultipleExpeditionRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__ONTAKEMULTIPLEEXPEDITIONREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateTeamCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__UPDATETEAMCOUNT_OFFSET))(this, a1);
		}

		::System::Void _UpdateUnlockedExpeditions(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__UPDATEUNLOCKEDEXPEDITIONS_OFFSET))(this, a1);
		}

		::System::Void _UpdateInProgressExpeditions(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_331*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_331*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__UPDATEINPROGRESSEXPEDITIONS_OFFSET))(this, a1);
		}

		::System::Void _UpdateLastTakeRewardTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__UPDATELASTTAKEREWARDTIME_OFFSET))(this, a1);
		}

		::System::Void _DispatchReward(::System::Collections::Generic::IEnumerable_1<::Proto::ItemList*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__DISPATCHREWARD_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _LoadConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__LOADCONFIGS_OFFSET))(this);
		}

		::System::Void _RegisterWaitTeamUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__REGISTERWAITTEAMUNLOCK_OFFSET))(this);
		}

		::System::Void _RegisterWaitExpeditionUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__REGISTERWAITEXPEDITIONUNLOCK_OFFSET))(this);
		}

		::System::Void _RegisterWaitStoreShowReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__REGISTERWAITSTORESHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsRequireByGrowthTarget(::RPG::Client::ExpeditionHarvestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionHarvestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_ISREQUIREBYGROWTHTARGET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGrowthTargetMaterial()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETGROWTHTARGETMATERIAL_OFFSET))(this);
		}

		::System::String* GetGrowthTargetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GETGROWTHTARGETICONPATH_OFFSET))(this);
		}

		::System::Void _UpdateGrowthTarget(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__UPDATEGROWTHTARGET_OFFSET))(this, a1);
		}

		::System::Boolean _IsDefaultGrowthTarget(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__ISDEFAULTGROWTHTARGET_OFFSET))(this, a1);
		}

		::System::UInt32 get_TeamCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_TEAMCOUNT_OFFSET))(this);
		}

		::System::Void set_TeamCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SET_TEAMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxTeamCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_MAXTEAMCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockedExpeditionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_UNLOCKEDEXPEDITIONIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedExpeditionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SET_UNLOCKEDEXPEDITIONIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_InProgressExpeditionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_INPROGRESSEXPEDITIONIDS_OFFSET))(this);
		}

		::System::Void set_InProgressExpeditionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SET_INPROGRESSEXPEDITIONIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInProgressExpeditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_HASINPROGRESSEXPEDITIONS_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_LastTakeExpeditionRewardTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_LASTTAKEEXPEDITIONREWARDTIME_OFFSET))(this);
		}

		::System::Void set_LastTakeExpeditionRewardTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_SET_LASTTAKEEXPEDITIONREWARDTIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_NextExpeditionHarverstTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_NEXTEXPEDITIONHARVERSTTIME_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_HarvestRewardFinishTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_HARVESTREWARDFINISHTIME_OFFSET))(this);
		}

		::System::Int32 get_HarvestStoreMaxHours()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_HARVESTSTOREMAXHOURS_OFFSET))(this);
		}

		::System::Boolean get_IsHarvestRewardStoreMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_ISHARVESTREWARDSTOREMAX_OFFSET))(this);
		}

		::System::Int32 get_HarvestStoreShowReddotHours()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_HARVESTSTORESHOWREDDOTHOURS_OFFSET))(this);
		}

		::System::Boolean get_IsHarvestRewardShowReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE_GET_ISHARVESTREWARDSHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean _GetUnlockedGroupDatas_b__5_0(::RPG::Client::ExpeditionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__GETUNLOCKEDGROUPDATAS_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPreviewHarvestReward_b__7_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONMODULE__GETPREVIEWHARVESTREWARD_B__7_0_OFFSET))(this, a1);
		}
	};
}
