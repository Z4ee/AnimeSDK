#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_4A2801D02B2BB246_1;
class Class_1_FE8CB2A15AB397EA;
namespace RPG::Client { class PlayerChallengeTierceBriefRecord; }
namespace RPG::Client { class PlayerChallengeTierceStageRecord; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_BRIEFRECORD_OFFSET UNITYSDK_OFFSET(0xDBA3340)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0xDBA32E0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDBA0DF0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_STAGERECORDS_OFFSET UNITYSDK_OFFSET(0xDBA3350)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_STARCOUNT_OFFSET UNITYSDK_OFFSET(0xDBA32C0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xDBA3320)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_TOTALUSEROUNDS_OFFSET UNITYSDK_OFFSET(0xDBA3300)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_RESET_OFFSET UNITYSDK_OFFSET(0xDBA18C0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_CHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0xDBA32F0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_STARCOUNT_OFFSET UNITYSDK_OFFSET(0xDBA32D0)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xDBA3330)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_TOTALUSEROUNDS_OFFSET UNITYSDK_OFFSET(0xDBA3310)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SYNC_OFFSET UNITYSDK_OFFSET(0xDBA1990)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xDBA2770)
#define RPG_CLIENT_PLAYERCHALLENGETIERCERECORD__SYNCSTAGES_OFFSET UNITYSDK_OFFSET(0xDBA3360)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeTierceRecord_TypeDefinitionIndex = 64340;

	class PlayerChallengeTierceRecord : public ::System::Object
	{
	public:
		::RPG::Client::PlayerChallengeTierceBriefRecord* _BriefRecord_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengeTierceStageRecord*>* _StageRecords_k__BackingField; // 0x18
		::System::UInt32 _TotalUseRounds_k__BackingField; // 0x20
		::System::UInt32 _TotalScore_k__BackingField; // 0x24
		::System::UInt32 _StarCount_k__BackingField; // 0x28
		::System::UInt32 _ChallengeTimes_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_StarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_STARCOUNT_OFFSET))(this);
		}

		::System::Void set_StarCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_STARCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_CHALLENGETIMES_OFFSET))(this);
		}

		::System::Void set_ChallengeTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_CHALLENGETIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalUseRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_TOTALUSEROUNDS_OFFSET))(this);
		}

		::System::Void set_TotalUseRounds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_TOTALUSEROUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerChallengeTierceBriefRecord* get_BriefRecord()
		{
			return ((::RPG::Client::PlayerChallengeTierceBriefRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_BRIEFRECORD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengeTierceStageRecord*>* get_StageRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengeTierceStageRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_GET_STAGERECORDS_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4A2801D02B2BB246_1* a1, ::Class_1_06E38C65842C3B24* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4A2801D02B2BB246_1*, ::Class_1_06E38C65842C3B24*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_SYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD_RESET_OFFSET))(this);
		}

		::System::Void _SyncStages(::System::Collections::Generic::IList_1<::Class_1_FE8CB2A15AB397EA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FE8CB2A15AB397EA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGETIERCERECORD__SYNCSTAGES_OFFSET))(this, a1);
		}
	};
}
