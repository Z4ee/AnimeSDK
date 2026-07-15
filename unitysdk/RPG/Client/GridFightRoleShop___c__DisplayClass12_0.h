#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD58310)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS12_0__GETSHOPROLECOUNTBYIDANDSTAR_B__0_OFFSET UNITYSDK_OFFSET(0x1AD5D050)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c__DisplayClass12_0_TypeDefinitionIndex = 62305;

	class GridFightRoleShop___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::UInt32 star; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShopRoleCountByIDAndStar_b__0(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS12_0__GETSHOPROLECOUNTBYIDANDSTAR_B__0_OFFSET))(this, a1);
		}
	};
}
