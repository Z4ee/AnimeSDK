#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_59;
namespace RPG::Client { class MonopolyJackpotData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195EC940)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETCURRENTJACKPOTDATA_OFFSET UNITYSDK_OFFSET(0x195ED6B0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATAS_OFFSET UNITYSDK_OFFSET(0x195ED370)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATA_OFFSET UNITYSDK_OFFSET(0x195ED5E0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETPROGRESSPHASEIDS_OFFSET UNITYSDK_OFFSET(0x195ED8B0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_CONTRIBUTIONNUM_OFFSET UNITYSDK_OFFSET(0x195EE130)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_EXTRAMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x195EDFB0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_ISPROGRESSEXTRA_OFFSET UNITYSDK_OFFSET(0x195EE000)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_JACKPOTLEVEL_OFFSET UNITYSDK_OFFSET(0x195EE080)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_JACKPOTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x195EE0E0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x195EDF60)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x195EDF40)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_HASAVAILABLEPROGRESSREWARD_OFFSET UNITYSDK_OFFSET(0x195EDD90)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x195EC7E0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x195EDC10)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDREACHED_OFFSET UNITYSDK_OFFSET(0x195EDB90)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x195EDAD0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SETPROGRESSREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x195ED120)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_CONTRIBUTIONNUM_OFFSET UNITYSDK_OFFSET(0x195EE140)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x195EDF50)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x195ED320)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCJACKPOTDATAS_OFFSET UNITYSDK_OFFSET(0x195ECAB0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x195ED0D0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x195ECA00)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO__CLEARALL_OFFSET UNITYSDK_OFFSET(0x195EC8A0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195EE150)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO__SYNCPROGRESSREWARDS_OFFSET UNITYSDK_OFFSET(0x195ED060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotInfo_TypeDefinitionIndex = 66302;

	class MonopolyJackpotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyJackpotData*>* _JackpotDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenProgressRewards; // 0x18
		::System::UInt64 _ContributionNum_k__BackingField; // 0x20
		::System::UInt32 _Progress_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO__CLEARALL_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_59* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncJackpotDatas(::Class_1_D40936EF3BF54118_59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCJACKPOTDATAS_OFFSET))(this, a1);
		}

		::System::Void SyncProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SetProgressRewardTaken(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SETPROGRESSREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Void SyncContribution(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCCONTRIBUTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyJackpotData*>* GetJackpotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyJackpotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATAS_OFFSET))(this);
		}

		::RPG::Client::MonopolyJackpotData* GetJackpotData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonopolyJackpotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MonopolyJackpotData* GetCurrentJackpotData()
		{
			return ((::RPG::Client::MonopolyJackpotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETCURRENTJACKPOTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetProgressPhaseIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETPROGRESSPHASEIDS_OFFSET))(this);
		}

		::System::Boolean IsProgressRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsProgressRewardReached(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDREACHED_OFFSET))(this, a1);
		}

		::System::Boolean IsProgressRewardAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDAVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean HasAvailableProgressReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_HASAVAILABLEPROGRESSREWARD_OFFSET))(this);
		}

		::System::Void _SyncProgressRewards(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO__SYNCPROGRESSREWARDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_NormalMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_NORMALMAXPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_ExtraMaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_EXTRAMAXPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsProgressExtra()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_ISPROGRESSEXTRA_OFFSET))(this);
		}

		::System::UInt32 get_JackpotLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_JACKPOTLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_JackpotMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_JACKPOTMAXLEVEL_OFFSET))(this);
		}

		::System::UInt64 get_ContributionNum()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_CONTRIBUTIONNUM_OFFSET))(this);
		}

		::System::Void set_ContributionNum(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_CONTRIBUTIONNUM_OFFSET))(this, a1);
		}
	};
}
