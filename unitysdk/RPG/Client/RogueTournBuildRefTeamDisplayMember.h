#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamDisplayMember_TypeDefinitionIndex = 55049;

	struct alignas(8) RogueTournBuildRefTeamDisplayMember
	{
		::RPG::Client::IRogueTournBuildRefTeamMemberData* MemberData; // 0x10
		::System::Boolean IsInvalidForRecom; // 0x18
	};
}
