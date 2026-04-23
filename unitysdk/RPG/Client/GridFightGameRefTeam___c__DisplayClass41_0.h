#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D6950)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS41_0__ISROLEUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xA4D8D40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass41_0_TypeDefinitionIndex = 59653;

	class GridFightGameRefTeam___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsRoleUnlock_b__0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS41_0__ISROLEUNLOCK_B__0_OFFSET))(this, x);
		}
	};
}
