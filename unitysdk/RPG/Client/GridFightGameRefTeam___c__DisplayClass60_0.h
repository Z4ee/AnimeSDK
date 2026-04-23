#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D83B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__GETROLESBYTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0xA4D9350)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__GETROLESBYTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0xA4D9390)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__GETROLESBYTRAIT_B__3_OFFSET UNITYSDK_OFFSET(0xA4D9400)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass60_0_TypeDefinitionIndex = 59662;

	class GridFightGameRefTeam___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__GETROLESBYTRAIT_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetRolesByTrait_b__2(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__GETROLESBYTRAIT_B__2_OFFSET))(this, x);
		}

		::System::Boolean _GetRolesByTrait_b__3(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS60_0__GETROLESBYTRAIT_B__3_OFFSET))(this, x);
		}
	};
}
