#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMASSOCIATIONHELPER_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET UNITYSDK_OFFSET(0xE180C30)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamAssociationHelper_TypeDefinitionIndex = 68077;

	class TeamAssociationHelper : public ::System::Object
	{
	public:
		static ::System::Void SwitchTeamAssociationShowState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMASSOCIATIONHELPER_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET))();
		}
	};
}
