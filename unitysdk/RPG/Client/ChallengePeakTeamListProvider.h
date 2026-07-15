#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x191F6F50)
#define RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET UNITYSDK_OFFSET(0x191F77C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER_GETTEAMS_OFFSET UNITYSDK_OFFSET(0x191F6FC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x191F6F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamListProvider_TypeDefinitionIndex = 65105;

	class ChallengePeakTeamListProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakTeamListProvider* Create()
		{
			return ((::RPG::Client::ChallengePeakTeamListProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER_CREATE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeams()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER_GETTEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeamsWithEmpty()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET))(this);
		}
	};
}
