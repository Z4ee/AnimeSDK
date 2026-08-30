#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE134420)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_POWERREQUIRE_OFFSET UNITYSDK_OFFSET(0xE134830)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKGROUPID_OFFSET UNITYSDK_OFFSET(0xE1344F0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKGROUPNAME_OFFSET UNITYSDK_OFFSET(0xE1346B0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0xE134970)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKPROGRESSNAME_OFFSET UNITYSDK_OFFSET(0xE134770)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKSUBNAME_OFFSET UNITYSDK_OFFSET(0xE1345F0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xE1344B0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xE1348D0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xE134590)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE1344A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPowerRankData_TypeDefinitionIndex = 62047;

	class SwordTrainingPowerRankData : public ::System::Object
	{
	public:
		::System::UInt32 RankID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingPowerRankData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_RankGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKGROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankSubName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKSUBNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankGroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKGROUPNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankProgressName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKPROGRESSNAME_OFFSET))(this);
		}

		::System::UInt32 get_PowerRequire()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_POWERREQUIRE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET_RANKICON_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingPowerRankConfigRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingPowerRankConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKDATA_GET__ROW_OFFSET))(this);
		}
	};
}
