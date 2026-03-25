#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS172_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9830D60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS172_0___ADDEXPIREDTRAITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x98337A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass172_0_TypeDefinitionIndex = 52550;

	class GridFightGameRefData___c__DisplayClass172_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS172_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddExpiredTraitLayer_b__0(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS172_0___ADDEXPIREDTRAITLAYER_B__0_OFFSET))(this, x);
		}
	};
}
