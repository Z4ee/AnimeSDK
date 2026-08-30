#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD3065A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS15_0__GETROLELEVELUP_B__0_OFFSET UNITYSDK_OFFSET(0xD309CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c__DisplayClass15_0_TypeDefinitionIndex = 65293;

	class GridFightRoleShop___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::UInt32 star; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRoleLevelUp_b__0(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS15_0__GETROLELEVELUP_B__0_OFFSET))(this, a1);
		}
	};
}
