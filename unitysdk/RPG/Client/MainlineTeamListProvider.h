#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x15C0EC40)
#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER_GETTEAMSWITHEMPTY_OFFSET UNITYSDK_OFFSET(0x15C0F4B0)
#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER_GETTEAMS_OFFSET UNITYSDK_OFFSET(0x15C0ECB0)
#define RPG_CLIENT_MAINLINETEAMLISTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0EC30)

namespace RPG::Client
{
	inline static constexpr unsigned int MainlineTeamListProvider_TypeDefinitionIndex = 65107;

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
