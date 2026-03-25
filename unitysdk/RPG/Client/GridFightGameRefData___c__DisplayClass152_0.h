#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS152_0__CTOR_OFFSET UNITYSDK_OFFSET(0x982E1A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS152_0__HASAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x9833430)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass152_0_TypeDefinitionIndex = 52543;

	class GridFightGameRefData___c__DisplayClass152_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS152_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasAvatar_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS152_0__HASAVATAR_B__0_OFFSET))(this, x);
		}
	};
}
