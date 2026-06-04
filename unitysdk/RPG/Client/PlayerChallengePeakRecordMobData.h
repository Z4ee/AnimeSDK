#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_36;
class Class_1_D40936EF3BF54118_3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengePeak; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_BUILDLOCALDATA_OFFSET UNITYSDK_OFFSET(0xC499660)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC499CB0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEPEAKMOB_OFFSET UNITYSDK_OFFSET(0xC499C70)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_FINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xC499CE0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xC499C90)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xC499CD0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xC499D00)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0xC499C50)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC499CC0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEPEAKMOB_OFFSET UNITYSDK_OFFSET(0xC499C80)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_FINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xC499CF0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xC499CA0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xC499D10)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0xC499C60)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC4996D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4995E0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0xC4998F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordMobData_TypeDefinitionIndex = 60060;

	class PlayerChallengePeakRecordMobData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaxStarCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _ChallengeAvatarDataList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedTargetIDList_k__BackingField; // 0x18
		::RPG::Client::ChallengePeak* _ChallengePeakMob_k__BackingField; // 0x20
		::System::Boolean _IsClear_k__BackingField; // 0x28
		::System::UInt32 _MinUseTurn_k__BackingField; // 0x2C
		::System::UInt32 _PeakID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__CTOR_OFFSET))(this);
		}

		::System::Void BuildLocalData(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_BUILDLOCALDATA_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_455008579EB95638_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncLineup(::Class_1_D40936EF3BF54118_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__SYNCLINEUP_OFFSET))(this, a1);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_PEAKID_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* get_ChallengePeakMob()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEPEAKMOB_OFFSET))(this);
		}

		::System::Void set_ChallengePeakMob(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEPEAKMOB_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_ISCLEAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_ChallengeAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEAVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_ChallengeAvatarDataList(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEAVATARDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedTargetIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_FINISHEDTARGETIDLIST_OFFSET))(this);
		}

		::System::Void set_FinishedTargetIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_FINISHEDTARGETIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MINUSETURN_OFFSET))(this);
		}

		::System::Void set_MinUseTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_MINUSETURN_OFFSET))(this, a1);
		}
	};
}
