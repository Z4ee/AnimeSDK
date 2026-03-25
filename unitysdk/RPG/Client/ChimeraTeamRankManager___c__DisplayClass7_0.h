#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93D6E90)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS7_0__GETRANKTEAMDATA_B__0_OFFSET UNITYSDK_OFFSET(0x93D7CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass7_0_TypeDefinitionIndex = 51513;

	class ChimeraTeamRankManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRankTeamData_b__0(::RPG::Client::ChimeraTeamData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS7_0__GETRANKTEAMDATA_B__0_OFFSET))(this, data);
		}
	};
}
