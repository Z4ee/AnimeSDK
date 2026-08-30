#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0xD5B32F0)
#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET UNITYSDK_OFFSET(0xD5B3B60)
#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER_GETTEAMS_OFFSET UNITYSDK_OFFSET(0xD5B3360)
#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5B32E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MainlineTeamListProvider_TypeDefinitionIndex = 68115;

	class MainlineTeamListProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINLINETEAMLISTPROVIDER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MainlineTeamListProvider* Create()
		{
			return ((::RPG::Client::MainlineTeamListProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINLINETEAMLISTPROVIDER_CREATE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeams()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINLINETEAMLISTPROVIDER_GETTEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeamsWithEmpty()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINLINETEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET))(this);
		}
	};
}
