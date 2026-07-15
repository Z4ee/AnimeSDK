#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_REGULARTEAMLISTPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1986B070)
#define RPG_CLIENT_REGULARTEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET UNITYSDK_OFFSET(0x1986B6D0)
#define RPG_CLIENT_REGULARTEAMLISTPROVIDER_GETTEAMS_OFFSET UNITYSDK_OFFSET(0x1986B0F0)
#define RPG_CLIENT_REGULARTEAMLISTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1986B0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RegularTeamListProvider_TypeDefinitionIndex = 65108;

	class RegularTeamListProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGULARTEAMLISTPROVIDER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RegularTeamListProvider* Create()
		{
			return ((::RPG::Client::RegularTeamListProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REGULARTEAMLISTPROVIDER_CREATE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeams()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGULARTEAMLISTPROVIDER_GETTEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeamsWithEmpty()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGULARTEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET))(this);
		}
	};
}
