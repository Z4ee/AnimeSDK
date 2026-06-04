#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_114;
class Class_1_668FE281FA72D3E8_30;
class Class_1_7FF19F6206AF6DD7_54;
class Class_1_98A08031F550F4C1_5;
class Class_1_D17272E82AE804C2_253;
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

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0xCA92800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET UNITYSDK_OFFSET(0xCA93630)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET UNITYSDK_OFFSET(0xCA93740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0xCA93250)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET UNITYSDK_OFFSET(0xCA939C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETBLUEPRINTIDLIST_OFFSET UNITYSDK_OFFSET(0xCA93FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET UNITYSDK_OFFSET(0xCA93980)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET UNITYSDK_OFFSET(0xCA93920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETORIGINALSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xCA93D20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0xCA92520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xCA93C90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xCA943C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xCA93190)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xCA94470)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISSHOWINACTIVITY_OFFSET UNITYSDK_OFFSET(0xCA943E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCA943A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCA94450)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCA931F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET UNITYSDK_OFFSET(0xCA93780)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET UNITYSDK_OFFSET(0xCA94020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0xCA94130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET UNITYSDK_OFFSET(0xCA90E80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET UNITYSDK_OFFSET(0xCA92750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET UNITYSDK_OFFSET(0xCA92F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET UNITYSDK_OFFSET(0xCA92BA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET UNITYSDK_OFFSET(0xCA92EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCA92B50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xCA943D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xCA94480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCA943B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCA94460)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xCA912F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCA8FE70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xCA94200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xCA937D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xCA930C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET UNITYSDK_OFFSET(0xCA92120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET UNITYSDK_OFFSET(0xCA92F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET UNITYSDK_OFFSET(0xCA925B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCA8FDD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8FD30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET UNITYSDK_OFFSET(0xCA90160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0xCA90B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xCA90520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0xCA90220)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildAreaInfo_TypeDefinitionIndex = 69387;

	class TrainPartyBuildAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStepSet; // 0x10
		::System::Collections::Generic::IList_1<::System::UInt32>* _BlueprintIDList; // 0x18
		::RPG::Client::TrainParty::TrainPartyBuildGoalData* _CurGoalData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoMap; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoPool; // 0x30
		::System::UInt32 _AreaID_k__BackingField; // 0x38
		::System::UInt32 _Progress_k__BackingField; // 0x3C
		::System::Boolean _IsUnlock_k__BackingField; // 0x40
		::System::Boolean _IsNewCompleted; // 0x41
		::System::Boolean _IsNew_k__BackingField; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_98A08031F550F4C1_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_E1B199B3D0FB256E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void UpdateSlotInfo(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void OnNewGoalUnlock(::Class_1_7FF19F6206AF6DD7_54* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET))(this, a1);
		}

		::System::Void AddFinishedStep(::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_668FE281FA72D3E8_30*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET))(this, a1);
		}

		::System::Void SetIsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET))(this);
		}

		::System::Void SetIsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* GetSlotInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET))(this, a1);
		}

		::System::Void OnUnlockStaticID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET))(this, a1);
		}

		::System::Void UpdateProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET))(this, a1);
		}

		::System::Void OnGetNewBlueprints(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET))(this, a1);
		}

		::System::Void ClearStepRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET))(this);
		}

		::System::Void ClearBlueprintRedDot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET))(this, a1);
		}

		::System::Void ClearNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET))(this);
		}

		::System::Boolean IsNewCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET))(this);
		}

		::System::Void TriggerCompletePerformance(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildGoalData* GetGoalDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildGoalData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildGoalData* GetCurGoalData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildGoalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET))(this);
		}

		::System::Void FetchSlotInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET))(this, a1);
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

		::System::Boolean IsNewStepBlueprint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET))(this, a1);
		}

		::System::Boolean IsStepFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET))(this, a1);
		}

		::System::Void _SyncBuildGoal(::Class_1_455008579EB95638_114* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_114*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET))(this, a1);
		}

		::System::Void _SyncStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncFinishedStep(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET))(this, a1);
		}

		::System::Void _AddSlotInfoByStaticID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET))(this, a1);
		}

		::System::Void _SyncSlotInfoList(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_253*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_253*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET))(this, a1);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildAreaInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _CreateSlotInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET))(this, a1);
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

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET))(this, a1);
		}
	};
}
