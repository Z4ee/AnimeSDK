#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5777B0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS14_0__TRYBUYROLE_B__0_OFFSET UNITYSDK_OFFSET(0xA57A480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c__DisplayClass14_0_TypeDefinitionIndex = 60058;

	class GridFightRoleShop___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightShopRole* shopRole; // 0x10
		::System::UInt32 goodIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryBuyRole_b__0(::RPG::Client::GridFightShopRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS14_0__TRYBUYROLE_B__0_OFFSET))(this, role);
		}
	};
}
