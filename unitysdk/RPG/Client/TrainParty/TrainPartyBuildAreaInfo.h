#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_114;
class Class_1_668FE281FA72D3E8_30;
class Class_1_7FF19F6206AF6DD7_49;
class Class_1_98A08031F550F4C1_8;
class Class_1_D17272E82AE804C2_239;
class Class_1_E1B199B3D0FB256E_1;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildGoalData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0xB337BB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET UNITYSDK_OFFSET(0xB3389F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET UNITYSDK_OFFSET(0xB338B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0xB3385D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET UNITYSDK_OFFSET(0xB338D80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETBLUEPRINTIDLIST_OFFSET UNITYSDK_OFFSET(0xB339260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET UNITYSDK_OFFSET(0xB338D40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET UNITYSDK_OFFSET(0xB338CE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETORIGINALSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xB339090)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0xB3378A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xB339000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB339680)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB338510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB339730)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISSHOWINACTIVITY_OFFSET UNITYSDK_OFFSET(0xB3396A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB339660)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB339710)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB338570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET UNITYSDK_OFFSET(0xB338B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET UNITYSDK_OFFSET(0xB3392E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0xB3393F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET UNITYSDK_OFFSET(0xB3361A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET UNITYSDK_OFFSET(0xB337B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET UNITYSDK_OFFSET(0xB338230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET UNITYSDK_OFFSET(0xB337F40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET UNITYSDK_OFFSET(0xB3381E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB337EF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xB339690)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB339740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB339670)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xB339720)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xB336610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB3351C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xB3394C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB338B90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xB338420)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET UNITYSDK_OFFSET(0xB3374E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET UNITYSDK_OFFSET(0xB338280)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET UNITYSDK_OFFSET(0xB337960)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB335120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB335080)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET UNITYSDK_OFFSET(0xB335440)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0xB335E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xB335800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0xB335500)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildAreaInfo_TypeDefinitionIndex = 68575;

	class TrainPartyBuildAreaInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildGoalData* _CurGoalData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoMap; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _BlueprintIDList; // 0x20
		::System::Collections::Generic::Queue_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoPool; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStepSet; // 0x30
		::System::UInt32 _AreaID_k__BackingField; // 0x38
		::System::Boolean _IsUnlock_k__BackingField; // 0x3C
		::System::Boolean _IsNew_k__BackingField; // 0x3D
		::System::Boolean _IsNewCompleted; // 0x3E
		::System::UInt32 _Progress_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_1_OFFSET))(this, areaID);
		}

		::System::Void Sync(::Class_1_98A08031F550F4C1_8* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void Sync_1(::Class_1_E1B199B3D0FB256E_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_1_OFFSET))(this, info);
		}

		::System::Void UpdateSlotInfo(::System::UInt32 slotId, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* diyItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET))(this, slotId, diyItem);
		}

		::System::Void OnNewGoalUnlock(::Class_1_7FF19F6206AF6DD7_49* goalUnlockInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET))(this, goalUnlockInfo);
		}

		::System::Void AddFinishedStep(::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>* stepInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET))(this, stepInfos);
		}

		::System::Void SetIsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET))(this);
		}

		::System::Void SetIsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* GetSlotInfoByID(::System::UInt32 slotID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET))(this, slotID);
		}

		::System::Void OnUnlockStaticID(::System::UInt32 staticID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET))(this, staticID);
		}

		::System::Void UpdateProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET))(this, value);
		}

		::System::Void OnGetNewBlueprints(::System::Collections::Generic::IList_1<::System::UInt32>* newBlueprintIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET))(this, newBlueprintIDList);
		}

		::System::Void ClearStepRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET))(this);
		}

		::System::Void ClearBlueprintRedDot(::System::UInt32 stepID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET))(this, stepID);
		}

		::System::Void ClearNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET))(this);
		}

		::System::Boolean IsNewCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET))(this);
		}

		::System::Void TriggerCompletePerformance(::System::Action* endCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET))(this, endCallback);
		}

		::RPG::Client::TrainParty::TrainPartyBuildGoalData* GetGoalDataByID(::System::UInt32 goalID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildGoalData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET))(this, goalID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildGoalData* GetCurGoalData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildGoalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET))(this);
		}

		::System::Void FetchSlotInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET))(this, list);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* GetSlotInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* GetOriginalSlotInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETORIGINALSLOTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetBlueprintIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETBLUEPRINTIDLIST_OFFSET))(this);
		}

		::System::Boolean IsNewStepBlueprint(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET))(this, id);
		}

		::System::Boolean IsStepFinished(::System::UInt32 stepID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET))(this, stepID);
		}

		::System::Void _SyncBuildGoal(::Class_1_455008579EB95638_114* buildGoalInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_114*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET))(this, buildGoalInfo);
		}

		::System::Void _SyncStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* staticIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET))(this, staticIDList);
		}

		::System::Void _SyncFinishedStep(::System::Collections::Generic::IList_1<::System::UInt32>* finishedIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET))(this, finishedIDList);
		}

		::System::Void _AddSlotInfoByStaticID(::System::UInt32 staticID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET))(this, staticID);
		}

		::System::Void _SyncSlotInfoList(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_239*>* serverSlotInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_239*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET))(this, serverSlotInfos);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildAreaInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET))(this, other);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _CreateSlotInfo(::System::UInt32 slotID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET))(this, slotID);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyAreaConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsShowInActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISSHOWINACTIVITY_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET))(this, value);
		}
	};
}
