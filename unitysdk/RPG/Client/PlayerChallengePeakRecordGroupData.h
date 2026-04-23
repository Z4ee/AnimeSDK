#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_28;
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class PlayerChallengePeakRecordBossData; }
namespace RPG::Client { class PlayerChallengePeakRecordMobData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_BOSSRECORDDATA_OFFSET UNITYSDK_OFFSET(0xAD5AED0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_CHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0xAD5AEF0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xAD5AE90)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_ISPARTICIPATE_OFFSET UNITYSDK_OFFSET(0xAD5AF10)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_MOBRECORDDATALIST_OFFSET UNITYSDK_OFFSET(0xAD5AEB0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_BOSSRECORDDATA_OFFSET UNITYSDK_OFFSET(0xAD5AEE0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_CHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0xAD5AF00)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xAD5AEA0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_ISPARTICIPATE_OFFSET UNITYSDK_OFFSET(0xAD5AF20)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_MOBRECORDDATALIST_OFFSET UNITYSDK_OFFSET(0xAD5AEC0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAD5A570)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5A560)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordGroupData_TypeDefinitionIndex = 59128;

	class PlayerChallengePeakRecordGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>* _MobRecordDataList_k__BackingField; // 0x10
		::RPG::Client::ChallengePeakGroup* _ChallengePeakGroup_k__BackingField; // 0x18
		::RPG::Client::PlayerChallengePeakRecordBossData* _BossRecordData_k__BackingField; // 0x20
		::System::UInt32 _GroupID_k__BackingField; // 0x28
		::System::Boolean _IsParticipate_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_28* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>* get_MobRecordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_MOBRECORDDATALIST_OFFSET))(this);
		}

		::System::Void set_MobRecordDataList(::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlayerChallengePeakRecordMobData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_MOBRECORDDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::PlayerChallengePeakRecordBossData* get_BossRecordData()
		{
			return ((::RPG::Client::PlayerChallengePeakRecordBossData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_BOSSRECORDDATA_OFFSET))(this);
		}

		::System::Void set_BossRecordData(::RPG::Client::PlayerChallengePeakRecordBossData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerChallengePeakRecordBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_BOSSRECORDDATA_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakGroup* get_ChallengePeakGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_CHALLENGEPEAKGROUP_OFFSET))(this);
		}

		::System::Void set_ChallengePeakGroup(::RPG::Client::ChallengePeakGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_CHALLENGEPEAKGROUP_OFFSET))(this, value);
		}

		::System::Boolean get_IsParticipate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_GET_ISPARTICIPATE_OFFSET))(this);
		}

		::System::Void set_IsParticipate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDGROUPDATA_SET_ISPARTICIPATE_OFFSET))(this, value);
		}
	};
}
