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

#define RPG_CLIENT_ACTIVITYBENEFITMODULE_CHECKTIMEMARK_OFFSET UNITYSDK_OFFSET(0x194CA120)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x194CB160)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGNEWLUCKLISTPAGE_OFFSET UNITYSDK_OFFSET(0x194CB0B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDATELISTOFCURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x194C8660)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDRAWTIMESTRINGBYDATE_OFFSET UNITYSDK_OFFSET(0x194CA000)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETFIRSTSELECTTABINDEX_OFFSET UNITYSDK_OFFSET(0x194C8770)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETGRANDREWARDDATE_OFFSET UNITYSDK_OFFSET(0x194C9880)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETLUCKYKOIINFOLIST_OFFSET UNITYSDK_OFFSET(0x194CA260)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETPLAYERDATABYDATE_OFFSET UNITYSDK_OFFSET(0x194C96B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETREWARDLISTBYDATE_OFFSET UNITYSDK_OFFSET(0x194C9740)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLCHOOSEENDBYDATE_OFFSET UNITYSDK_OFFSET(0x194C99C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLREWARDREVEALBYDATE_OFFSET UNITYSDK_OFFSET(0x194C9F00)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSPECIALNUMBYDATE_OFFSET UNITYSDK_OFFSET(0x194C95E0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_LATESTLUCKYLISTDATE_OFFSET UNITYSDK_OFFSET(0x194CB200)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_REFRESHINGBYTIME_OFFSET UNITYSDK_OFFSET(0x194CB1E0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_WARMUPREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x194CB1C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_INITDATAREFRESHSEQUENCE_OFFSET UNITYSDK_OFFSET(0x194C8E70)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x194C7650)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x194CAF60)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEAFTERCHOOSE_OFFSET UNITYSDK_OFFSET(0x194C9360)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEBEGIN_OFFSET UNITYSDK_OFFSET(0x194C92C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x194C9190)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATELOCKED_OFFSET UNITYSDK_OFFSET(0x194C8FF0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALDELAYED_OFFSET UNITYSDK_OFFSET(0x194C9400)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALED_OFFSET UNITYSDK_OFFSET(0x194C94A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEVALIDTOCHOOSE_OFFSET UNITYSDK_OFFSET(0x194C9540)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEWAITING_OFFSET UNITYSDK_OFFSET(0x194C9090)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARDBYDATE_OFFSET UNITYSDK_OFFSET(0x194CAE40)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x194CAC80)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISFIRSTTABINDEXSELECTED_OFFSET UNITYSDK_OFFSET(0x194C8D70)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_JOINBYDATE_OFFSET UNITYSDK_OFFSET(0x194CA8B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_LATESTLUCKYLISTDATE_OFFSET UNITYSDK_OFFSET(0x194CB210)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_REFRESHINGBYTIME_OFFSET UNITYSDK_OFFSET(0x194CB1F0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_WARMUPREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x194CB1D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_TAKEREWARDBYDATE_OFFSET UNITYSDK_OFFSET(0x194CA970)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x194C76B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x194C76F0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x194CB220)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLCHOOSEENDBYDATE_OFFSET UNITYSDK_OFFSET(0x194C9A20)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLREWARDREVEALBYDATE_OFFSET UNITYSDK_OFFSET(0x194C9F60)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__INITDATAREFRESHSEQUENCE_B__8_0_OFFSET UNITYSDK_OFFSET(0x194CB320)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ONGETBENEFITACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0x194C7880)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ONTAKEBENEFITACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x194C7FF0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__PROCESSREMAINTIMERSTRING_OFFSET UNITYSDK_OFFSET(0x194C9AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitModule_TypeDefinitionIndex = 58657;

	class ActivityBenefitModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>* _DailyInfoDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyPlayerData*>* _DailyPlayerDataDict; // 0x18
		::System::UInt32 _LatestLuckyListDate_k__BackingField; // 0x20
		::System::Boolean _WarmupRewardTaken_k__BackingField; // 0x24
		::System::Boolean _RefreshingByTime_k__BackingField; // 0x25
		::System::Boolean _ExistingData; // 0x26
		::System::Boolean _WaitingDataRefresh; // 0x27

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

		::System::Void _OnGetBenefitActivityInfo(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__ONGETBENEFITACTIVITYINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeBenefitActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__ONTAKEBENEFITACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void GetDateListOfCurrentSeason(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDATELISTOFCURRENTSEASON_OFFSET))(this, a1);
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

		::System::Boolean IsCurrentDateLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATELOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateWaiting(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEWAITING_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateCompleted(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATECOMPLETED_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateBegin(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEBEGIN_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateAfterChoose(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEAFTERCHOOSE_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateRewardRevealDelayed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALDELAYED_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateRewardRevealed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALED_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentDateValidToChoose(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEVALIDTOCHOOSE_OFFSET))(this, a1);
		}

		::System::UInt32 GetSpecialNumByDate(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSPECIALNUMBYDATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityBenefitDailyPlayerData* GetPlayerDataByDate(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityBenefitDailyPlayerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETPLAYERDATABYDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetRewardListByDate(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETREWARDLISTBYDATE_OFFSET))(this, a1);
		}

		::System::UInt32 GetGrandRewardDate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETGRANDREWARDDATE_OFFSET))(this);
		}

		::System::String* GetShowTimeTillChooseEndByDate(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLCHOOSEENDBYDATE_OFFSET))(this, a1);
		}

		::System::String* GetShowTimeTillRewardRevealByDate(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLREWARDREVEALBYDATE_OFFSET))(this, a1);
		}

		::System::String* GetDrawTimeStringByDate(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDRAWTIMESTRINGBYDATE_OFFSET))(this, a1);
		}

		::System::Void CheckTimeMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_CHECKTIMEMARK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitDailyLuckyList>* GetLuckyKoiInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitDailyLuckyList>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GETLUCKYKOIINFOLIST_OFFSET))(this);
		}

		::System::Void JoinByDate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_JOINBYDATE_OFFSET))(this, a1);
		}

		::System::Void TakeRewardByDate(::Il2CppArray<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_TAKEREWARDBYDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsExistingUntakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARD_OFFSET))(this);
		}

		::System::Boolean IsExistingUntakenRewardByDate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARDBYDATE_OFFSET))(this, a1);
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

		::System::TimeSpan _GetTimeTillChooseEndByDate(::System::UInt32 a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLCHOOSEENDBYDATE_OFFSET))(this, a1);
		}

		::System::TimeSpan _GetTimeTillRewardRevealByDate(::System::UInt32 a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLREWARDREVEALBYDATE_OFFSET))(this, a1);
		}

		::System::String* _ProcessRemainTimerString(::System::TimeSpan a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__PROCESSREMAINTIMERSTRING_OFFSET))(this, a1);
		}

		::System::Boolean get_WarmupRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_WARMUPREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_WarmupRewardTaken(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_WARMUPREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean get_RefreshingByTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_REFRESHINGBYTIME_OFFSET))(this);
		}

		::System::Void set_RefreshingByTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_REFRESHINGBYTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_LatestLuckyListDate()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_LATESTLUCKYLISTDATE_OFFSET))(this);
		}

		::System::Void set_LatestLuckyListDate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_LATESTLUCKYLISTDATE_OFFSET))(this, a1);
		}

		::System::Void _InitDataRefreshSequence_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITMODULE__INITDATAREFRESHSEQUENCE_B__8_0_OFFSET))(this);
		}
	};
}
