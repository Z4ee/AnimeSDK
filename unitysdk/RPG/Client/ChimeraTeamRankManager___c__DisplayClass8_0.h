#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamRowWrapper; }

#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF1CF0)
#define RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS8_0__GETTEAMROWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1BBF2B40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRankManager___c__DisplayClass8_0_TypeDefinitionIndex = 63506;

	class ChimeraTeamRankManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 teamID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTeamRowData_b__0(::RPG::Client::ChimeraTeamRowWrapper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamRowWrapper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMRANKMANAGER___C__DISPLAYCLASS8_0__GETTEAMROWDATA_B__0_OFFSET))(this, a1);
		}
	};
}
