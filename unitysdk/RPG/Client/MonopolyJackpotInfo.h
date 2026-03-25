#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_46;
namespace RPG::Client { class MonopolyJackpotData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYJACKPOTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D69150)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETCURRENTJACKPOTDATA_OFFSET UNITYSDK_OFFSET(0x9D69CC0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATAS_OFFSET UNITYSDK_OFFSET(0x9D69A80)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATA_OFFSET UNITYSDK_OFFSET(0x9D69C40)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GETPROGRESSPHASEIDS_OFFSET UNITYSDK_OFFSET(0x9D69E50)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_CONTRIBUTIONNUM_OFFSET UNITYSDK_OFFSET(0x9D6A420)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_EXTRAMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D6A390)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_ISPROGRESSEXTRA_OFFSET UNITYSDK_OFFSET(0x9D6A3A0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_JACKPOTLEVEL_OFFSET UNITYSDK_OFFSET(0x9D6A3B0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_JACKPOTMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9D6A410)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_NORMALMAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D6A380)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9D6A360)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_HASAVAILABLEPROGRESSREWARD_OFFSET UNITYSDK_OFFSET(0x9D6A200)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9D68FC0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9D6A0F0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDREACHED_OFFSET UNITYSDK_OFFSET(0x9D6A070)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D6A010)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SETPROGRESSREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D698C0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_CONTRIBUTIONNUM_OFFSET UNITYSDK_OFFSET(0x9D6A430)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9D6A370)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x9D69A30)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCJACKPOTDATAS_OFFSET UNITYSDK_OFFSET(0x9D69300)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D69870)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9D69230)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO__CLEARALL_OFFSET UNITYSDK_OFFSET(0x9D690A0)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9D6A440)
#define RPG_CLIENT_MONOPOLYJACKPOTINFO__SYNCPROGRESSREWARDS_OFFSET UNITYSDK_OFFSET(0x9D697F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyJackpotInfo_TypeDefinitionIndex = 53874;

	class MonopolyJackpotInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenProgressRewards; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyJackpotData*>* _JackpotDatas; // 0x18
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

		::System::Void Sync(::Class_1_E7C4009BCC22497A_46* info, ::System::Collections::Generic::List_1<::System::UInt32>* takenRewards)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_46*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNC_OFFSET))(this, info, takenRewards);
		}

		::System::Void SyncJackpotDatas(::Class_1_E7C4009BCC22497A_46* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCJACKPOTDATAS_OFFSET))(this, info);
		}

		::System::Void SyncProgress(::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCPROGRESS_OFFSET))(this, progress);
		}

		::System::Void SetProgressRewardTaken(::System::Collections::Generic::List_1<::System::UInt32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SETPROGRESSREWARDTAKEN_OFFSET))(this, ids);
		}

		::System::Void SyncContribution(::System::UInt32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SYNCCONTRIBUTION_OFFSET))(this, num);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonopolyJackpotData*>* GetJackpotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonopolyJackpotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATAS_OFFSET))(this);
		}

		::RPG::Client::MonopolyJackpotData* GetJackpotData(::System::UInt32 id)
		{
			return ((::RPG::Client::MonopolyJackpotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETJACKPOTDATA_OFFSET))(this, id);
		}

		::RPG::Client::MonopolyJackpotData* GetCurrentJackpotData()
		{
			return ((::RPG::Client::MonopolyJackpotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETCURRENTJACKPOTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetProgressPhaseIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GETPROGRESSPHASEIDS_OFFSET))(this);
		}

		::System::Boolean IsProgressRewardTaken(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDTAKEN_OFFSET))(this, id);
		}

		::System::Boolean IsProgressRewardReached(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDREACHED_OFFSET))(this, id);
		}

		::System::Boolean IsProgressRewardAvailable(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_ISPROGRESSREWARDAVAILABLE_OFFSET))(this, id);
		}

		::System::Boolean HasAvailableProgressReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_HASAVAILABLEPROGRESSREWARD_OFFSET))(this);
		}

		::System::Void _SyncProgressRewards(::System::Collections::Generic::List_1<::System::UInt32>* takenRewards)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO__SYNCPROGRESSREWARDS_OFFSET))(this, takenRewards);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_PROGRESS_OFFSET))(this, value);
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

		::System::Void set_ContributionNum(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYJACKPOTINFO_SET_CONTRIBUTIONNUM_OFFSET))(this, value);
		}
	};
}
