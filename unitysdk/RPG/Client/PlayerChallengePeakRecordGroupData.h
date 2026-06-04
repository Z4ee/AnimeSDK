#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_29;
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class PlayerChallengePeakRecordBossData; }
namespace RPG::Client { class PlayerChallengePeakRecordMobData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_BOSSRECORDDATA_OFFSET UNITYSDK_OFFSET(0xC499890)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_CHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0xC4998B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC499850)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_ISPARTICIPATE_OFFSET UNITYSDK_OFFSET(0xC4998D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_MOBRECORDDATALIST_OFFSET UNITYSDK_OFFSET(0xC499870)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_BOSSRECORDDATA_OFFSET UNITYSDK_OFFSET(0xC4998A0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_CHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0xC4998C0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC499860)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_ISPARTICIPATE_OFFSET UNITYSDK_OFFSET(0xC4998E0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_MOBRECORDDATALIST_OFFSET UNITYSDK_OFFSET(0xC499880)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC498E50)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC498E40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordGroupData_TypeDefinitionIndex = 60059;

	class PlayerChallengePeakRecordGroupData : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakGroup* _ChallengePeakGroup_k__BackingField; // 0x10
		::RPG::Client::PlayerChallengePeakRecordBossData* _BossRecordData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>* _MobRecordDataList_k__BackingField; // 0x20
		::System::UInt32 _GroupID_k__BackingField; // 0x28
		::System::Boolean _IsParticipate_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_29* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>* get_MobRecordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_MOBRECORDDATALIST_OFFSET))(this);
		}

		::System::Void set_MobRecordDataList(::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_MOBRECORDDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerChallengePeakRecordBossData* get_BossRecordData()
		{
			return ((::RPG::Client::PlayerChallengePeakRecordBossData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_BOSSRECORDDATA_OFFSET))(this);
		}

		::System::Void set_BossRecordData(::RPG::Client::PlayerChallengePeakRecordBossData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerChallengePeakRecordBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_BOSSRECORDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakGroup* get_ChallengePeakGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_CHALLENGEPEAKGROUP_OFFSET))(this);
		}

		::System::Void set_ChallengePeakGroup(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_CHALLENGEPEAKGROUP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsParticipate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_ISPARTICIPATE_OFFSET))(this);
		}

		::System::Void set_IsParticipate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_ISPARTICIPATE_OFFSET))(this, a1);
		}
	};
}
