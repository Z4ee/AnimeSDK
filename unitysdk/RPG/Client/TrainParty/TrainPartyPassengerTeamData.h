#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::GameCore { class TrainPartyTeamRow; }
namespace RPG::GameCore { class TrainPartyWorkingBuffConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GETALLPASSENGERS_OFFSET UNITYSDK_OFFSET(0xE2740F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_DEFAULTSKILLINFO_OFFSET UNITYSDK_OFFSET(0xE2742C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_INITIALMEETINGSKILL_OFFSET UNITYSDK_OFFSET(0xE274270)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_LEADERPASSENGER_OFFSET UNITYSDK_OFFSET(0xE274150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_LEADERWORKINGBUFFID_OFFSET UNITYSDK_OFFSET(0xE274220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0xE274130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0xE2741B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_WORKINGBUFFROW_OFFSET UNITYSDK_OFFSET(0xE2743D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0xE274140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE273ED0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerTeamData_TypeDefinitionIndex = 74257;

	class TrainPartyPassengerTeamData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _LEADER_PASSENGER_INDEX = 0x0; // 0x0
		::RPG::GameCore::TrainPartyTeamRow* _Row; // 0x10
		::Il2CppArray<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _AllPassengers; // 0x18
		::System::UInt32 _TeamID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyGameInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetAllPassengers()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GETALLPASSENGERS_OFFSET))(this);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_SET_TEAMID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_LeaderPassenger()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_LEADERPASSENGER_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_TEAMNAME_OFFSET))(this);
		}

		::System::UInt32 get_LeaderWorkingBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_LEADERWORKINGBUFFID_OFFSET))(this);
		}

		::System::UInt32 get_InitialMeetingSkill()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_INITIALMEETINGSKILL_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* get_DefaultSkillInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_DEFAULTSKILLINFO_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyWorkingBuffConfigRow* get_WorkingBuffRow()
		{
			return ((::RPG::GameCore::TrainPartyWorkingBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERTEAMDATA_GET_WORKINGBUFFROW_OFFSET))(this);
		}
	};
}
