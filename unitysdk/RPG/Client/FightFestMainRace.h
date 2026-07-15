#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestPlayerInfo; }
namespace RPG::Client { class FightFestRaceData; }
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x19736F60)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_RACEBGFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x19737100)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_RACEDATA_OFFSET UNITYSDK_OFFSET(0x19736F00)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_RACEID_OFFSET UNITYSDK_OFFSET(0x19736EE0)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x19736FB0)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_RIVALINFO_OFFSET UNITYSDK_OFFSET(0x19736F40)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_SELFINFO_OFFSET UNITYSDK_OFFSET(0x19736F20)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_STAGEENDDESC_OFFSET UNITYSDK_OFFSET(0x19737080)
#define RPG_CLIENT_FIGHTFESTMAINRACE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x19737000)
#define RPG_CLIENT_FIGHTFESTMAINRACE_SET_RACEDATA_OFFSET UNITYSDK_OFFSET(0x19736F10)
#define RPG_CLIENT_FIGHTFESTMAINRACE_SET_RACEID_OFFSET UNITYSDK_OFFSET(0x19736EF0)
#define RPG_CLIENT_FIGHTFESTMAINRACE_SET_RIVALINFO_OFFSET UNITYSDK_OFFSET(0x19736F50)
#define RPG_CLIENT_FIGHTFESTMAINRACE_SET_SELFINFO_OFFSET UNITYSDK_OFFSET(0x19736F30)
#define RPG_CLIENT_FIGHTFESTMAINRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19736D90)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestMainRace_TypeDefinitionIndex = 61263;

	class FightFestMainRace : public ::System::Object
	{
	public:
		::RPG::Client::FightFestPlayerInfo* _RivalInfo_k__BackingField; // 0x10
		::RPG::Client::FightFestPlayerInfo* _SelfInfo_k__BackingField; // 0x18
		::RPG::Client::FightFestRaceData* _RaceData_k__BackingField; // 0x20
		::RPG::GameCore::FightFestMainRaceRow* _Row; // 0x28
		::System::UInt32 _RaceID_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::FightFestMainRaceRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_RACEID_OFFSET))(this);
		}

		::System::Void set_RaceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_SET_RACEID_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestRaceData* get_RaceData()
		{
			return ((::RPG::Client::FightFestRaceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_RACEDATA_OFFSET))(this);
		}

		::System::Void set_RaceData(::RPG::Client::FightFestRaceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestRaceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_SET_RACEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestPlayerInfo* get_SelfInfo()
		{
			return ((::RPG::Client::FightFestPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_SELFINFO_OFFSET))(this);
		}

		::System::Void set_SelfInfo(::RPG::Client::FightFestPlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_SET_SELFINFO_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestPlayerInfo* get_RivalInfo()
		{
			return ((::RPG::Client::FightFestPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_RIVALINFO_OFFSET))(this);
		}

		::System::Void set_RivalInfo(::RPG::Client::FightFestPlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_SET_RIVALINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_PHASEID_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_REWARDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_STAGENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_StageEndDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_STAGEENDDESC_OFFSET))(this);
		}

		::System::String* get_RaceBgFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMAINRACE_GET_RACEBGFIGUREPATH_OFFSET))(this);
		}
	};
}
