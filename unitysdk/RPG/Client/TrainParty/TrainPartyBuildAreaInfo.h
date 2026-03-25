#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_27;
class Class_1_3C58D309C7A040F5_43;
class Class_1_5FEFAED860528596_106;
class Class_1_98A08031F550F4C1_4;
class Class_1_FA4F4A67B1C04320_930;
namespace RPG::Client::TrainParty { class TrainPartyBuildGoalData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0xA5EC500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARBLUEPRINTREDDOT_OFFSET UNITYSDK_OFFSET(0xA5ED330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARNEWSTATUS_OFFSET UNITYSDK_OFFSET(0xA5ED440)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0xA5ECF20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_FETCHSLOTINFOS_OFFSET UNITYSDK_OFFSET(0xA5ED6C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETBLUEPRINTIDLIST_OFFSET UNITYSDK_OFFSET(0xA5ED9D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETCURGOALDATA_OFFSET UNITYSDK_OFFSET(0xA5ED680)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETGOALDATABYID_OFFSET UNITYSDK_OFFSET(0xA5ED620)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0xA5EC190)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GETSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xA5ED940)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA5EDEB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA5ECE60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA5EDEF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5EDE90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA5EDED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA5ECEC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA5ED480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISNEWSTEPBLUEPRINT_OFFSET UNITYSDK_OFFSET(0xA5EDA50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ISSTEPFINISHED_OFFSET UNITYSDK_OFFSET(0xA5EDB60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONGETNEWBLUEPRINTS_OFFSET UNITYSDK_OFFSET(0xA5EBBC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5EC450)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONUNLOCKSTATICID_OFFSET UNITYSDK_OFFSET(0xA5ECB80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_RESET_OFFSET UNITYSDK_OFFSET(0xA5EC890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISNEW_OFFSET UNITYSDK_OFFSET(0xA5ECB30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SETISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5EC840)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xA5EDEC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA5EDF00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5EDEA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA5EDEE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA5EADD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xA5EDD10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_TRIGGERCOMPLETEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5ED4D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA5ECD70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET UNITYSDK_OFFSET(0xA5EC030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__ADDSLOTINFOBYSTATICID_OFFSET UNITYSDK_OFFSET(0xA5ECBD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CREATESLOTINFO_OFFSET UNITYSDK_OFFSET(0xA5EDC30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA5EAD30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EAC90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET UNITYSDK_OFFSET(0xA5EB050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCFINISHEDSTEP_OFFSET UNITYSDK_OFFSET(0xA5EB860)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET UNITYSDK_OFFSET(0xA5EB110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0xA5EB560)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildAreaInfo_TypeDefinitionIndex = 61088;

	class TrainPartyBuildAreaInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _BlueprintIDList; // 0x10
		::RPG::Client::TrainParty::TrainPartyBuildGoalData* _CurGoalData; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStepSet; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoMap; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*>* _SlotInfoPool; // 0x30
		::System::Boolean _IsNew_k__BackingField; // 0x38
		::System::Boolean _IsNewCompleted; // 0x39
		::System::Boolean _IsUnlock_k__BackingField; // 0x3A
		::System::UInt32 _Progress_k__BackingField; // 0x3C
		::System::UInt32 _AreaID_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__CTOR_1_OFFSET))(this, areaID);
		}

		::System::Void Sync(::Class_1_98A08031F550F4C1_4* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void UpdateSlotInfo(::Class_1_FA4F4A67B1C04320_930* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_930*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_UPDATESLOTINFO_OFFSET))(this, info);
		}

		::System::Void OnNewGoalUnlock(::Class_1_3C58D309C7A040F5_43* goalUnlockInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ONNEWGOALUNLOCK_OFFSET))(this, goalUnlockInfo);
		}

		::System::Void AddFinishedStep(::System::Collections::Generic::IList_1<::Class_1_35B19D34B208E77E_27*>* stepInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_35B19D34B208E77E_27*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO_ADDFINISHEDSTEP_OFFSET))(this, stepInfos);
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

		::System::Void _SyncBuildGoal(::Class_1_5FEFAED860528596_106* buildGoalInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_106*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCBUILDGOAL_OFFSET))(this, buildGoalInfo);
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

		::System::Void _SyncSlotInfoList(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_930*>* serverSlotInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_930*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDAREAINFO__SYNCSLOTINFOLIST_OFFSET))(this, serverSlotInfos);
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
