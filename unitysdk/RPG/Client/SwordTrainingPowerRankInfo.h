#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingPowerRankData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C73F30)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_FETCHSORTEDSAMEGROUPPOWERRANK_OFFSET UNITYSDK_OFFSET(0x19C74340)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETALLPOWERRANKROWLIST_OFFSET UNITYSDK_OFFSET(0x19C6D840)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETBATTLEPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x19C6D8E0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETCOMBATRANKID_OFFSET UNITYSDK_OFFSET(0x19C74030)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETCURRENTPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0x19C6D750)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKBYRANKID_OFFSET UNITYSDK_OFFSET(0x19C6D610)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x19C6D4E0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x19C6C4F0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SETCOMBATRANKID_OFFSET UNITYSDK_OFFSET(0x19C6C060)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x19C73FF0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6C4E0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__INITALLPOWERRANK_OFFSET UNITYSDK_OFFSET(0x19C73A50)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO__INITSAMERANKGROUPDICT_OFFSET UNITYSDK_OFFSET(0x19C73EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPowerRankInfo_TypeDefinitionIndex = 59213;

	class SwordTrainingPowerRankInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*>* _SameGroupPowerRankList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* _AllPowerRankData; // 0x18
		::System::UInt32 _Battle_Power_Status_Ratio; // 0x20
		::System::UInt32 _Battle_Power_Skill_Ratio; // 0x24
		::System::UInt32 _CombatRankID; // 0x28

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

		::System::Void SetCombatRankID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_SETCOMBATRANKID_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankRowByPowerValue(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankByRankID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_GETPOWERRANKBYRANKID_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* FetchSortedSameGroupPowerRank(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO_FETCHSORTEDSAMEGROUPPOWERRANK_OFFSET))(this, a1);
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
