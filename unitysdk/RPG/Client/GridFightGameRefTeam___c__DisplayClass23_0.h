#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9838D80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS23_0__GETROLEBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x983B020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass23_0_TypeDefinitionIndex = 52610;

	class GridFightGameRefTeam___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleByUID_b__0(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS23_0__GETROLEBYUID_B__0_OFFSET))(this, role);
		}
	};
}
