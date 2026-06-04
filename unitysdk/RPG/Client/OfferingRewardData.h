#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OfferingRewardUnlockState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_1212C47FC4BC6471;
namespace RPG::Client { class OfferingUIData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace RPG::GameCore { class OfferingTypeConfigRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OFFERINGREWARDDATA_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0xC2F18C0)
#define RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC2F12A0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETALLREWARDROW_OFFSET UNITYSDK_OFFSET(0xC2F2520)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET UNITYSDK_OFFSET(0xC2F2C40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLIMITLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F2880)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETLONGTAILREWARDNEEDNUM_OFFSET UNITYSDK_OFFSET(0xC2F3650)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F2F60)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xC2F2DE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3730)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC2F1690)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETTOTALITEMCOST_OFFSET UNITYSDK_OFFSET(0xC2F29E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xC2F3200)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xC2F3100)
#define RPG_CLIENT_OFFERINGREWARDDATA_GETUPGRADEUNLOCKHINTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F2A80)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xC2F24A0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_CURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F2BE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISAUTOOFFER_OFFSET UNITYSDK_OFFSET(0xC2F3BE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xC2F4350)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3E20)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILCANSUBMIT_OFFSET UNITYSDK_OFFSET(0xC2F1D90)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILLIMIT_OFFSET UNITYSDK_OFFSET(0xC2F3FC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_LONGTAILREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F2330)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F2210)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_MAXSUBMITNUM_OFFSET UNITYSDK_OFFSET(0xC2F41F0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_NEEDNUM_OFFSET UNITYSDK_OFFSET(0xC2F2290)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0xC2F3E40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC2F4080)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC2F1D20)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDITEMID_OFFSET UNITYSDK_OFFSET(0xC2F3F40)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xC2F4040)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xC2F4060)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0xC2F3E10)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET UNITYSDK_OFFSET(0xC2F4370)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xC2F3EC0)
#define RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET UNITYSDK_OFFSET(0xC2F1CB0)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC2F16E0)
#define RPG_CLIENT_OFFERINGREWARDDATA_HASLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0xC2F2100)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISALLLEVELREWARDGOT_OFFSET UNITYSDK_OFFSET(0xC2F36D0)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC2F1630)
#define RPG_CLIENT_OFFERINGREWARDDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC2F1AE0)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESHAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3A90)
#define RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xC2F1560)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0xC2F4360)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3E30)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xC2F4050)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET UNITYSDK_OFFSET(0xC2F4070)
#define RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET UNITYSDK_OFFSET(0xC2F4380)
#define RPG_CLIENT_OFFERINGREWARDDATA_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xC2F0220)
#define RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC2F0B60)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xC2F1DF0)
#define RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F23E0)
#define RPG_CLIENT_OFFERINGREWARDDATA__CANGETSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F37D0)
#define RPG_CLIENT_OFFERINGREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC2F0B00)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETAUTOOFFERSEENGOTREWARDLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3840)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETCURRENTVERSIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3C60)
#define RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F3000)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0xC2F13C0)
#define RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET UNITYSDK_OFFSET(0xC2F1430)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingRewardData_TypeDefinitionIndex = 62073;

	class OfferingRewardData : public ::System::Object
	{
	public:
		::RPG::GameCore::OfferingTypeConfigRow* _Row; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AlreadyTakenRewardLevelSet; // 0x18
		::Il2CppArray<::System::UInt32>* _UseSeenGotRewardLevelOfferingIDs; // 0x20
		::RPG::Client::OfferingUIData* _UIData_k__BackingField; // 0x28
		::System::UInt32 _MaxSubmitNum; // 0x30
		::System::UInt32 _Level_k__BackingField; // 0x34
		::System::Boolean _IsUnlockIDOpened; // 0x38
		::System::Boolean _IsShowUpgradeHint_k__BackingField; // 0x39
		::System::UInt32 _SubmittedNum_k__BackingField; // 0x3C
		::System::UInt32 _TotalSubmittedNum_k__BackingField; // 0x40
		::System::UInt32 _CurrentVersionMaxLevel; // 0x44
		::System::UInt32 _ID; // 0x48

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::OfferingRewardData* Clone(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_CLONE_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_1212C47FC4BC6471* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_REFRESH_OFFSET))(this);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_ISREWARDTAKEN_OFFSET))(this, a1);
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

		::System::Boolean HasAnyRewardCanTake(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_HASANYREWARDCANTAKE_OFFSET))(this, a1);
		}

		::System::Boolean TakeAllAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEALLAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void TakeRewardByLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_TAKEREWARDBYLEVEL_OFFSET))(this, a1);
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

		::System::UInt32 GetLevelLimitByPhaseID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETLEVELLIMITBYPHASEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelLimit(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetNextLevelLimitPastLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GETNEXTLEVELLIMITPASTLEVEL_OFFSET))(this, a1);
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

		::System::Void _RefreshLevel(::Class_1_1212C47FC4BC6471* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1212C47FC4BC6471*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHLEVEL_OFFSET))(this, a1);
		}

		::System::Void _RefreshTakenRewardLevelSet(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__REFRESHTAKENREWARDLEVELSET_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNextUnlockIDLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA__GETNEXTUNLOCKIDLEVEL_OFFSET))(this, a1);
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

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_LEVEL_OFFSET))(this, a1);
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

		::System::Void set_SubmittedNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_SUBMITTEDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalSubmittedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_TOTALSUBMITTEDNUM_OFFSET))(this);
		}

		::System::Void set_TotalSubmittedNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_TOTALSUBMITTEDNUM_OFFSET))(this, a1);
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

		::System::Void set_IsShowUpgradeHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_ISSHOWUPGRADEHINT_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingUIData* get_UIData()
		{
			return ((::RPG::Client::OfferingUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET_UIDATA_OFFSET))(this);
		}

		::System::Void set_UIData(::RPG::Client::OfferingUIData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingUIData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_SET_UIDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::OfferingLevelConfigRow* get__NextLevelConfigRow()
		{
			return ((::RPG::GameCore::OfferingLevelConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGREWARDDATA_GET__NEXTLEVELCONFIGROW_OFFSET))(this);
		}
	};
}
