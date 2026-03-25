#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OfferingRewardUnlockState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7F77CD37698B087D_1;
namespace RPG::Client { class OfferingUIData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace RPG::GameCore { class OfferingTypeConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x9E96810)
#define RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x9E961D0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET UNITYSDK_OFFSET(0x9E97410)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET UNITYSDK_OFFSET(0x9E97AB0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x9E976F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET UNITYSDK_OFFSET(0x9E98510)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET UNITYSDK_OFFSET(0x9E97DD0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x9E97C50)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E985F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9E965E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET UNITYSDK_OFFSET(0x9E97850)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x9E98070)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x9E97F70)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9E978F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x9E97390)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9E97A50)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET UNITYSDK_OFFSET(0x9E98AA0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x9E991D0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9E98CA0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET UNITYSDK_OFFSET(0x9E96CE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET UNITYSDK_OFFSET(0x9E98E40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E97220)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9E97100)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET UNITYSDK_OFFSET(0x9E99070)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET UNITYSDK_OFFSET(0x9E97180)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x9E98CC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9E98F00)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9E96C70)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET UNITYSDK_OFFSET(0x9E98DC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x9E98EC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x9E98EE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9E98C90)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET UNITYSDK_OFFSET(0x9E991F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x9E98D40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET UNITYSDK_OFFSET(0x9E96C00)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x9E96630)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0x9E96FF0)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET UNITYSDK_OFFSET(0x9E98590)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9E96580)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9E96A30)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E98960)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9E964A0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x9E991E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9E98CB0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x9E98ED0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0x9E98EF0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET UNITYSDK_OFFSET(0x9E99200)
#define RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0x9E952D0)
#define RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9E95AC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x9E96D40)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET UNITYSDK_OFFSET(0x9E972D0)
#define RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E98690)
#define RPG_CLIENT_OFFERINGREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E95A50)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E98700)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9E98B20)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET UNITYSDK_OFFSET(0x9E97E70)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x9E96300)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET UNITYSDK_OFFSET(0x9E96370)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingRewardData_TypeDefinitionIndex = 54003;

	class OfferingRewardData : public ::System::Object
	{
	public:
		::RPG::Client::OfferingUIData* _UIData_k__BackingField; // 0x10
		::RPG::GameCore::OfferingTypeConfigRow* _Row; // 0x18
		::Il2CppArray<::System::UInt32>* _UseSeenGotRewardLevelOfferingIDs; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AlreadyTakenRewardLevelSet; // 0x28
		::System::UInt32 _CurrentVersionMaxLevel; // 0x30
		::System::UInt32 _Level_k__BackingField; // 0x34
		::System::UInt32 _MaxSubmitNum; // 0x38
		::System::UInt32 _TotalSubmittedNum_k__BackingField; // 0x3C
		::System::UInt32 _ID; // 0x40
		::System::UInt32 _SubmittedNum_k__BackingField; // 0x44
		::System::Boolean _IsShowUpgradeHint_k__BackingField; // 0x48
		::System::Boolean _IsUnlockIDOpened; // 0x49

		::System::Void _ctor(::System::UInt32 typeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__CTOR_OFFSET))(this, typeID);
		}

		static ::RPG::Client::OfferingRewardData* Clone(::RPG::Client::OfferingRewardData* data)
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET))(data);
		}

		::System::Void Sync(::Class_1_7F77CD37698B087D_1* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F77CD37698B087D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET))(this);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET))(this, level);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET))(this);
		}

		::System::Boolean ShouldShowMapShortCutHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET))(this);
		}

		::System::Boolean CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake(::System::Boolean includeLongTail)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET))(this, includeLongTail);
		}

		::System::Boolean TakeAllAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void TakeRewardByLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET))(this, level);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::OfferingLevelConfigRow*>* GetAllRewardRow()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::OfferingLevelConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET))(this);
		}

		::System::UInt32 GetLimitLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetTotalItemCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET))(this);
		}

		::System::UInt32 GetUpgradeUnlockHintMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetLevelLimitByPhaseID(::System::UInt32 phaseID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET))(this, phaseID);
		}

		::System::UInt32 GetNextLevelLimit(::System::UInt32 startLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET))(this, startLevel);
		}

		::System::UInt32 GetNextLevelLimitPastLevel(::System::UInt32 startLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET))(this, startLevel);
		}

		::RPG::Client::OfferingRewardUnlockState GetUnlockState()
		{
			return ((::RPG::Client::OfferingRewardUnlockState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET))(this);
		}

		::RPG::Client::TextID GetUnlockHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET))(this);
		}

		::System::UInt32 GetLongTailRewardNeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET))(this);
		}

		::System::Boolean HasLongTailReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET))(this);
		}

		::System::Boolean IsAllLevelRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET))(this);
		}

		::System::UInt32 GetSeenGotRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Void RefreshAutoOfferSeenGotRewardLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Boolean _CanGetSeenGotRewardLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::UInt32 _GetAutoOfferSeenGotRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET))(this);
		}

		::System::Void _RefreshLevel(::Class_1_7F77CD37698B087D_1* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F77CD37698B087D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET))(this, serverInfo);
		}

		::System::Void _RefreshTakenRewardLevelSet(::System::Collections::Generic::IList_1<::System::UInt32>* takenRewardLevelList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET))(this, takenRewardLevelList);
		}

		::System::UInt32 _GetNextUnlockIDLevel(::System::UInt32 startLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET))(this, startLevel);
		}

		::System::UInt32 _GetCurrentVersionMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET))(this);
		}

		::RPG::GameCore::OfferingTypeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::OfferingTypeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_OfferingType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET))(this);
		}

		::System::UInt32 get_LongTailLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_SubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_SubmittedNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalSubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_TotalSubmittedNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_LongTailRewardLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Boolean get_IsAutoOffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET))(this);
		}

		::System::UInt32 get_NeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_MaxSubmitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET))(this);
		}

		::System::UInt32 get_CurrentVersionMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_LongTailCanSubmit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET))(this);
		}

		::System::Boolean get_IsShowUpgradeHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET))(this);
		}

		::System::Void set_IsShowUpgradeHint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET))(this, value);
		}

		::RPG::Client::OfferingUIData* get_UIData()
		{
			return ((::RPG::Client::OfferingUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET))(this);
		}

		::System::Void set_UIData(::RPG::Client::OfferingUIData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingUIData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::OfferingLevelConfigRow* get__NextLevelConfigRow()
		{
			return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET))(this);
		}
	};
}
