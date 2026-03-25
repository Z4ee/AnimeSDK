#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9839180)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS26_0__GETSEASONROLE_B__0_OFFSET UNITYSDK_OFFSET(0x983B080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass26_0_TypeDefinitionIndex = 52613;

	class GridFightGameRefTeam___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSeasonRole_b__0(::RPG::Client::GridFightSeasonRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS26_0__GETSEASONROLE_B__0_OFFSET))(this, role);
		}
	};
}
