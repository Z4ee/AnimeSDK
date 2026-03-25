#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingPowerRankData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA51C100)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_FETCHSORTEDSAMEGROUPPOWERRANK_OFFSET UNITYSDK_OFFSET(0xA51C550)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETALLPOWERRANKROWLIST_OFFSET UNITYSDK_OFFSET(0xA515F70)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETBATTLEPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xA516000)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETCOMBATRANKID_OFFSET UNITYSDK_OFFSET(0xA51C1E0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETCURRENTPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0xA515E80)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKBYRANKID_OFFSET UNITYSDK_OFFSET(0xA515D60)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xA515BB0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA514C00)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SETCOMBATRANKID_OFFSET UNITYSDK_OFFSET(0xA5145D0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA51C1A0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA514BF0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__INITALLPOWERRANK_OFFSET UNITYSDK_OFFSET(0xA51BD40)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__INITSAMERANKGROUPDICT_OFFSET UNITYSDK_OFFSET(0xA51C070)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPowerRankInfo_TypeDefinitionIndex = 50298;

	class SwordTrainingPowerRankInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* _AllPowerRankData; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*>* _SameGroupPowerRankList; // 0x18
		::System::UInt32 _Battle_Power_Skill_Ratio; // 0x20
		::System::UInt32 _CombatRankID; // 0x24
		::System::UInt32 _Battle_Power_Status_Ratio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SYNC_OFFSET))(this);
		}

		::System::UInt32 GetCombatRankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETCOMBATRANKID_OFFSET))(this);
		}

		::System::Void SetCombatRankID(::System::UInt32 combatRankID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SETCOMBATRANKID_OFFSET))(this, combatRankID);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankRowByPowerValue(::System::UInt32 value)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankByRankID(::System::UInt32 rankID)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKBYRANKID_OFFSET))(this, rankID);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetCurrentPowerRankRow()
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETCURRENTPOWERRANKROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* GetAllPowerRankRowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETALLPOWERRANKROWLIST_OFFSET))(this);
		}

		::System::UInt32 GetBattlePowerValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETBATTLEPOWERVALUE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* FetchSortedSameGroupPowerRank(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_FETCHSORTEDSAMEGROUPPOWERRANK_OFFSET))(this, groupID);
		}

		::System::Void _InitAllPowerRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__INITALLPOWERRANK_OFFSET))(this);
		}

		::System::Void _InitSameRankGroupDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__INITSAMERANKGROUPDICT_OFFSET))(this);
		}
	};
}
