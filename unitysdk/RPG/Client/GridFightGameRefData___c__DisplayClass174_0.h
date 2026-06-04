#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS174_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB71670)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS174_0___ADDTRAITLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xBB74470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c__DisplayClass174_0_TypeDefinitionIndex = 60520;

	class GridFightGameRefData___c__DisplayClass174_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS174_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddTraitLayer_b__0(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__DISPLAYCLASS174_0___ADDTRAITLAYER_B__0_OFFSET))(this, a1);
		}
	};
}
