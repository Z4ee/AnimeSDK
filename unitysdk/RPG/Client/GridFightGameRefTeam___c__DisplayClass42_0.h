#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9839680)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS42_0__GETMEMBERBYPOS_B__0_OFFSET UNITYSDK_OFFSET(0x983B200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass42_0_TypeDefinitionIndex = 52615;

	class GridFightGameRefTeam___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::UInt32 pos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMemberByPos_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS42_0__GETMEMBERBYPOS_B__0_OFFSET))(this, x);
		}
	};
}
