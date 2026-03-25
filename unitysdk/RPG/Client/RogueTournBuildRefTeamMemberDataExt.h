#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISAVATAR_OFFSET UNITYSDK_OFFSET(0xA37D6A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISPATH_OFFSET UNITYSDK_OFFSET(0xA37D740)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamMemberDataExt_TypeDefinitionIndex = 55052;

	class RogueTournBuildRefTeamMemberDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsAvatar(::RPG::Client::IRogueTournBuildRefTeamMemberData* memberData)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISAVATAR_OFFSET))(memberData);
		}

		static ::System::Boolean IsPath(::RPG::Client::IRogueTournBuildRefTeamMemberData* memberData)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISPATH_OFFSET))(memberData);
		}
	};
}
