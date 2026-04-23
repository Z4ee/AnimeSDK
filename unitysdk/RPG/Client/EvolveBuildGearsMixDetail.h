#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildGearDetail; }
namespace RPG::Client { class EvolveBuildGearLevelData; }
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class EvolveBuildTypeGearsDetail; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2BB3A0)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA2BBF20)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xA2BBF40)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_SET_SEASON_OFFSET UNITYSDK_OFFSET(0xA2BBF30)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__CREATELEVELDATA_OFFSET UNITYSDK_OFFSET(0xA2BBC30)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BB4F0)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__REFRESHFORGEDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB5B0)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__REFRESHMIXDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BB750)
#define RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__REFRESHWEAPONDETAILS_OFFSET UNITYSDK_OFFSET(0xA2BBD30)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearsMixDetail_TypeDefinitionIndex = 58773;

	class EvolveBuildGearsMixDetail : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTypeGearsDetail*>* TypeDetails; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildGearDetail*>* _ForgeDetails; // 0x20
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildGearsMixDetail* Create(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::RPG::Client::EvolveBuildGearsMixDetail*(*)(::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_CREATE_OFFSET))(season);
		}

		::RPG::Client::EvolveBuildGearLevelData* _CreateLevelData(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildGearLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__CREATELEVELDATA_OFFSET))(this, gearID);
		}

		::System::Void _RefreshForgeDetails()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__REFRESHFORGEDETAILS_OFFSET))(this);
		}

		::System::Void _RefreshWeaponDetails(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>* details)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildGearDetail*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__REFRESHWEAPONDETAILS_OFFSET))(this, details);
		}

		::System::Void _RefreshMixDetails()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL__REFRESHMIXDETAILS_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_SET_SEASON_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARSMIXDETAIL_GET__MODULE_OFFSET))(this);
		}
	};
}
