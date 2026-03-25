#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityBenefitDailyLuckyList.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/TimeSpan.h"

namespace RPG::Client { class ActivityBenefitDailyInfo; }
namespace RPG::Client { class ActivityBenefitDailyPlayerData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYBENEFITMODULE_CHECKTIMEMARK_OFFSET UNITYSDK_OFFSET(0x8EF2190)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x8EF3250)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGNEWLUCKLISTPAGE_OFFSET UNITYSDK_OFFSET(0x8EF3190)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDATELISTOFCURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x8EF0240)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDRAWTIMESTRINGBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1FB0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETFIRSTSELECTTABINDEX_OFFSET UNITYSDK_OFFSET(0x8EF0350)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETGRANDREWARDDATE_OFFSET UNITYSDK_OFFSET(0x8EF17D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETLUCKYKOIINFOLIST_OFFSET UNITYSDK_OFFSET(0x8EF22D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETPLAYERDATABYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1550)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETREWARDLISTBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1610)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLCHOOSEENDBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1920)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLREWARDREVEALBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1E70)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSPECIALNUMBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1440)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_LATESTLUCKYLISTDATE_OFFSET UNITYSDK_OFFSET(0x8EF32F0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_REFRESHINGBYTIME_OFFSET UNITYSDK_OFFSET(0x8EF32D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_WARMUPREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8EF32B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_INITDATAREFRESHSEQUENCE_OFFSET UNITYSDK_OFFSET(0x8EF0AC0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8EEF4A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8EF3030)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEAFTERCHOOSE_OFFSET UNITYSDK_OFFSET(0x8EF1100)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEBEGIN_OFFSET UNITYSDK_OFFSET(0x8EF1030)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x8EF0E80)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATELOCKED_OFFSET UNITYSDK_OFFSET(0x8EF0C30)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALDELAYED_OFFSET UNITYSDK_OFFSET(0x8EF11D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALED_OFFSET UNITYSDK_OFFSET(0x8EF12A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEVALIDTOCHOOSE_OFFSET UNITYSDK_OFFSET(0x8EF1370)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEWAITING_OFFSET UNITYSDK_OFFSET(0x8EF0D00)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARDBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF2E90)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x8EF2C50)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISFIRSTTABINDEXSELECTED_OFFSET UNITYSDK_OFFSET(0x8EF0930)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_JOINBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF28A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_LATESTLUCKYLISTDATE_OFFSET UNITYSDK_OFFSET(0x8EF3300)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_REFRESHINGBYTIME_OFFSET UNITYSDK_OFFSET(0x8EF32E0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_WARMUPREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x8EF32C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_TAKEREWARDBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF2960)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EEF540)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EEF580)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EF3310)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLCHOOSEENDBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1980)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLREWARDREVEALBYDATE_OFFSET UNITYSDK_OFFSET(0x8EF1ED0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__INITDATAREFRESHSEQUENCE_B__8_0_OFFSET UNITYSDK_OFFSET(0x8EF3410)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ONGETBENEFITACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0x8EEF630)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ONTAKEBENEFITACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x8EEFCA0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__PROCESSREMAINTIMERSTRING_OFFSET UNITYSDK_OFFSET(0x8EF1A60)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8EF3420)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EF34B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EF3510)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitModule_TypeDefinitionIndex = 49796;

	class ActivityBenefitModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyPlayerData*>* _DailyPlayerDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>* _DailyInfoDict; // 0x18
		::System::Boolean _WarmupRewardTaken_k__BackingField; // 0x20
		::System::Boolean _WaitingDataRefresh; // 0x21
		::System::Boolean _ExistingData; // 0x22
		::System::Boolean _RefreshingByTime_k__BackingField; // 0x23
		::System::UInt32 _LatestLuckyListDate_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetBenefitActivityInfo(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__ONGETBENEFITACTIVITYINFO_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnTakeBenefitActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__ONTAKEBENEFITACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void GetDateListOfCurrentSeason(::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDATELISTOFCURRENTSEASON_OFFSET))(this, forceRefresh);
		}

		::System::UInt32 GetFirstSelectTabIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETFIRSTSELECTTABINDEX_OFFSET))(this);
		}

		::System::Boolean IsFirstTabIndexSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISFIRSTTABINDEXSELECTED_OFFSET))(this);
		}

		::System::Void InitDataRefreshSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_INITDATAREFRESHSEQUENCE_OFFSET))(this);
		}

		::System::Boolean IsCurrentDateLocked(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATELOCKED_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateWaiting(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEWAITING_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateCompleted(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATECOMPLETED_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateBegin(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEBEGIN_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateAfterChoose(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEAFTERCHOOSE_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateRewardRevealDelayed(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALDELAYED_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateRewardRevealed(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALED_OFFSET))(this, date);
		}

		::System::Boolean IsCurrentDateValidToChoose(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEVALIDTOCHOOSE_OFFSET))(this, date);
		}

		::System::UInt32 GetSpecialNumByDate(::System::UInt32 date)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSPECIALNUMBYDATE_OFFSET))(this, date);
		}

		::RPG::Client::ActivityBenefitDailyPlayerData* GetPlayerDataByDate(::System::UInt32 date)
		{
			return ((::RPG::Client::ActivityBenefitDailyPlayerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETPLAYERDATABYDATE_OFFSET))(this, date);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardListByDate(::System::UInt32 date)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETREWARDLISTBYDATE_OFFSET))(this, date);
		}

		::System::UInt32 GetGrandRewardDate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETGRANDREWARDDATE_OFFSET))(this);
		}

		::System::String* GetShowTimeTillChooseEndByDate(::System::UInt32 date)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLCHOOSEENDBYDATE_OFFSET))(this, date);
		}

		::System::String* GetShowTimeTillRewardRevealByDate(::System::UInt32 date)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLREWARDREVEALBYDATE_OFFSET))(this, date);
		}

		::System::String* GetDrawTimeStringByDate(::System::UInt32 date)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDRAWTIMESTRINGBYDATE_OFFSET))(this, date);
		}

		::System::Void CheckTimeMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_CHECKTIMEMARK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitDailyLuckyList>* GetLuckyKoiInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitDailyLuckyList>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETLUCKYKOIINFOLIST_OFFSET))(this);
		}

		::System::Void JoinByDate(::System::UInt32 date)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_JOINBYDATE_OFFSET))(this, date);
		}

		::System::Void TakeRewardByDate(::Il2CppArray<::System::UInt32>* dates, ::System::Boolean takeInitialReward)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_TAKEREWARDBYDATE_OFFSET))(this, dates, takeInitialReward);
		}

		::System::Boolean IsExistingUntakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARD_OFFSET))(this);
		}

		::System::Boolean IsExistingUntakenRewardByDate(::System::UInt32 date)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARDBYDATE_OFFSET))(this, date);
		}

		::System::Boolean IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISALLREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean ExistingNewLuckListPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGNEWLUCKLISTPAGE_OFFSET))(this);
		}

		::System::Boolean ExistingAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGAVAILABLEREWARD_OFFSET))(this);
		}

		::System::TimeSpan _GetTimeTillChooseEndByDate(::System::UInt32 date)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLCHOOSEENDBYDATE_OFFSET))(this, date);
		}

		::System::TimeSpan _GetTimeTillRewardRevealByDate(::System::UInt32 date)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLREWARDREVEALBYDATE_OFFSET))(this, date);
		}

		::System::String* _ProcessRemainTimerString(::System::TimeSpan remainTime)
		{
			return ((::System::String*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__PROCESSREMAINTIMERSTRING_OFFSET))(this, remainTime);
		}

		::System::Boolean get_WarmupRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_WARMUPREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_WarmupRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_WARMUPREWARDTAKEN_OFFSET))(this, value);
		}

		::System::Boolean get_RefreshingByTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_REFRESHINGBYTIME_OFFSET))(this);
		}

		::System::Void set_RefreshingByTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_REFRESHINGBYTIME_OFFSET))(this, value);
		}

		::System::UInt32 get_LatestLuckyListDate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_LATESTLUCKYLISTDATE_OFFSET))(this);
		}

		::System::Void set_LatestLuckyListDate(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_LATESTLUCKYLISTDATE_OFFSET))(this, value);
		}

		::System::Void _InitDataRefreshSequence_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__INITDATAREFRESHSEQUENCE_B__8_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
