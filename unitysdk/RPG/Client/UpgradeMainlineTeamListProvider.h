#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UPGRADEMAINLINETEAMLISTPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0x183232B0)
#define RPG_CLIENT_UPGRADEMAINLINETEAMLISTPROVIDER_GETTEAMS_OFFSET UNITYSDK_OFFSET(0x18323320)
#define RPG_CLIENT_UPGRADEMAINLINETEAMLISTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x183232A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UpgradeMainlineTeamListProvider_TypeDefinitionIndex = 65109;

	class UpgradeMainlineTeamListProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEMAINLINETEAMLISTPROVIDER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UpgradeMainlineTeamListProvider* Create()
		{
			return ((::RPG::Client::UpgradeMainlineTeamListProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEMAINLINETEAMLISTPROVIDER_CREATE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* GetTeams()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPGRADEMAINLINETEAMLISTPROVIDER_GETTEAMS_OFFSET))(this);
		}
	};
}
