#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_36;
class Class_1_D40936EF3BF54118_8;
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_BUILDLOCALDATA_OFFSET UNITYSDK_OFFSET(0xAD5ACA0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xAD5B2C0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEPEAKMOB_OFFSET UNITYSDK_OFFSET(0xAD5B280)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_FINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xAD5B2F0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xAD5B2A0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xAD5B2E0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xAD5B310)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0xAD5B260)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xAD5B2D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEPEAKMOB_OFFSET UNITYSDK_OFFSET(0xAD5B290)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_FINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xAD5B300)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xAD5B2B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xAD5B320)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0xAD5B270)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAD5AD10)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5AC20)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0xAD5AF30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordMobData_TypeDefinitionIndex = 59129;

	class PlayerChallengePeakRecordMobData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaxStarCount = 0x3; // 0x0
		::RPG::Client::ChallengePeak* _ChallengePeakMob_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedTargetIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ChallengeAvatarDataList_k__BackingField; // 0x20
		::System::UInt32 _MinUseTurn_k__BackingField; // 0x28
		::System::Boolean _IsClear_k__BackingField; // 0x2C
		::System::UInt32 _PeakID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__CTOR_OFFSET))(this);
		}

		::System::Void BuildLocalData(::RPG::Client::ChallengePeak* peak)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_BUILDLOCALDATA_OFFSET))(this, peak);
		}

		::System::Void Sync(::Class_1_455008579EB95638_36* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void _SyncLineup(::Class_1_D40936EF3BF54118_8* lineup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__SYNCLINEUP_OFFSET))(this, lineup);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_PEAKID_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeak* get_ChallengePeakMob()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEPEAKMOB_OFFSET))(this);
		}

		::System::Void set_ChallengePeakMob(::RPG::Client::ChallengePeak* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEPEAKMOB_OFFSET))(this, value);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_ISCLEAR_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_ChallengeAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEAVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_ChallengeAvatarDataList(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEAVATARDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedTargetIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_FINISHEDTARGETIDLIST_OFFSET))(this);
		}

		::System::Void set_FinishedTargetIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_FINISHEDTARGETIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_MinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MINUSETURN_OFFSET))(this);
		}

		::System::Void set_MinUseTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_MINUSETURN_OFFSET))(this, value);
		}
	};
}
