#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS154_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C9880)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS154_0__HASAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xA4CFB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass154_0_TypeDefinitionIndex = 59579;

	class GridFightGameRefData___c__DisplayClass154_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS154_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasAvatar_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS154_0__HASAVATAR_B__0_OFFSET))(this, x);
		}
	};
}
