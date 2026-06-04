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

#define RPG_CLIENT_ACTIVITYBENEFITMODULE_CHECKTIMEMARK_OFFSET UNITYSDK_OFFSET(0xB0A4550)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xB0A55A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_EXISTINGNEWLUCKLISTPAGE_OFFSET UNITYSDK_OFFSET(0xB0A54E0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDATELISTOFCURRENTSEASON_OFFSET UNITYSDK_OFFSET(0xB0A2AC0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETDRAWTIMESTRINGBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A4430)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETFIRSTSELECTTABINDEX_OFFSET UNITYSDK_OFFSET(0xB0A2BD0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETGRANDREWARDDATE_OFFSET UNITYSDK_OFFSET(0xB0A3CB0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETLUCKYKOIINFOLIST_OFFSET UNITYSDK_OFFSET(0xB0A4690)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETPLAYERDATABYDATE_OFFSET UNITYSDK_OFFSET(0xB0A3AE0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETREWARDLISTBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A3B70)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLCHOOSEENDBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A3DF0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSHOWTIMETILLREWARDREVEALBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A4330)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GETSPECIALNUMBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A3A10)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_LATESTLUCKYLISTDATE_OFFSET UNITYSDK_OFFSET(0xB0A5640)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_REFRESHINGBYTIME_OFFSET UNITYSDK_OFFSET(0xB0A5620)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_GET_WARMUPREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB0A5600)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_INITDATAREFRESHSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB0A32A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB0A1C90)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB0A5390)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEAFTERCHOOSE_OFFSET UNITYSDK_OFFSET(0xB0A3790)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEBEGIN_OFFSET UNITYSDK_OFFSET(0xB0A36F0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xB0A35C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATELOCKED_OFFSET UNITYSDK_OFFSET(0xB0A3420)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALDELAYED_OFFSET UNITYSDK_OFFSET(0xB0A3830)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEREWARDREVEALED_OFFSET UNITYSDK_OFFSET(0xB0A38D0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEVALIDTOCHOOSE_OFFSET UNITYSDK_OFFSET(0xB0A3970)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISCURRENTDATEWAITING_OFFSET UNITYSDK_OFFSET(0xB0A34C0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARDBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A5270)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISEXISTINGUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xB0A50B0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_ISFIRSTTABINDEXSELECTED_OFFSET UNITYSDK_OFFSET(0xB0A31A0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_JOINBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A4CE0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_LATESTLUCKYLISTDATE_OFFSET UNITYSDK_OFFSET(0xB0A5650)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_REFRESHINGBYTIME_OFFSET UNITYSDK_OFFSET(0xB0A5630)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_SET_WARMUPREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB0A5610)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE_TAKEREWARDBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A4DA0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0A1D20)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0A1D60)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A5660)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLCHOOSEENDBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A3E50)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__GETTIMETILLREWARDREVEALBYDATE_OFFSET UNITYSDK_OFFSET(0xB0A4390)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__INITDATAREFRESHSEQUENCE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB0A5760)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ONGETBENEFITACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0xB0A1EF0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__ONTAKEBENEFITACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB0A2530)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE__PROCESSREMAINTIMERSTRING_OFFSET UNITYSDK_OFFSET(0xB0A3EF0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB0A5770)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0A57F0)
#define RPG_CLIENT_ACTIVITYBENEFITMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0A5850)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitModule_TypeDefinitionIndex = 57395;

	class ActivityBenefitModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyInfo*>* _DailyInfoDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityBenefitDailyPlayerData*>* _DailyPlayerDataDict; // 0x18
		::System::UInt32 _LatestLuckyListDate_k__BackingField; // 0x20
		::System::Boolean _WaitingDataRefresh; // 0x24
		::System::Boolean _ExistingData; // 0x25
		::System::Boolean _RefreshingByTime_k__BackingField; // 0x26
		::System::Boolean _WarmupRewardTaken_k__BackingField; // 0x27

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
