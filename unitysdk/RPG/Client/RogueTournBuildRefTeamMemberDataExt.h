#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISAVATAR_OFFSET UNITYSDK_OFFSET(0xC805860)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISPATH_OFFSET UNITYSDK_OFFSET(0xC805900)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamMemberDataExt_TypeDefinitionIndex = 63173;

	class RogueTournBuildRefTeamMemberDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsAvatar(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsPath(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMMEMBERDATAEXT_ISPATH_OFFSET))(a1);
		}
	};
}
